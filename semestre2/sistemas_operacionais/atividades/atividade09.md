Questão 1

No desenvolvimento de aplicações multithreaded em TADS, a ausência de mecanismos de sincronização sobre variáveis globais compartilhadas pode gerar inconsistências destrutivas. Quando o resultado final de uma execução paralela depende estritamente da ordem cronológica de chaveamento das threads pela CPU, diz-se que o sistema sofre de uma:

a) Troca de contexto espúria (Context Switch overhead).

b) Condição de Corrida (Race Condition).

c) Inanição por hardware (Starvation).

d) Hiperpaginação de barramento (Thrashing).

Resposta: B - Condição de Corrida (Race Condition).

Questão 2 

A Seção Crítica representa o bloco de código-fonte de um software onde recursos compartilhados são ativamente acessados e modificados. Para garantir uma solução de sincronização matematicamente válida, o pilar da Exclusão Mútua (Mutual Exclusion) determina rigorosamente que:

a) Se uma thread está executando em sua seção crítica, nenhuma outra thread concorrente pode ingressar simultaneamente em trechos de código que alterem o mesmo recurso.

b) O Kernel deve forçar a CPU a rodar loops de espera ocupada (spinlock) para todas as tarefas de background.

c) Todos os processos devem prever e declarar seu pico máximo de consumo de hardware antes do boot.

d) A preempção por fatias de tempo (Quantum) deve ser desativada no espaço de usuário.

Resposta: A - Se uma thread está executando em sua seção crítica, nenhuma outra thread concorrente pode ingressar simultaneamente em trechos de código que alterem o mesmo recurso.

Questão 3 

Soluções puras de exclusão mútua implementadas via software em nível de usuário costumam falhar em sistemas multitarefa porque a própria checagem das variáveis de trava pode sofrer preempção no meio. Para sanar isso, a arquitetura física da CPU disponibiliza instruções assembly atômicas, caracterizadas por:

a) Dividir a execução lógica em subfilas assíncronas multinível.

b) Executar rotinas completas de leitura e modificação de memória em um único ciclo imutável de clock, sem risco de interrupção.

c) Processar dados em lote gravados exclusivamente em fitas magnéticas.

d) Isolar as variáveis globais dentro do segmento estático Text do processo.

Resposta: B - Executar rotinas completas de leitura e modificação de memória em um único ciclo imutável de clock, sem risco de interrupção.

Questão 4 

Os semáforos lógicos baseados nas premissas de Edsger Dijkstra controlam o acesso a recursos através de duas funções atômicas primitivas. O que ocorre nativamente com um processo que invoca a instrução primitiva wait() (operação P) no momento em que o contador do semáforo encontra-se zerado ($0$)?

a) O processo consome o saldo, ganha direitos privilegiados de Modo Kernel e avança.

b) O processo é abortado imediatamente com erro crítico de violação de segmentação.

c) O processo decrementa o contador, entra em estado de bloqueio/espera e é inserido na fila lógica do semáforo pelo Kernel.

d) O processo força a CPU a chavear para o estado Novo para reiniciar os descritores de I/O.

Resposta: C - O processo decrementa o contador, entra em estado de bloqueio/espera e é inserido na fila lógica do semáforo pelo Kernel.

Questão 5 

O clássico dilema computacional do Produtor-Consumidor exige uma orquestração fina de sincronização mútua de buffers circulares de tamanho finito. A premissa lógica de controle determina que:

a) O consumidor pode extrair dados mesmo se a estrutura estiver totalmente ociosa e vazia.

b) O produtor deve suspender sua atividade caso o buffer atinja sua capacidade máxima de preenchimento, aguardando o consumo de slots.

c) As escritas e leituras no buffer de dados devem banir o uso de semáforos binários ou Mutexes.

d) O buffer circular deve expandir seu tamanho dinamicamente consumindo a Stack da memória virtual.

Resposta: B - O produtor deve suspender sua atividade caso o buffer atinja sua capacidade máxima de preenchimento, aguardando o consumo de slots.