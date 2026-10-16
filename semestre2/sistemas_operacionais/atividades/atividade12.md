Questão 1

A técnica de Memória Virtual ampara-se no Princípio da Localidade para permitir a execução de softwares cujas exigências volumétricas superem a capacidade física de RAM instalada. Esse princípio baseia-se na premissa algorítmica de que: 

a) Um programa armazena todos os seus dados estáticos e globais no segmento de código Text.

b) As aplicações executam em laços focados, acessando apenas um subconjunto restrito de suas rotinas e variáveis em um dado intervalo de tempo.

c) O Kernel deve realizar a compactação física da RAM a cada ciclo de preempção por Quantum.

d) Os blocos lógicos do programa precisam obrigatoriamente estar sequenciados de forma contígua na RAM.

Resposta: B - As aplicações executam em laços focados, acessando apenas um subconjunto restrito de suas rotinas e variáveis em um dado intervalo de tempo.

Questão 2 

Na Paginação por Demanda, as tabelas de páginas dos processos incorporam um bit de validade (V/I). O que indica ao gerenciador de memória do Kernel quando o indicador de uma página específica encontra-se mapeado com a flag de Inválido (I)? 

a) Que a página sofreu corrupção eletrônica irreversível e o processo deve ser abortado.

b) Que a página foi modificada em RAM e precisa ser descartada sem gravação em disco.

c) Que o bloco lógico correspondente não reside na memória RAM física no momento, estando retido na área de troca (swap) no disco secundário.

d) Que o processo esgotou a sua pilha (Stack) de variáveis locais alocadas.

Resposta: C - Que o bloco lógico correspondente não reside na memória RAM física no momento, estando retido na área de troca (swap) no disco secundário.

Questão 3 

Quando a CPU tenta consumir um endereço lógico cuja página correspondente está marcada como inválida, a MMU intercepta a instrução e gera uma interrupção por hardware específica. Esse evento técnico é denominado: 

a) Context Switch overhead 

b) Falta de Página (Page Fault)

c) Quebra de Segmentação (Segmentation Fault)

d) Condição de Corrida (Race Condition)

Resposta: B - Falta de Página (Page Fault)

Questão 4 

Gravar dados no disco rígido ou SSD (swap) é uma operação massivamente mais lenta do que escrever chips de silício da RAM. Para mitigar esse overhead, o Kernel usa o Bit de Modificação (Dirty Bit), cuja função na Tabela de Páginas consiste em: 

a) Impedir que páginas de leitura sofram preempção forçada pelo escalonador.

b) Registrar se a página sofreu alterações de escrita na RAM; se mantiver o bit em 0 (página limpa), o Kernel pode simplesmente sobrescrevê-la, economizando tempo de gravação no disco.

c) Reiniciar os contadores de clock da MMU a cada falta de página tratada.

d) Forçar a compactação imediata dos blocos descontínuos da memória real.

Resposta: B - Registrar se a página sofreu alterações de escrita na RAM; se mantiver o bit em 0 (página limpa), o Kernel pode simplesmente sobrescrevê-la, economizando tempo de gravação no disco.

Questão 5 

Um servidor de produção entrou em colapso devido ao fenômeno da Hiperpaginação (Thrashing). Esse quadro de degradação sistêmica severa manifesta-se visualmente e logicamente quando: 

a) O número de i-nodes disponíveis na partição raiz chega a 100% de ocupação.

b) O pool de molduras físicas de RAM atribuído a um processo é inferior ao seu conjunto mínimo de trabalho ativo, fazendo o SO gastar quase 100% do tempo transferindo páginas de/para o disco.

c) Múltiplas threads entram em deadlock cruzando travas lógicas de semáforos binários.

d) A CPU opera em subutilização por falta de requisições na fila de Pronto.

Resposta: B - O pool de molduras físicas de RAM atribuído a um processo é inferior ao seu conjunto mínimo de trabalho ativo, fazendo o SO gastar quase 100% do tempo transferindo páginas de/para o disco.