#include <stdio.h>

#define MAX_PEOPLE 100

// Types
typedef struct
{
   char name[100];
   char area[100];
   char legacy[300];
} People;

// Enums
typedef enum
{
   NAME,
   AREA,
   LEGACY
} Ordering;

// Prototypes
void removeQuebraLinha(char *linha);
int getNames(People *people);
void order(People *people, Ordering option);
Ordering chooseOrdering();
char *getField(People *person, Ordering option);

void removeQuebraLinha(char *linha)
{
   linha[strcspn(linha, "\r\n")] = '\0';
}

int vetor_len = 0;

int getNames(People *people)
{
   FILE *file = fopen("names.txt", "r");

   if (file == NULL)
   {
      printf("Erro ao abrir o arquivo!\n");
      return 0;
   }

   char linha[300];

   // Get just the first name on the file once
   while (fgets(linha, sizeof(linha), file))
   {
      removeQuebraLinha(linha);

      if (strlen(linha) > 0)
      {
         strcpy(people[vetor_len].name, linha);
         break;
      }
   }

   // This while will keep reading the file a lot of times
   while (vetor_len < MAX_PEOPLE)
   {
      // Define the area
      while (fgets(linha, sizeof(linha), file))
      {
         removeQuebraLinha(linha);

         if (strlen(linha) > 0)
         {
            strcpy(people[vetor_len].area, linha);
            break;
         }
      }

      // Define the legacy
      while (fgets(linha, sizeof(linha), file))
      {
         removeQuebraLinha(linha);

         if (strlen(linha) > 0)
         {
            strcpy(people[vetor_len].legacy, linha);
            break;
         }
      }

      // Go to next person
      vetor_len++;

      int nameFound = 0;

      // Get the next name on the file if it exists
      while (fgets(linha, sizeof(linha), file))
      {
         removeQuebraLinha(linha);

         if (strlen(linha) > 0)
         {
            strcpy(people[vetor_len].name, linha);
            nameFound = 1; // It keep loop running
            break;
         }
      }

      if (!nameFound)
      {
         break;
      }
   }

   fclose(file);

   return vetor_len;
}

void order(People *people, Ordering option)
{
   int i, j;
   People aux;

   for (j = 0; j < vetor_len - 1; j++)
   {
      for (i = 0; i < vetor_len - 1 - j; i++)
      {
         char *current = getField(&people[i], option);
         char *next = getField(&people[i + 1], option);

         if (strcmp(current, next) > 0)
         {
            aux = people[i];
            people[i] = people[i + 1];
            people[i + 1] = aux;
         }
      }
   }
}

Ordering chooseOrdering()
{
   int option;

   do
   {
      printf("Escolha por qual caracteristica ordenar:\n");
      printf("1 - Nome\n");
      printf("2 - Area\n");
      printf("3 - Legado\n");
      printf("Qual opcao deseja: (Digite apenas o numero. Ex: 1) ");

      scanf("%d", &option);

      if (option < 1 || option > 3)
         printf("Opcao invalida!\n");

   } while (option < 1 || option > 3);

      return option - 1; // Enum start at 0
}

char *getField(People *person, Ordering option)
{
   switch (option)
   {
   case NAME:
      return (*person).name;

   case AREA:
      return (*person).area;

   case LEGACY:
      return (*person).legacy;
   }

   return NULL;
}

int main()
{
   People people[MAX_PEOPLE];

   getNames(people);

   Ordering option = chooseOrdering();

   order(people, option);

   printf("\n%-28s | %-28s | %-28s\n", "Nome", "Area", "Legado");
   for (int i = 0; i < vetor_len; i++)
   {
      printf("%-28s | %-28s | %-28s\n",
             people[i].name,
             people[i].area,
             people[i].legacy);
   }

   return 0;
}