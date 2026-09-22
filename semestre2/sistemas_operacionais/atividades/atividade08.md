Questão 1 

Threads são comumente referidas na literatura como "processos leves" (Lightweight Processes). A grande vantagem arquitetural de criar múltiplas threads dentro de um mesmo processo, em vez de gerar múltiplos processos independentes, reside no fato de que as threads: 

a) Não compartilham nenhuma estrutura física ou lógica de memória RAM.

b) Compartilham diretamente o espaço de código (Text), dados globais (Data) e arquivos abertos do processo pai, agilizando a comunicação.

c) Executam obrigatoriamente fora do espaço de Modo Kernel da CPU.

d) São imunes a problemas de sincronização ou condições de corrida.

Resposta: B - Compartilham diretamente o espaço de código (Text), dados globais (Data) e arquivos abertos do processo pai, agilizando a comunicação.

Questão 2 

O escalonador de processos (Scheduler) do Kernel utiliza algoritmos lógicos para arbitrar quem ganha o uso dos registradores da CPU. No escalonamento do tipo Preemptivo, a regra fundamental determina que: 

a) O Kernel possui autoridade e governança para interromper à força a tarefa corrente e ceder a CPU para outro processo da fila.

b) O processo em execução detém o monopólio absoluto da CPU até finalizar voluntariamente sua lógica.

c) Os menores surtos de CPU (bursts) são descartados em favor de tarefas em lote.

d) As trocas de contexto são banidas para neutralizar o desperdício computacional (overhead).

Resposta: A - O Kernel possui autoridade e governança para interromper à força a tarefa corrente e ceder a CPU para outro processo da fila.

Questão 3 

Considere o algoritmo de escalonamento Shortest Job First (SJF). Embora ele garanta matematicamente o menor tempo médio de espera teórico possível, sua implementação comercial em larga escala em sistemas operacionais reais é inviabilizada porque: 

a) Ele exige o uso de filas multiníveis estáticas do tipo FAT32.

b) É impossível prever com precisão absoluta e antecedência o tempo de duração do próximo surto de CPU de um software antes de rodá-lo.

c) Ele induz o aparecimento crônico do Efeito Comboio (Convoy Effect).

d) Ele opera exclusivamente sob preempção por fatias fixas de tempo (Quantum).

Resposta: B - É impossível prever com precisão absoluta e antecedência o tempo de duração do próximo surto de CPU de um software antes de rodá-lo.

Questão 4 

O algoritmo de alternância circular (Round Robin) concede a cada tarefa da fila de Pronto uma fatia de tempo delimitada denominada Quantum. Se um processo de computação massivo for alocado sob esse algoritmo e não terminar antes do esgotamento do seu Quantum, o que acontecerá? 

a) O Kernel abortará o programa aplicando um sinal coercitivo de interrupção.

b) O processo sofrerá preempção, terá seu contexto salvo no PCB e retornará para o fim da fila de Pronto.

c) O escalonador estenderá o tempo do processo indefinidamente até sua extinção.

d) A CPU entrará em estado de espera ocupada (busy waiting), congelando a GUI.

Resposta: B - O processo sofrerá preempção, terá seu contexto salvo no PCB e retornará para o fim da fila de Pronto.

Questão 5 

Em sistemas operacionais baseados em algoritmos de prioridade estática, processos de background com baixa relevância correm o risco de sofrer Inanição (Starvation) se a máquina receber fluxos ininterruptos de tarefas de alta prioridade. Qual técnica mitiga esse problema, elevando incrementalmente a prioridade de tarefas que esperam há muito tempo na fila? 

a) Multiplexagem Espacial

b) Envelhecimento (Aging)

c) Compactação de Contexto

d) Realimentação Multinível síncrona

Resposta: B - Envelhecimento (Aging)