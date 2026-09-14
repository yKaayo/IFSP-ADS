Questão 1 

Na ciência dos sistemas operacionais, há uma distinção conceitual nítida entre um programa e um processo. Essa diferença baseia-se na premissa de que: 

a) Um programa é uma entidade ativa na RAM, enquanto um processo é uma estrutura contígua em lote.

b) Um programa é uma entidade passiva e estática gravada em disco, enquanto o processo é a representação ativa desse código em plena execução na memória.

c) Um processo não pode sofrer trocas de contexto ou chaveamentos pela CPU.

d) Um único programa em disco só pode dar origem a exatamente um processo por ciclo de boot.

Resposta: B - Um programa é uma entidade passiva e estática gravada em disco, enquanto o processo é a representação ativa desse código em plena execução na memória.

Questão 2 

Quando o Kernel carrega um processo na memória RAM, o espaço de endereçamento é segmentado em seções lógicas distintas. A região encarregada de gerenciar a alocação de memória dinâmica sob demanda em tempo de execução (ex: operadores new ou comandos malloc em linguagens de programação) é denominada: 

a) Text (Código)

b) Data (Dados Globais)

c) Stack (Pilha)

d) Heap 

Resposta: D - Heap 

Questão 3 

Cada processo possui uma estrutura de dados dedicada no Kernel chamada Bloco de Controle de Processo (PCB). Qual dos seguintes metadados não pertence ao escopo de armazenamento de um PCB padrão?

a) O identificador numérico único de processo (PID).

b) O Contador de Programa (Program Counter) indicando a próxima instrução a executar.

c) O código-fonte bruto em texto legível da aplicação escrito pelo desenvolvedor.

d) A cópia dos registradores físicos da CPU salvos durante uma interrupção.

Resposta: C - O código-fonte bruto em texto legível da aplicação escrito pelo desenvolvedor.

Questão 4

Na máquina de estados clássica que rege o ciclo de vida dos processos, qual transição lógica de estado ocorre de forma involuntária quando o tempo máximo de permanência de um processo na CPU expira (Timeout) devido à política do escalonador? 

a) Execução (Running) ➔ Pronto (Ready)

b) Execução (Running) ➔ Espera / Bloqueado (Waiting)

c) Espera (Waiting) ➔ Execução (Running)

d) Pronto (Ready) ➔ Novo (New)

Resposta: A - Execução (Running) ➔ Pronto (Ready)

Questão 5 

Um processo concluiu sua lógica operacional e morreu, porém sua entrada alocada ainda permanece retida na tabela interna do Kernel porque o processo pai falhou em coletar seu status de saída. Esse estado de anomalia sistêmica é classificado como: 

a) Processo Órfão (Orphan)

b) Processo Zumbi (Zombie)

c) Processo CPU-Bound

d) Processo Daemon

Resposta: B - Processo Zumbi (Zombie)
