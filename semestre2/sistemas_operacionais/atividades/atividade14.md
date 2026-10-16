Questão 1 

No subsistema de Entrada e Saída (I/O) do Kernel, a comunicação assíncrona baseada em Interrupções apresenta expressiva vantagem sobre a técnica de Polling (Escrutínio) porque: 

a) O Polling exige chips eletrônicos de DMA acoplados diretamente ao barramento USB.

b) No I/O por interrupções, a CPU submete a ordem ao hardware e fica livre para processar outras tarefas da fila de Pronto, sendo notificada de forma assíncrona por um sinal elétrico apenas quando a operação termina.

c) As interrupções banem o uso de Drivers de baixo nível desenvolvidos pelos fabricantes.

d) O Polling limita a formatação de volumes lógicos a partições do tipo GPT.

Resposta: B - No I/O por interrupções, a CPU submete a ordem ao hardware e fica livre para processar outras tarefas da fila de Pronto, sendo notificada de forma assíncrona por um sinal elétrico apenas quando a operação termina.

Questão 2 

Dispositivos de altíssima vazão de dados (como placas de rede de fibra óptica ou SSDs NVMe) sobrecarregariam a CPU se disparassem uma interrupção a cada byte transferido. Qual tecnologia resolve esse gargalo transferindo blocos massivos diretamente entre o periférico e a RAM sem a mediação constante da CPU? 

a) Spooling de Spoolers

b) Acesso Direto à Memória (Direct Memory Access - DMA)

c) Barramento Virtual de i-nodes

d) Buffer Circular Assíncrono

Resposta: B - Acesso Direto à Memória (Direct Memory Access - DMA)

Questão 3 

Os Drivers de Dispositivos (Device Drivers) operam como uma camada de software especializada de baixo nível. A função primordial de um driver perante o sistema operacional é: 

a) Substituir a interface de linha de comando (CLI) por ambientes gráficos amigáveis.

b) Atuar como tradutor universal inserido no Modo Kernel, convertendo chamadas sintáticas genéricas do SO nas rotinas binárias proprietárias exigidas pelo chip daquele controlador de hardware.

c) Limpar as partições dinâmicas eliminando fragmentações internas na RAM.

d) Gerenciar os níveis de prioridade estática através de técnicas de envelhecimento (aging).

Resposta: B - Atuar como tradutor universal inserido no Modo Kernel, convertendo chamadas sintáticas genéricas do SO nas rotinas binárias proprietárias exigidas pelo chip daquele controlador de hardware.

Questão 4 

A técnica de Spooling (largamente exemplificada por filas de impressão) é implementada pelo sistema operacional para gerenciar periféricos de Entrada/Saída caracterizados por: 

a) Operar sob taxas de vazão idênticas e síncronas às do clock do processador central.

b) Serem incapazes de intercalar ou misturar fluxos de dados de múltiplos processos concorrentes simultâneos sem corromper o resultado final.

c) Consumirem exclusivamente recursos preemptíveis mapeados no diretório /proc.

d) Exigirem tabelas de partições do tipo MBR com teto limite de arquitetura de 2 Terabytes.

Resposta: B - Serem incapazes de intercalar ou misturar fluxos de dados de múltiplos processos concorrentes simultâneos sem corromper o resultado final.

Questão 5 

Um analista de infraestrutura conectou um novo disco rígido físico vazio (/dev/sdb) a um servidor Linux. Qual é a sequência cronológica correta de comandos que ele deve disparar na CLI para criar uma partição, formatá-la em formato moderno e torná-la acessível para gravação no FHS? 

a) mount ➔ mkfs.ext4 ➔ fdisk

b) mkfs.ext4 ➔ fdisk ➔ mount

c) fdisk ➔ mkfs.ext4 ➔ mount

d) fdisk ➔ mount ➔ mkfs.ext4

Resposta: C - fdisk ➔ mkfs.ext4 ➔ mount