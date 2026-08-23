Questão 1

O processo de inicialização fria (Boot) de um computador passa por várias fases ordenadas de hardware e software. O que ocorre durante a primeira fase, conhecida como POST (Power-On Self-Test)? 

a) O Kernel monta o sistema de arquivos raiz (/) em modo de leitura e escrita.

b) O firmware (BIOS/UEFI) executa testes diagnósticos automatizados para validar a integridade física inicial de componentes críticos (RAM, CPU, vídeo).

c) O bootloader GRUB transfere o controle dos registradores para o espaço de usuário.

d) O daemon systemd dispara de forma paralela as interfaces gráficas e o servidor SSH.

Resposta: B - O firmware (BIOS/UEFI) executa testes diagnósticos automatizados para validar a integridade física inicial de componentes críticos (RAM, CPU, vídeo).

Questão 2 

O GRUB (Grand Unified Bootloader) desempenha um papel de ponte estratégica no processo de boot do ecossistema Linux. A função principal deste software é: 

a) Ativar o firewall do sistema antes da carga da tabela de roteamento de redes.

b) Monitorar a temperatura dos barramentos físicos e executar a verificação do POST.

c) Extrair a imagem compactada do Kernel do SO do disco, inseri-la na memória RAM e entregar o controle da CPU a ela.

d) Gerenciar de forma centralizada os identificadores PID de espaço de usuário.

Resposta: C - Extrair a imagem compactada do Kernel do SO do disco, inseri-la na memória RAM e entregar o controle da CPU a ela.

Questão 3

Logo após assumir o controle total do hardware, o Kernel do Linux inicializa os drivers dos dispositivos e dispara o primeiro processo em espaço de usuário (User Space), atibuindo-lhe o PID 1. Nos sistemas Linux modernos, esse processo ancestral é o: 

a) bash

b) initd

c) systemd

d) kernel_main

Resposta: C - systemd

Questão 4 

Durante a análise de comportamento de um servidor Linux corporativo, o administrador de infraestrutura precisa inspecionar estatísticas finas em tempo real sobre a arquitetura da CPU emulada (núcleos, caches, fabricante). Em qual diretório virtual do FHS ele encontrará essas informações estruturadas em modo texto através do arquivo cpuinfo? 

a) /sys

b) /proc

c) /dev

d) /var/log

Resposta: B - /proc

Questão 5 

No padrão hierárquico FHS, o subdiretório /var/log possui relevância máxima para auditorias e diagnósticos de falhas em produção. Isso decorre do fato de que esse diretório: 

a) Armazena os binários de administração reservados ao superusuário.

b) Centraliza os pacotes e instaladores compactados baixados via gerenciador de pacotes APT.

c) Acumula os registros textuais dinâmicos de eventos de erro, auditoria de segurança e logs gerados pelo Kernel e daemons.

d) Guarda as bibliotecas compartilhadas estáticas necessárias para inicializar a VM.

Resposta: C - Acumula os registros textuais dinâmicos de eventos de erro, auditoria de segurança e logs gerados pelo Kernel e daemons.