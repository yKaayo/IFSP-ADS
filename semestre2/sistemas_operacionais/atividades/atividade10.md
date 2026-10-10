Questão 1 

Um impasse (Deadlock) representa o congelamento perpétuo e mútuo de um conjunto de processos concorrentes. Esse cenário crítico de travamento total de software envolve essencialmente qual categoria de recursos gerenciados pelo sistema operacional? 

a) Recursos altamente preemptíveis, como o tempo de clock da CPU.

b) Recursos não-preemptíveis, que não podem ser confiscados pelo Kernel sem causar corrupção lógica (ex: travas de tabelas transacionais de bancos de dados).

c) Estruturas virtuais voláteis apagadas automaticamente a cada ciclo de preempção.

d) Pseudosistemas de arquivos temporários mapeados na RAM pelo diretório /proc.

Resposta: B - Recursos não-preemptíveis, que não podem ser confiscados pelo Kernel sem causar corrupção lógica (ex: travas de tabelas transacionais de bancos de dados).

Questão 2 

Segundo os teoremas fundacionais de Edward Coffman Jr., um estado de impasse só se cristaliza se quatro premissas de alocação coexistirem de forma síncrona. Qual das alternativas mapeia corretamente a condição de Posse e Espera (Hold and Wait)? 

a) Os recursos alocados não admitem remoção coercitiva ou assaltos por parte do Kernel.

b) Cada contêiner físico ou lógico está estritamente concedido a um único processo por vez.

c) Processos que já dominam e retêm a custódia de determinados recursos possuem prerrogativas para requerer novos itens adicionais.

d) Desenha-se uma cadeia lógica fechada de processos onde cada elemento aguarda pela liberação de um item do sucessor.

Resposta: C - Processos que já dominam e retêm a custódia de determinados recursos possuem prerrogativas para requerer novos itens adicionais.

Questão 3 

O Grafo de Alocação de Recursos (RAG) é uma modelagem matemática direcionada adotada para auditar a topologia lúdica de sistemas. Se um RAG exibir um ciclo (laço fechado) direcionado em um ambiente onde cada tipo de recurso dispõe de apenas uma única instância física, o diagnóstico indica: 

a) A ocorrência iminente e comprovada de um estado de Deadlock entre as tarefas do laço.

b) Que a partição lógica de dados sofre de graves problemas de fragmentação interna.

c) Que o escalonador atingiu o estado seguro utilizando o algoritmo do Banqueiro.

d) A necessidade de aplicar rotinas automáticas de journaling no sistema de arquivos.

Resposta: A - A ocorrência iminente e comprovada de um estado de Deadlock entre as tarefas do laço.

Questão 4 

Núcleos de sistemas operacionais de larga escala e uso comercial de mercado (como o Linux, Microsoft Windows e macOS) adotam uma política pragmática muito específica para gerenciar impasses, conhecida ironicamente na literatura como "O Algoritmo do Avestruz". Essa estratégia consiste essencialmente em: 

a) Rodar periodicamente algoritmos de varredura matricial complexos para banir as condições de Coffman.

b) Ignorar e omitir deliberadamente a possibilidade de ocorrência do fenômeno, delegando ao usuário ou desenvolvedor a ação de fechar ou reiniciar apps travados.

c) Confiscar à força todos os recursos não-preemptíveis a cada ciclo de esgotamento de Quantum.

d) Migrar dinamicamente os processos para subfilas multiníveis baseadas em envelhecimento (aging).

Resposta: B - Ignorar e omitir deliberadamente a possibilidade de ocorrência do fenômeno, delegando ao usuário ou desenvolvedor a ação de fechar ou reiniciar apps travados.

Questão 5 

Desenvolvido por Edsger Dijkstra, o Algoritmo do Banqueiro atua na evasão de deadlocks (Deadlock Avoidance). Embora matematicamente perfeito, sua aplicação prática em kernels comerciais de propósito geral é raramente utilizada porque o algoritmo exige: 

a) Que todas as partições do disco rígido sejam formatadas sob o padrão legado FAT16.

b) Que as aplicações informem ao SO, de forma antecipada e rigorosa, o pico máximo de recursos que demandarão ao longo de toda a sua execução (o que é imprevisível).

c) Desativar completamente o subsistema de memória virtual por paginação.

d) Que a CPU opere estritamente sob regime de escalonamento cooperativo monotarefa.

Resposta: B - Que as aplicações informem ao SO, de forma antecipada e rigorosa, o pico máximo de recursos que demandarão ao longo de toda a sua execução (o que é imprevisível).