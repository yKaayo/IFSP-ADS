Questão 1 

Discos rígidos e SSDs são divididos fisicamente em blocos de tamanho estático (ex: 4 KB). No método de Alocação Contígua de arquivos, a regra de engenharia determina que: 

a) Cada arquivo é distribuído em uma lista ligada de setores espalhados de forma aleatória.

b) O arquivo ocupa um conjunto de blocos seguidos e lineares adjacentes na mídia física de armazenamento.

c) Os ponteiros de localização são centralizados exclusivamente em uma tabela na RAM chamada FAT.

d) Os metadados e os blocos de dados são fundidos em um pseudosistema de arquivos volátil.

Resposta: B - O arquivo ocupa um conjunto de blocos seguidos e lineares adjacentes na mídia física de armazenamento.

Questão 2 

O método de alocação de blocos do tipo Encadeado (Lista Ligada) elimina o problema da fragmentação externa de disco, porém introduz um severo gargalo operacional de desempenho, que consiste em: 

a) Exigir que a CPU opere sob regime de escalonador cooperativo monotarefa.

b) Impedir o crescimento dinâmico de arquivos de texto abrigados na pasta /home.

c) Destruir a performance de acessos aleatórios diretos, pois para ler o bloco N é mandatório percorrer sequencialmente todos os N-1 ponteiros anteriores.

d) Esgotar os slots lógicos da tabela de identidades de PIDs do Kernel.

Resposta: C - Destruir a performance de acessos aleatórios diretos, pois para ler o bloco N é mandatório percorrer sequencialmente todos os N-1 ponteiros anteriores.

Questão 3 

Sistemas de arquivos baseados em Unix/Linux (como o ext4) utilizam a Alocação Indexada estruturada através de nós de índice (i-nodes). Qual a principal vantagem arquitetural dessa abordagem? 

a) Armazenar os nomes textuais dos arquivos diretamente dentro dos blocos eletrônicos da RAM.

b) Reunir todos os ponteiros de mapeamento de blocos de um arquivo dentro de uma única estrutura de controle exclusiva (i-node), permitindo acessos aleatórios velozes.

c) Eliminar de forma permanente o uso de privilégios de Modo Kernel para Entrada/Saída.

d) Garantir compatibilidade nativa com o teto de tamanho de arquivo de 4 GB do FAT32.

Resposta: B - Reunir todos os ponteiros de mapeamento de blocos de um arquivo dentro de uma única estrutura de controle exclusiva (i-node), permitindo acessos aleatórios velozes.

Questão 4 

Como as tabelas de inodes possuem um tamanho fixo de ponteiros diretos, o sistema adota mecanismos de Ponteiros Indiretos (simples, duplos e triplos). A finalidade técnica desse recurso de indirection é: 

a) Proteger os metadados do arquivo contra acessos espúrios de outros usuários do FHS.

b) Permitir que o i-node aponte para novos blocos de disco repletos de outros endereços, expandindo a capacidade de suporte para arquivos gigantes na escala de Terabytes.

c) Viabilizar a criação automática de tabelas MBR para discos rígidos virtuais em branco.

d) Redirecionar os fluxos de erros padrão (stderr) para o diretório /dev/null.

Resposta: B - Permitir que o i-node aponte para novos blocos de disco repletos de outros endereços, expandindo a capacidade de suporte para arquivos gigantes na escala de Terabytes.

Questão 5 

Quedas repentinas de energia elétrica ou desligamentos abruptos podem corromper os metadados de uma partição. Para mitigar esse risco, sistemas modernos utilizam Journaling, que atua: 

a) Rodando loops infinitos de verificação de travas em nível de espaço de usuário.

b) Duplicando integralmente o conteúdo físico do disco rígido em um segundo host remoto.

c) Registrando a intenção de cada operação de alteração estrutural em uma área de log dedicada antes de executá-la, permitindo uma recuperação consistente em segundos no boot seguinte.

d) Desativando o subsistema de interrupções assíncronas guiadas por hardware.

Resposta: C - Registrando a intenção de cada operação de alteração estrutural em uma área de log dedicada antes de executá-la, permitindo uma recuperação consistente em segundos no boot seguinte.