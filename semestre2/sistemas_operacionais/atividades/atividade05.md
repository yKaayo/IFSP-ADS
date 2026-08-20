Questão 1

Todo processo inicializado em ambiente Linux abre automaticamente três descritores de arquivos (File Descriptors) padrão para comunicação de Entrada e Saída (I/O). Quais são esses três canais e seus respectivos mapeamentos numéricos nativos? 

a) stdin (0), stdout (1) e stderr (2).

b) input (1), output (2) e error (3).

c) read (0), write (1) e execute (2).

d) console (0), terminal (1) e network (2).

Resposta: A - stdin (0), stdout (1) e stderr (2).

Questão 2

Um desenvolvedor backend executou o seguinte comando no terminal da sua máquina virtual: ls /bin > listagem.txt. Qual o impacto prático dessa instrução no sistema de arquivos? 

a) A saída do comando ls será exibida na tela e, simultaneamente, gravada ao final do arquivo listagem.txt.

b) O terminal criará um link simbólico chamado listagem.txt apontando para o diretório /bin.

c) A saída padrão (stdout) do comando ls será desviada da tela, salvando e sobrescrevendo o conteúdo do arquivo físico listagem.txt.

d) O comando lerá o conteúdo de /bin usando o arquivo listagem.txt como canal de entrada padrão (stdin).

Resposta: C - A saída padrão (stdout) do comando ls será desviada da tela, salvando e sobrescrevendo o conteúdo do arquivo físico listagem.txt.

Questão 3

A filosofia de design do ecossistema Unix preconiza a criação de ferramentas pequenas e focadas que realizam uma única tarefa com excelência, permitindo que conversem entre si. Qual operador especial da CLI captura a saída padrão (stdout) de um comando e a injeta diretamente como entrada padrão (stdin) do comando seguinte? 

a) Operador Maior Que (>)

b) Operador Pipe (|)

c) Operador E Comercial (&)

d) Operador Asterisco (*)

Resposta: B - Operador Pipe (|)

Questão 4

No Shell Bash, um analista precisa verificar o valor armazenado em uma variável global de sistema que dita a lista de diretórios onde o sistema operacional busca automaticamente os arquivos executáveis quando um comando é digitado. Qual variável ele deve ler? 

a) $USER

b) $HOME

c) $PATH

d) $SHELL

Resposta: C - $PATH

Questão 5

Considere a instrução digitada no terminal Linux: cat /etc/passwd | grep administrador >> auditoria.log. A execução sequencial encadeada dessa linha de comando resultará em: 

a) Sobrescrever o arquivo /etc/passwd com as informações do usuário administrador.

b) Ler o arquivo de usuários locais, filtrar apenas a linha que contenha o padrão de texto "administrador" e anexar (Append) esse resultado ao final do arquivo auditoria.log.

c) Abrir um editor visual interativo contendo os logs de erros de Entrada/Saída do barramento de dados.

d) Criar uma nova variável de ambiente local chamada administrador com escopo restrito de root.

Resposta: B - Ler o arquivo de usuários locais, filtrar apenas a linha que contenha o padrão de texto "administrador" e anexar (Append) esse resultado ao final do arquivo auditoria.log.