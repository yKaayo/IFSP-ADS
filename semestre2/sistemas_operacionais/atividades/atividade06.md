Questão 1

Um administrador de sistemas do IFSP precisa criar uma nova estrutura de permissões para um arquivo compartilhado de documentação de APIs chamado endpoints.json. As regras de negócio exigem que: o Dono tenha permissões de leitura e escrita (rw-), o Grupo tenha permissão apenas de leitura (r--) e os Outros não tenham nenhuma permissão (---). Utilizando a notação octal numérica, qual comando atende a esse cenário? 

a) chmod 755 endpoints.json

b) chmod 640 endpoints.json

c) chmod 740 endpoints.json

d) chmod 664 endpoints.json

Resposta: B - chmod 640 endpoints.json

Questão 2

No modelo de proteção de segurança multiusuário nativo do Linux, o arquivo /etc/passwd desempenha uma função primordial para o controle de acessos da infraestrutura. A finalidade central desse arquivo é: 

a) Armazenar os hashes criptografados e salgados de todas as senhas dos usuários.

b) Guardar a listagem oficial de contas e perfis de usuários cadastrados no sistema.

c) Centralizar as regras de firewall e tabelas de roteamento de rede.

d) Controlar as cotas de disco e inodes disponíveis no diretório /home.

Resposta: B - Guardar a listagem oficial de contas e perfis de usuários cadastrados no sistema.

Questão 3 

Para disponibilizar um script de deploy em C ou Python (ex: build.sh) para execução direta no terminal Bash, não basta criá-lo; ele precisa receber o direito POSIX de execução (x). Qual comando simbólico adiciona exclusivamente para o Dono (User) esse privilégio de rodar o arquivo? 

a) chmod u+x build.sh

b) chmod g+x build.sh

c) chmod o+x build.sh

d) chmod a+x build.sh

Resposta: A - chmod u+x build.sh

Questão 4 

O subsistema gerenciador de pacotes avançado (APT), utilizado na família Debian e Ubuntu, soluciona de forma automatizada o clássico "problema das dependências" de software. Esse problema consiste em: 

a) Impedir que softwares proprietários sejam instalados no diretório /opt.

b) Rastrear, baixar e instalar previamente todas as bibliotecas e pacotes de suporte exigidos para que o binário principal funcione corretamente.

c) Forçar a compilação local do código-fonte bruto orientada à arquitetura da CPU.

d) Limpar a memória RAM a cada ciclo de remoção de executáveis órfãos.

Resposta: B - Rastrear, baixar e instalar previamente todas as bibliotecas e pacotes de suporte exigidos para que o binário principal funcione corretamente.

Questão 5 

Qual o comando textual da CLI do Linux é empregado para transferir a custódia, propriedade legal e governança de um arquivo ou pasta para um novo usuário do sistema operacional? 

a) chmod

b) chown

c) usermod

d) useradd

Resposta: B - chown