Questão 1

Para resguardar o sistema contra instruções maliciosas ou falhas catastróficas de aplicações de usuário que possam derrubar o hardware, a CPU implementa níveis de privilégio físicos controlados por um bit de modo. Quais são esses dois modos de operação padrão? 

a) Modo Real e Modo Virtual de paginação.

b) Modo Usuário (não-privilegiado) e Modo Kernel (privilegiado).

c) Modo Cooperativo e Modo Preemptivo de clock.

d) Modo Monolítico e Modo Microkernel de barramento.

Resposta: B - Modo Usuário (não-privilegiado) e Modo Kernel (privilegiado).

Questão 2

Quando uma aplicação escrita por um desenvolvedor em TADS (ex: um programa em C ou Java) necessita realizar uma operação restrita e privilegiada, como ler dados de uma porta de rede ou gravar um arquivo em disco, qual mecanismo ela deve obrigatoriamente utilizar para solicitar esse serviço ao Kernel? 

a) Acessar diretamente os endereços lógicos da controladora de hardware via ponteiros brutos.

b) Disparar uma instrução de loop infinito em espaço de usuário para forçar o travamento do clock.

c) Invocar uma Chamada de Sistema (System Call) através de uma instrução de interrupção por software (Trap).

d) Executar uma biblioteca dinâmica de terceiros compilada fora do espaço do sistema de arquivos.

Resposta: C - Invocar uma Chamada de Sistema (System Call) através de uma instrução de interrupção por software (Trap).

Questão 3

No que se refere à arquitetura interna de construção de kernels, o modelo Monolítico diferencia-se do modelo Microkernel essencialmente porque: 

a) O modelo Monolítico executa quase todos os serviços do SO (gerência de memória, processos, drivers) dentro do mesmo espaço de endereçamento protegido do Modo Kernel, priorizando o desempenho.

b) O modelo Monolítico transfere os drivers e sistemas de arquivos para o Modo Usuário, comunicando-se via troca de mensagens genéricas.

c) O modelo Microkernel une todos os componentes em um único arquivo binário maciço indivisível, impedindo o uso de módulos carregáveis.

d) O modelo Microkernel é incapaz de suportar sistemas multiusuários ou realizar trocas de contexto na CPU.

Resposta: A - O modelo Monolítico executa quase todos os serviços do SO (gerência de memória, processos, drivers) dentro do mesmo espaço de endereçamento protegido do Modo Kernel, priorizando o desempenho.

Questão 4

O que ocorre fisicamente com o processador central (CPU) no momento exato em que uma instrução de interrupção por software (Trap) ou interrupção por hardware é disparada no sistema? 

a) A CPU ignora o sinal e continua a execução linear do programa de usuário atual sem alterações.

b) A CPU reinicia a máquina instantaneamente para limpar os registradores e os caches voláteis.

c) A CPU suspende temporariamente a execução do processo corrente, altera o bit de modo para o Modo Kernel e desvia o fluxo para um endereço fixo chamado Vetor de Interrupções.

d) A CPU delega os privilégios do Modo Kernel para o barramento PCIe de forma assíncrona.

Resposta: C - A CPU suspende temporariamente a execução do processo corrente, altera o bit de modo para o Modo Kernel e desvia o fluxo para um endereço fixo chamado Vetor de Interrupções.

Questão 5

Uma das grandes vantagens da arquitetura de sistemas operacionais baseada em Módulos Carregáveis de Kernel (como os LKMs utilizados no Linux moderno) é: 

a) A eliminação completa da necessidade de utilizar chamadas de sistema no espaço de usuário.

b) A capacidade de estender as funcionalidades do Kernel e adicionar drivers de novos hardwares dinamicamente em tempo de execução, sem a necessidade de reiniciar o servidor.

c) Forçar o isolamento de todos os processos em partições estáticas fixas de memória RAM.

d) Permitir que aplicações comuns de usuário executem instruções restritas sem alternar o bit de modo da CPU.

Resposta: B - A capacidade de estender as funcionalidades do Kernel e adicionar drivers de novos hardwares dinamicamente em tempo de execução, sem a necessidade de reiniciar o servidor.