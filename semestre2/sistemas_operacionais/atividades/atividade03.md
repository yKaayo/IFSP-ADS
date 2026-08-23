Questão 1

A especificação Filesystem Hierarchy Standard (FHS) normatiza a árvore unificada de diretórios em sistemas baseados em Unix/Linux. Em qual diretório do FHS estão localizados, de forma mandatória, os comandos e arquivos binários essenciais que podem ser executados por qualquer usuário do sistema (como ls, cd e cp)? 

a) /sbin

b) /etc

c) /bin

d) /usr/sbin

Resposta: C - /bin

Questão 2

No Linux, o diretório /etc desempenha um papel crítico na administração do servidor. Qual das seguintes alternativas descreve corretamente o conteúdo desse diretório? 

a) Arquivos variáveis de sistema, como logs globais e filas de impressão de e-mails.

b) Arquivos textuais de configuração global de todos os softwares, redes e serviços instalados no sistema.

c) Bibliotecas compartilhadas essenciais que dão suporte à execução dos comandos do sistema.

d) Arquivos virtuais mapeados diretamente na RAM que expõem os parâmetros do Kernel.

Resposta: B - Arquivos textuais de configuração global de todos os softwares, redes e serviços instalados no sistema.

Questão 3

Sistemas operacionais Linux utilizam uma estrutura chamada nó de índice (i-node) para gerenciar arquivos em disco. Onde o nome textual do arquivo (ex: relatorio.txt) é armazenado fisicamente nessa arquitetura? 

a) Dentro do próprio i-node do arquivo, na seção de metadados principais.

b) No cabeçalho do sistema de arquivos com Journaling.

c) Dentro do arquivo de bloco especial que compõe a estrutura do Diretório pai.

d) Na área de swap de memória virtual controlada pelo Kernel.

Resposta: C - Dentro do arquivo de bloco especial que compõe a estrutura do Diretório pai.

Questão 4

Um analista de sistemas executou o comando ls -l no terminal e obteve a linha de metadados: drwxr-xr--. O primeiro caractere (d) expõe qual informação estrutural sobre o arquivo? 

a) Que se trata de um arquivo protegido com criptografia em nível de bloco.

b) Que o arquivo é um diretório (pasta) na árvore lógica do FHS.

c) Que o arquivo possui um link simbólico quebrado apontando para o /dev.

d) Que o arquivo está alocado de forma contígua em um disco do Tipo FAT32.

Resposta: B - Que o arquivo é um diretório (pasta) na árvore lógica do FHS.

Questão 5

O diretório /root e o diretório /home possuem finalidades semelhantes, porém com uma diferença severa de privilégios de segurança. Essa diferença consiste em: 

a) O /root armazena os arquivos de inicialização do GRUB, enquanto o /home guarda as configurações do sistema.

b) O /home é de uso exclusivo de daemons de rede, enquanto o /root guarda os perfis dos estudantes de TADS.

c) O /root é o diretório doméstico individual e restrito do superusuário administrador (Root), enquanto o /home abriga as pastas dos usuários comuns.

d) O /home reside no disco persistente, enquanto o /root é um pseudosistema de arquivos mapeado em memória RAM.

Resposta: C - O /root é o diretório doméstico individual e restrito do superusuário administrador (Root), enquanto o /home abriga as pastas dos usuários comuns.