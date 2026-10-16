Questão 1 

A métrica de Carga do Sistema (System Load) difere do indicador de uso percentual simples de CPU porque a Carga quantifica de forma agregada a volumetria de processos que estão: 

a) Alocados na seção de dados globais Data da memória RAM.

b) Consumindo ciclos de clock ou aguardando em fila nos estados lógicos de Execução (Running) e Pronto (Runnable), incluindo no Linux esperas ininterruptíveis de hardware.

c) Sendo desinstalados ou expurgados por comandos do gerenciador de pacotes APT.

d) Congelados permanentemente por falhas críticas de deadlocks e esperas circulares.

Resposta: B - Consumindo ciclos de clock ou aguardando em fila nos estados lógicos de Execução (Running) e Pronto (Runnable), incluindo no Linux esperas ininterruptíveis de hardware.

Questão 2 

Utilitários de console como o uptime exibem a carga do sistema fragmentada em três indicadores móveis ponderados cronologicamente. Esses valores refletem o comportamento técnico do host, respectivamente, em quais intervalos de tempo? 

a) Nos últimos 10 segundos, 30 segundos e 60 segundos.

b) Nos últimos 1 minuto, 5 minutos e 15 minutos.

c) Nas últimas 1 hora, 12 horas e 24 horas.

d) Nos últimos 5 minutos, 10 minutos e 20 minutos.

Resposta: B - Nos últimos 1 minuto, 5 minutos e 15 minutos.

Questão 3 

Considere que um servidor de banco de dados dotado de exatamente 2 Núcleos de CPU (Cores) apresenta uma métrica de Load Average estável e consolidada em 2.00. Sob a ótica de engenharia de performance, esse diagnóstico indica que: 

a) O servidor opera com 100% de ociosidade, desperdiçando recursos elétricos de barramento.

b) O host atingiu a sua capacidade máxima ideal de saturação, operando com os dois núcleos ocupados sem gerar filas de espera remanescentes.

c) A máquina virtual colapsou devido ao aparecimento crônico da Anomalia de Belady.

d) Os sistemas de arquivos acionaram o journaling preventivo para esvaziar a RAM.

Resposta: B - O host atingiu a sua capacidade máxima ideal de saturação, operando com os dois núcleos ocupados sem gerar filas de espera remanescentes.

Questão 4 

Um ambiente computacional é classificado formalmente como I/O-Bound quando o gargalo ou limitador absoluto de sua performance reside na lentidão dos periféricos de Entrada/Saída. Para flagrar esse cenário via CLI no Linux, o analista deve monitorar qual indicador métrico no cabeçalho do comando top? 

a) %us (Uso de CPU em espaço de usuário)

b) %sy (Uso de CPU em espaço de Kernel/sistema)

c) %wa ou %iowait (Percentual de tempo que a CPU queimou ciclos ociosa à espera de I/O pendente)

d) %id (Percentual de CPU totalmente ociosa e sem tarefas)

Resposta: C - %wa ou %iowait (Percentual de tempo que a CPU queimou ciclos ociosa à espera de I/O pendente)

Questão 5 

Qual comando poderoso da interface de linha de comando (CLI) do Linux lista analiticamente todos os arquivos físicos, diretórios estruturais ou sockets de comunicação de rede que estão abertos no sistema, revelando quais PIDs os estão controlando no momento? 

a) df -h

b) lsblk

c) lsof

d) vmstat

Resposta: C - lsof