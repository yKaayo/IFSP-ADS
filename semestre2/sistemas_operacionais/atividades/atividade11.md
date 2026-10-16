Questão 1

A Unidade de Gerenciamento de Memória (MMU) é um componente crítico de hardware encarregado de viabilizar a execução segura de softwares multitarefa. A função primordial da MMU durante os ciclos de processamento consiste em: 

a) Calcular os tempos de turnaround e throughput dos processos em estado de Pronto.

b) Traduzir, em tempo de execução, os endereços lógicos (virtuais) gerados pela CPU nos endereços físicos reais correspondentes nos módulos de silício da RAM.

c) Formatar as partições lógicas de disco injetando estruturas de i-nodes dinâmicos.

d) Controlar as filas de spooling direcionadas a periféricos de caracteres em I/O.

Resposta: B - Traduzir, em tempo de execução, os endereços lógicos (virtuais) gerados pela CPU nos endereços físicos reais correspondentes nos módulos de silício da RAM.

Questão 2 

Sistemas operacionais antigos baseados em Particionamento Fixo (Estático) sofriam cronicamente com uma anomalia de alocação denominada Fragmentação Interna. Esse fenômeno caracteriza-se por: 

a) Espaços vazios totais suficientes espalhados de forma descontínua pela RAM que barram a carga de novos programas contíguos.

b) O esgotamento dos slots lógicos disponíveis na tabela de identidades de PIDs do Kernel.

c) O desperdício de espaço intrapartição que ocorre quando a célula estática cedida pelo SO é maior do que a real demanda volumétrica do software nela alocado.

d) A corrupção dos arquivos de configuração globais de texto abrigados no diretório /etc.

Resposta: C - O desperdício de espaço intrapartição que ocorre quando a célula estática cedida pelo SO é maior do que a real demanda volumétrica do software nela alocado.

Questão 3 

Para contornar os gargalos das partições fixas, implementou-se o Particionamento Dinâmico. Contudo, a carga e descarga ininterrupta de softwares de diferentes tamanhos quebra a linearidade original da memória RAM, gerando um mosaico de pequenas fendas ociosas não-adjacentes. Esse cenário dá origem à: 

a) Fragmentação Externa.

b) Inconsistência por Condição de Corrida.

c) Exaustão de tabelas de ponteiros indiretos duplos.

d) Saturação crônica por processos zumbis de background.

Resposta: A - Fragmentação Externa.

Questão 4 

Durante a gerência de lacunas vazias (holes) em partições dinâmicas, o Kernel adota algoritmos de busca específicos. O algoritmo que realiza uma inspeção integral varrendo a memória RAM por completo para selecionar a menor lacuna livre capaz de abrigar o processo, visando minimizar sobras (mas gerando alto custo de processamento de busca), é o: 

a) First-Fit (Primeiro Encaixe).

b) Worst-Fit (Pior Encaixe).

c) Best-Fit (Melhor Encaixe).

d) Random-Fit (Encaixe Aleatório).

Resposta: C - Best-Fit (Melhor Encaixe).

Questão 5 

A Paginação quebrou definitivamente a barreira da contiguidade física na gerência de hardware. Nessa arquitetura, o espaço de endereçamento lógico da aplicação é segmentado em divisões de tamanho fixo chamadas Páginas (Pages), ao passo que a memória RAM física real é fracionada em blocos idênticos denominados: 

a) Segmentos (Segments)

b) Molduras (Frames)

c) Setores (Sectors)

d) Índices (Inodes)

Resposta: B - Molduras (Frames)