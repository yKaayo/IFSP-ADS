#include <stdio.h>
#include <string.h>

// Tamanhos máximos usados nos campos das structs (evitam estouro de buffer)
#define PLATE_SIZE 10
#define NAME_SIZE 50
#define CNH_SIZE 20
#define PHONE_SIZE 20
#define STATUS_SIZE 20
#define MAX_RESULTS 100 // quantidade máxima de resultados guardados em uma busca

#define STATUS_AVAILABLE "Disponivel"
#define STATUS_RENTED "Alugado"

// Nomes dos arquivos de persistencia
const char *VEHICLES_FILE = "veiculos.bin";
const char *CLIENTS_FILE = "clientes.bin";
const char *RENTALS_FILE = "locacoes.bin";
const char *REPORT_FILE = "relatorio.txt";

// Structs
typedef struct
{
    char licensePlate[PLATE_SIZE];
    char model[NAME_SIZE];
    char brand[NAME_SIZE];
    int vehicleYear;
    float dailyValue;
    char status[STATUS_SIZE]; // Disponível ou Alugado
} Vehicle;

typedef struct
{
    char name[NAME_SIZE];
    char cnh[CNH_SIZE];
    char phone[PHONE_SIZE];
} Client;

typedef struct
{
    char vehiclePlate[PLATE_SIZE];
    char clientCnh[CNH_SIZE];
    int days;
    float totalValue;
} Rental;

// Define o número de opções automaticamente de busca para clientes começando do 0
typedef enum
{
    SEARCH_LICENSE_PLATE,
    SEARCH_MODEL,
    SEARCH_BRAND,
    SEARCH_YEAR
} VehicleSearchType;

typedef enum
{
    SEARCH_NAME,
    SEARCH_CNH,
    SEARCH_PHONE
} ClientSearchType;

// Protótipos
void divider();
void printVehicle(const Vehicle *v);
void printClient(const Client *c);

// Menus
void mainMenu();
void vehicleMenu();
void clientMenu();
void reportMenu();

// Veiculos
void registerVehicle();
void listVehicles();
int findVehicles(VehicleSearchType type, const char *value, int onlyAvailable, Vehicle *vehicleFound);
int searchVehicleMenu(int onlyAvailable, Vehicle *vehicleFound);
void updateVehicleStatus(const char *licensePlate, const char *newStatus);

// Clientes
void registerCustomer();
void listCustomers();
int findClients(ClientSearchType type, const char *value, Client *clientFound);
int searchCustomerMenu(Client *clientFound);

// Locação
void registerRental();

// Devolução
void returnServices();

// Relatorios
void listAvailableVehicles();
void rentalHistory();
void activeRentals();
void exportReportToFile();

// Utilitários
// Imprime uma linha separadora
void showLogo(const char *message)
{
    printf("\n");
    printf("=============================================================\n");
    printf(
        "                               _.-=\"_-         _\n"
        "                         _.-=\"   _-          | ||\"\"\"\"\"\"\"---._______     __..\n"
        "             ___.===\"\"\"\"-.______-,,,,,,,,,,,,`-''----\" \"\"\"\"\"       \"\"\"\"\"  __'\n"
        "      __.--\"\"     __        ,'                   o \\           __        [__|\n"
        " __-\"\"=======.--\"\"  \"\"--.=================================.--\"\"  \"\"--.=======:\n"
        "]       [w] : /        \\ : |========================|    : /        \\ :  [w] :\n"
        "V___________:|          |: |========================|    :|          |:   _-\"\"\n"
        " V__________: \\        / :_|=======================/_____: \\        / :__-\"\"\n"
        " -----------'  \"-____-\"  `-------------------------------'  \"-____-\"\n");

    printf("                                                           \n");
    printf("        %s                  \n", message);
    printf("=============================================================\n");
}

void divider()
{
    char line[31];
    int i;

    for (i = 0; i < 30; i++)
    {
        line[i] = '=';
    }
    line[30] = '\0';

    printf("%s\n", line);
}

// Exibe os dados de um veiculo
void printVehicle(const Vehicle *v)
{
    printf("Placa: %s\n", v->licensePlate);
    printf("Modelo: %s\n", v->model);
    printf("Marca: %s\n", v->brand);
    printf("Ano: %d\n", v->vehicleYear);
    printf("Valor Diario: R$ %.2f\n", v->dailyValue);
    printf("Status: %s\n", v->status);
}

// Exibe os dados de um cliente
void printClient(const Client *c)
{
    printf("Nome: %s\n", c->name);
    printf("CNH: %s\n", c->cnh);
    printf("Telefone: %s\n", c->phone);
}

// Menus
void mainMenu()
{
    int choice;

    showLogo("Sistema de Locacao de Veiculos");

    do
    {
        divider();
        printf("1. Veiculos\n");
        printf("2. Clientes\n");
        printf("3. Locacao\n");
        printf("4. Devolucao\n");
        printf("5. Relatorios\n");
        printf("6. Sair\n");
        divider();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            vehicleMenu();
            break;
        case 2:
            clientMenu();
            break;
        case 3:
            registerRental();
            break;
        case 4:
            returnServices();
            break;
        case 5:
            reportMenu();
            break;
        case 6:
            break;
        default:
            printf("Opcao invalida! Digite novamente.\n");
        }
    } while (choice != 6);

    showLogo("Ate logo!");
}

void vehicleMenu()
{
    int choice;

    do
    {
        divider();
        printf("1. Cadastrar veiculo\n");
        printf("2. Listar veiculos\n");
        printf("3. Buscar veiculo\n");
        printf("4. Voltar\n");
        divider();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            registerVehicle();
            break;
        case 2:
            listVehicles();
            break;
        case 3:
            Vehicle vehicle;
            searchVehicleMenu(0, &vehicle);
            break;
        case 4:
            break;
        default:
            printf("Opcao invalida! Digite novamente.\n");
        }
    } while (choice != 4);
}

void clientMenu()
{
    int choice;

    do
    {
        divider();
        printf("1. Cadastrar cliente\n");
        printf("2. Listar clientes\n");
        printf("3. Buscar cliente\n");
        printf("4. Voltar\n");
        divider();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            registerCustomer();
            break;
        case 2:
            listCustomers();
            break;
        case 3:
            Client client;
            searchCustomerMenu(&client);
            break;
        case 4:
            break;
        default:
            printf("Opcao invalida! Digite novamente.\n");
        }
    } while (choice != 4);
}

void reportMenu()
{
    int choice;

    do
    {
        divider();
        printf("1. Veiculos disponiveis\n");
        printf("2. Historico de locacoes\n");
        printf("3. Locacoes ativas\n");
        printf("4. Exportar relatorio (.txt)\n");
        printf("5. Voltar\n");
        divider();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            listAvailableVehicles();
            break;
        case 2:
            rentalHistory();
            break;
        case 3:
            activeRentals();
            break;
        case 4:
            exportReportToFile();
            break;
        case 5:
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (choice != 5);
}

// Seção Veiculos
void registerVehicle()
{
    Vehicle vehicle;
    int confirm, again, statusChoice;

    do
    {
        divider();
        printf("Digite a placa do veiculo: ");
        scanf("%9s", vehicle.licensePlate);

        printf("Digite o modelo do veiculo: ");
        scanf("%49s", vehicle.model);

        printf("Digite a marca do veiculo: ");
        scanf("%49s", vehicle.brand);

        printf("Digite o ano do veiculo: ");
        scanf("%d", &vehicle.vehicleYear);

        printf("Digite o valor diario do veiculo: ");
        scanf("%f", &vehicle.dailyValue);

        printf("Status do veiculo (1- Disponivel / 2- Alugado): ");
        scanf("%d", &statusChoice);
        strcpy(vehicle.status, statusChoice == 1 ? STATUS_AVAILABLE : STATUS_RENTED);

        divider();
        printf("Confira os dados informados:\n");
        printVehicle(&vehicle);
        divider();

        printf("Confirmar cadastro? (1- Sim / 2- Corrigir os dados): ");
        scanf("%d", &confirm);

        if (confirm == 1)
        {
            FILE *file = fopen(VEHICLES_FILE, "ab");

            if (file == NULL)
            {
                printf("Erro ao tentar salvar os dados do veiculo!\n");
                return;
            }

            fwrite(&vehicle, sizeof(Vehicle), 1, file);
            fclose(file);

            printf("Veiculo cadastrado com sucesso!\n");
            printf("Deseja cadastrar outro veiculo? (1- Sim / 2- Nao): ");
            scanf("%d", &again);
        }
        else
        {
            again = 1;
        }
    } while (again == 1);
}

void listVehicles()
{
    FILE *file;
    Vehicle vehicle;

    file = fopen(VEHICLES_FILE, "rb");
    if (file == NULL)
    {
        printf("Nenhum veiculo cadastrado ainda.\n");
        return;
    }

    divider();
    printf("VEICULOS CADASTRADOS\n");
    divider();

    fread(&vehicle, sizeof(Vehicle), 1, file);
    while (!feof(file))
    {
        printVehicle(&vehicle);
        divider();
        fread(&vehicle, sizeof(Vehicle), 1, file);
    }

    fclose(file);
}

// Busca veiculos no arquivo. Se onlyAvailable for diferente de 0, somente veiculos com status "Disponivel" entram no resultado.
int findVehicles(VehicleSearchType type, const char *value, int onlyAvailable, Vehicle *vehicleFound)
{
    FILE *file;
    Vehicle current;
    Vehicle matches[MAX_RESULTS];
    int total = 0;
    int match;
    int i;
    int choice;
    char yearStr[10];

    file = fopen(VEHICLES_FILE, "rb");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo de veiculos!\n");
        return 0;
    }

    while (total < MAX_RESULTS && fread(&current, sizeof(Vehicle), 1, file) == 1)
    {
        if (onlyAvailable && strcmp(current.status, STATUS_AVAILABLE) != 0)
        {
            continue; // Ignora veiculos alugados quando a busca quer apenas os "Disponiveis"
        }

        match = 0;
        switch (type)
        {
        case SEARCH_LICENSE_PLATE:
            match = strstr(current.licensePlate, value) != NULL;
            break;
        case SEARCH_MODEL:
            match = strstr(current.model, value) != NULL;
            break;
        case SEARCH_BRAND:
            match = strstr(current.brand, value) != NULL;
            break;
        case SEARCH_YEAR:
            sprintf(yearStr, "%d", current.vehicleYear);
            match = strstr(yearStr, value) != NULL;
            break;
        }

        if (match)
        {
            matches[total] = current;
            total++;
        }
    }
    fclose(file);

    if (total == 0)
    {
        return 0;
    }

    divider();
    for (i = 0; i < total; i++)
    {
        printf("%d - Placa: %s | Modelo: %s | Marca: %s | Ano: %d\n",
               i + 1, matches[i].licensePlate, matches[i].model,
               matches[i].brand, matches[i].vehicleYear);
    }

    printf("\nEscolha um veiculo pelo numero: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > total)
    {
        printf("Opcao invalida!\n");
        return 0;
    }

    *vehicleFound = matches[choice - 1];
    return 1;
}

int searchVehicleMenu(int onlyAvailable, Vehicle *vehicleFound)
{
    int option;
    char value[100];

    do
    {
        divider();
        printf("Pesquisar veiculo por:\n");
        printf("1. Placa\n2. Modelo\n3. Marca\n4. Ano\n5. Voltar\n");
        divider();
        scanf("%d", &option);

        if (option >= 1 && option <= 4)
        {
            printf("Digite o valor: ");
            scanf(" %99[^\n]", value);

            if (findVehicles((VehicleSearchType)(option - 1), value, onlyAvailable, vehicleFound))
            {
                return 1;
            }
            printf("Nenhum veiculo encontrado.\n");
        }
        else if (option != 5)
        {
            printf("Opcao invalida!\n");
        }
    } while (option != 5);

    return 0;
}

// Atualiza o status (Disponivel/Alugado) do veiculo com a placa informada
void updateVehicleStatus(const char *licensePlate, const char *newStatus)
{
    FILE *file;
    Vehicle vehicle;

    file = fopen(VEHICLES_FILE, "rb+");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo de veiculos!\n");
        return;
    }

    while (fread(&vehicle, sizeof(Vehicle), 1, file) == 1)
    {
        if (strcmp(vehicle.licensePlate, licensePlate) == 0)
        {
            strcpy(vehicle.status, newStatus);

            fseek(file, -(long)sizeof(Vehicle), SEEK_CUR);
            fwrite(&vehicle, sizeof(Vehicle), 1, file);
            break;
        }
    }

    fclose(file);
}
// Seção Veiculos - Fim

// Seção Clientes
void registerCustomer()
{
    Client client;
    int confirm, again;

    do
    {
        divider();
        printf("Digite o nome do cliente: ");
        scanf("%49s", client.name);

        printf("Digite a CNH do cliente: ");
        scanf("%19s", client.cnh);

        printf("Digite o telefone do cliente: ");
        scanf("%19s", client.phone);

        divider();
        printf("Confira os dados informados:\n");
        printClient(&client);
        divider();

        printf("Confirmar cadastro? (1- Sim / 2- Corrigir os dados): ");
        scanf("%d", &confirm);

        if (confirm == 1)
        {
            FILE *file = fopen(CLIENTS_FILE, "ab");

            if (file == NULL)
            {
                printf("Erro ao tentar salvar os dados do cliente!\n");
                return;
            }

            fwrite(&client, sizeof(Client), 1, file);
            fclose(file);

            printf("Cliente cadastrado com sucesso!\n");
            printf("Deseja cadastrar outro cliente? (1- Sim / 2- Nao): ");
            scanf("%d", &again);
        }
        else
        {
            again = 1;
        }
    } while (again == 1);
}

void listCustomers()
{
    FILE *file;
    Client client;

    file = fopen(CLIENTS_FILE, "rb");
    if (file == NULL)
    {
        printf("Nenhum cliente cadastrado ainda.\n");
        return;
    }

    divider();
    printf("CLIENTES CADASTRADOS\n");
    divider();

    while (fread(&client, sizeof(Client), 1, file) == 1)
    {
        printClient(&client);
        divider();
    }

    fclose(file);
}

int findClients(ClientSearchType type, const char *value, Client *clientFound)
{
    FILE *file;
    Client current;
    Client matches[MAX_RESULTS];
    int total = 0;
    int match;
    int i;
    int choice;

    file = fopen(CLIENTS_FILE, "rb");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo de clientes!\n");
        return 0;
    }

    while (total < MAX_RESULTS && fread(&current, sizeof(Client), 1, file) == 1)
    {
        match = 0;
        switch (type)
        {
        case SEARCH_NAME:
            match = strstr(current.name, value) != NULL;
            break;
        case SEARCH_CNH:
            match = strstr(current.cnh, value) != NULL;
            break;
        case SEARCH_PHONE:
            match = strstr(current.phone, value) != NULL;
            break;
        }

        if (match)
        {
            matches[total] = current;
            total++;
        }
    }
    fclose(file);

    if (total == 0)
    {
        return 0;
    }

    divider();
    for (i = 0; i < total; i++)
    {
        printf("%d - %s | CNH: %s | Telefone: %s\n",
               i + 1, matches[i].name, matches[i].cnh, matches[i].phone);
    }

    printf("\nEscolha um cliente pelo numero: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > total)
    {
        printf("Opcao invalida!\n");
        return 0;
    }

    *clientFound = matches[choice - 1];
    return 1;
}

int searchCustomerMenu(Client *clientFound)
{
    int option;
    char value[100];

    do
    {
        divider();
        printf("Pesquisar cliente por:\n");
        printf("1. Nome\n2. CNH\n3. Telefone\n4. Voltar\n");
        divider();
        scanf("%d", &option);

        if (option >= 1 && option <= 3)
        {
            printf("Digite o valor: ");
            scanf(" %99[^\n]", value);

            if (findClients((ClientSearchType)(option - 1), value, clientFound))
            {
                return 1;
            }
            printf("Cliente nao encontrado.\n");
        }
        else if (option != 4)
        {
            printf("Opcao invalida!\n");
        }
    } while (option != 4);

    return 0;
}
// Seção Clientes - Fim

// Seção Locação
void registerRental()
{
    Vehicle vehicle;
    Client client;
    int days, option;
    float total;
    Rental rental;
    FILE *file;

    divider();
    printf("Selecione o veiculo disponivel para locacao:\n");
    if (!searchVehicleMenu(1, &vehicle)) //  Se 1 = busca somente entre veiculos disponiveis
    {
        printf("Locacao cancelada.\n");
        return;
    }

    printf("\nVeiculo selecionado:\n");
    printVehicle(&vehicle);

    divider();
    printf("Selecione o cliente:\n");
    if (!searchCustomerMenu(&client))
    {
        printf("Locacao cancelada.\n");
        return;
    }

    printf("\nCliente selecionado:\n");
    printClient(&client);

    divider();
    printf("Quantos dias o veiculo sera alugado? ");
    scanf("%d", &days);

    total = days * vehicle.dailyValue;
    printf("Valor total estimado: R$ %.2f\n", total);
    printf("Confirmar locacao? (1- Sim / 2- Nao): ");
    scanf("%d", &option);

    if (option != 1)
    {
        printf("Locacao cancelada.\n");
        return;
    }

    strcpy(rental.vehiclePlate, vehicle.licensePlate);
    strcpy(rental.clientCnh, client.cnh);
    rental.days = days;
    rental.totalValue = total;

    file = fopen(RENTALS_FILE, "ab");
    if (file != NULL)
    {
        fwrite(&rental, sizeof(Rental), 1, file);
        fclose(file);
    }

    updateVehicleStatus(vehicle.licensePlate, STATUS_RENTED);
    printf("\nLocacao realizada com sucesso!\n");
}
// Seção Locação - Fim

// Seção Devolução
void returnServices()
{
    Vehicle vehicle;
    Client client;
    int option;

    divider();
    printf("Selecione o veiculo a ser devolvido:\n");
    if (!searchVehicleMenu(0, &vehicle))
    {
        printf("Devolucao cancelada.\n");
        return;
    }

    if (strcmp(vehicle.status, STATUS_AVAILABLE) == 0)
    {
        printf("Este veiculo nao esta alugado!\n");
        return;
    }

    printf("\nVeiculo selecionado:\n");
    printVehicle(&vehicle);

    divider();
    printf("Selecione o cliente que esta devolvendo:\n");
    if (!searchCustomerMenu(&client))
    {
        printf("Devolucao cancelada.\n");
        return;
    }

    printf("\nCliente selecionado:\n");
    printClient(&client);

    printf("\nConfirmar devolucao? (1- Sim / 2- Nao): ");
    scanf("%d", &option);

    if (option != 1)
    {
        printf("Devolucao cancelada.\n");
        return;
    }

    updateVehicleStatus(vehicle.licensePlate, STATUS_AVAILABLE);
    printf("\nVeiculo devolvido com sucesso! Status atualizado para Disponivel.\n");
}
// Seção Devolução - Fim

// Seção Relatórios
void listAvailableVehicles()
{
    FILE *file;
    Vehicle vehicle;

    file = fopen(VEHICLES_FILE, "rb");
    if (file == NULL)
    {
        printf("Nenhum veiculo cadastrado.\n");
        return;
    }

    divider();
    printf("VEICULOS DISPONIVEIS\n");
    divider();

    while (fread(&vehicle, sizeof(Vehicle), 1, file) == 1)
    {
        if (strcmp(vehicle.status, STATUS_AVAILABLE) == 0)
        {
            printVehicle(&vehicle);
            divider();
        }
    }

    fclose(file);
}

void rentalHistory()
{
    FILE *file;
    Rental rental;

    file = fopen(RENTALS_FILE, "rb");
    if (file == NULL)
    {
        printf("Nenhuma locacao registrada.\n");
        return;
    }

    divider();
    printf("HISTORICO DE LOCACOES\n");
    divider();

    while (fread(&rental, sizeof(Rental), 1, file) == 1)
    {
        printf("Placa: %s | CNH Cliente: %s | Dias: %d | Total: R$ %.2f\n",
               rental.vehiclePlate, rental.clientCnh, rental.days, rental.totalValue);
    }

    fclose(file);
}

void activeRentals()
{
    FILE *file;
    Vehicle vehicle;

    file = fopen(VEHICLES_FILE, "rb");
    if (file == NULL)
    {
        printf("Nenhum veiculo cadastrado.\n");
        return;
    }

    divider();
    printf("LOCACOES ATIVAS\n");
    divider();

    while (fread(&vehicle, sizeof(Vehicle), 1, file) == 1)
    {
        if (strcmp(vehicle.status, STATUS_RENTED) == 0)
        {
            printVehicle(&vehicle);
            divider();
        }
    }

    fclose(file);
}

void exportReportToFile()
{
    FILE *vehiclesFile;
    FILE *report;
    Vehicle vehicle;

    vehiclesFile = fopen(VEHICLES_FILE, "rb");
    report = fopen(REPORT_FILE, "w");

    if (vehiclesFile == NULL || report == NULL)
    {
        printf("Erro ao gerar o relatorio.\n");
        if (vehiclesFile != NULL)
            fclose(vehiclesFile);
        if (report != NULL)
            fclose(report);
        return;
    }

    fprintf(report, "===== RELATORIO DE VEICULOS DISPONIVEIS =====\n");

    while (fread(&vehicle, sizeof(Vehicle), 1, vehiclesFile) == 1)
    {
        if (strcmp(vehicle.status, STATUS_AVAILABLE) == 0)
        {
            fprintf(report, "Placa: %s | Modelo: %s | Marca: %s | Ano: %d | Diaria: R$ %.2f\n",
                    vehicle.licensePlate, vehicle.model, vehicle.brand,
                    vehicle.vehicleYear, vehicle.dailyValue);
        }
    }

    fclose(vehiclesFile);
    fclose(report);

    printf("Relatorio salvo em \"%s\" com sucesso!\n", REPORT_FILE);
}
// Seção Relatórios - Fim

int main()
{
    mainMenu();

    return 0;
}