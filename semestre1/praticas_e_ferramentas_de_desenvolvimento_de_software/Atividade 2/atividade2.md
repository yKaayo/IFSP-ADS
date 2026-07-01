# Guia de Comandos Linux
Principais comandos básicos do Linux.

## Colaboradores
- [Caio](https://github.com/yKaayo)
- [Thaciany](https://github.com/thacianyz)

## Comandos Básicos

### 1. `ls`
Utilizado para listar arquivos e diretórios.
```bash
ls
```

E para exibir os arquivos e diretórios ocultos.
```bash
ls -a
```

### 2. `man`
Abre o manual oficial de qualquer comando para consulta de parâmetros e suas funções.

No terminal, seguimos a lógica de **man** + **Argumento**.
```bash
man ls
```

Porém, se quiser algo resumido apenas digite o **Comando** + **--help**.
```bash
ls --help
```

### 3. `clear`
Usado para limpar o terminal.
```bash
clear
```

Ou caso queira usar teclas do teclado <kbd>CTRL</kbd> + <kbd>L</kbd> terá a mesma equivalência.


### 4. `mkdir`
Usado para criar diretório.

No terminal, digitamos **mkdir** + **Nome do diretório**.
```bash
mkdir pasta1
```

E também pode criar várias pastas ao mesmo tempo.
```bash
mkdir pasta2 pasta3 pasta4
```

E caso queira criar com nome composto use **''** ou **""** entre o nome do diretório ou use \ antes dos espaços.
```bash
mkdir 'diretorio do kaayo'
```
ou
```bash
mkdir diretorio\ do\ kaayo
```

### 5. `cd`
Usado para navegar para outro diretório.

No terminal, escrevemos **cd** + **Nome do diretório**.
```bash
cd pasta1
```

E para mover para uma pasta que tenha nome composte use **''** ou **""** entre o nome do diretório ou use \ antes dos espaços.
```bash
cd 'diretorio do kaayo'
```
ou
```bash
cd diretorio\ do\ kaayo
```

E quando estiver digitando o nome do diretório use a tecla <kbd>TAB</kbd> para que o próprio terminal autocomplete o nome da pasta. **PORÉM**:

* **Se houver apenas uma opção:** O terminal apenas completa o nome automaticamente caso haja diferença no nome entre os outros diretórios.
* **Se existe esse diretório:** Caso não exista essa pasta o comando não funcionará.

### 6. `pwd`
Mostra o caminho completo até o diretório em que você está no momento.
```bash
pwd
```

### 7. `whoami`
Exibe o nome do usuário.
```bash
whoami
```

### 8. `touch`
Usado para criar um arquivo vazio.

No terminal, fazemos **touch** + **Nome do arquivo**.

```bash
touch arquivo.txt
```

E caso queria pegar a informação que um comando retorna no terminal e queira adicionar a informação dentro de um arquivo faça assim:

```bash
whoami >> arquivo.txt
```

* **Se o arquivo já existe:** O terminal adiciona o resultado do comando na última linha do arquivo, preservando tudo o que já estava escrito antes.
* **Se o arquivo NÃO existe:** O terminal cria o arquivo do zero e escreve o resultado nele.

### 9. `nano`
Usado para editar o conteúdo de um arquivo.

No terminal, digitamos **nano** + **Nome do arquivo**.
```bash
nano arquivo.txt
```

### 10. `cat`
Exibe o conteúdo de um arquivo.

No terminal, digitamos **cat** + **Nome do arquivo**.
```bash
cat arquivo.txt
```

### 11. `mv`
Usado para mover ou renomear o arquivo.

No terminal, digitamos **mv** + **Nome do arquivo** + **Nome novo do arquivo** para renomear.
```bash
mv arquivo.txt file.txt
```

Para mover o arquivo para outra pasta usamos **mv** + **Nome do arquivo** + **Nome da pasta de destino**.
```bash
mv arquivo.txt pasta_destino/
```

Para mover a pasta interira escrevemos **mv** + **Nome do pasta** + **Nome da pasta de destino**.
```bash
mv nome_da_pasta/ pasta_destino/
```

Para mover vários arquivos utilizamos **mv** + **Nome dos arquivos** + **Nome da pasta de destino**.
```bash
mv arq1.txt arq2.txt pasta_destino/
```

### 12. `cp`
Copia um arquivo ou diretório.

No terminal, digitamos **cp** + **Nome do arquivo ou diretório para copiar** + **Nome do diretório de destino**.
```bash
cp arq1.txt pasta1
```

### 13. `find`
Utilizado para procurar algum arquivo.

No terminal, digitamos **find** + **Caminho de onde deve iniciar a busca** + **-name** + **Nome do arquivo**.
```bash
find . -name arq1.txt
```

Ou caso você queira encontrar um arquivo porém você só tem um pedaço do nome use **\*** entre a parte do nome que queira buscar.
```bash
find . -name *txt*
```

### 14. `head`
Mostra as linhas iniciais de um arquivo.

No terminal, digitamos **head** + **Nome do arquivo**.
```bash
head file.txt
```

### 15. `tail`
Mostra as linhas finais de um arquivo.

No terminal, digitamos **tail** + **Nome do arquivo**.
```bash
tail file.txt
```

### 16. `less`
Exibe o conteúdo de um arquivo aos poucos.

No terminal, digitamos **less** + **Nome do arquivo**.
```bash
les file.txt
```

### 17. `rm`
Apaga permanentemente um arquivo.

No terminal, escrevemos **rm** + **Nome do arquivo**.
```bash
rm file.txt
```

### 18. `rmdir`
Apaga permanentemente um diretório caso esteja vazio.

No terminal, escrevemos **rmdir** + **Nome do diretório**.
```bash
rm pasta1
```

E caso queira apagar tanto algum arquivo quanto um diretório que não esteja vazio, use:
```bash
rm -rf pasta2
```

### 19. `hostname`
Exibe o nome da sua máquina.
```bash
hostname
```

E caso queira descobrir seu ip, digite:
```bash
hostname -I
```

### 20. `ip a`
Exibe as informações de rede, incluindo os endereços IP de todas as interfaces.
```bash
ip a
```

### 21. `grep`
Serve para buscar textos dentro de arquivos.

No terminal, fazemos **grep** + **Termo que queira buscar** + **Nome do arquivo**.
```bash
grep ola file.txt
```

E caso queira buscar algo na saída de outros comandos, digite **Comando** + **|** + **grep** + **Termo que queira buscar**:
```bash
ip a | grep inet
```

### 22. `ping`
Verifica a conectividade de rede com um destino.

No terminal, digitamos **ping** + **Nome do site ou de outro IP**.
```bash
ping google.com
```

## OBS: Caso queira sair de qualquer comando, use as teclas: <kbd>CTRL</kbd> + <kbd>C</kbd>

### 23. `free`
Verifica a quantidade de memória RAM utilizada e disponível no sistema, mas há dois métodos de fazer isso:

Para mostrar valores mais fáceis para que as pessoas consigam entender.
```bash
free -h
```

E nesse caso, é forçado a mostrar os valores em Megabytes (MB).
```bash
free -m
```

### 24. `top`
Exibe em tempo real os processos que estão rodando e o consumo de recursos da sua máquina.
```bash
top
```

### 25. `htop`
Mesma função do top, mas com uma versão visual agradável.
```bash
htop
```

Porém, em algumas distros pode acontecer de não funcionar por não ter como padrão esse comando, então deverá instalar:
```bash
sudo apt install htop
```

### 26. `ps aux`
Exibe todos os processos rodando na sua máquina.
```bash
ps aux
```

### 27. `pgrep`
Mesma função do `ps aux`, mas é possível filtrar pelo termo que você deseja.

No terminal, escrevemos **pgrep** + **Termo que queira filtrar**.
```bash
pgrep gnome-terminal
```

### 28. `kill`
Finaliza um processo que está rodando, mas é necessário passar o número de identificação (PID) do processo.

No terminal, escrevemos **kill** + **PID**.
```bash
kill 21147
```

### 29. `df -h`
Exibe o espaço total, usado e disponível nos discos do sistema. Além disso, mostra em valores mais fáceis para que as pessoas consigam entender.
```bash
df -h
```

### 30. `ncdu`
Esse comando analisa seu disco e mostra em ordem decrescente quais pastas estão consumindo mais memória sendo possível também apagar o diretório caso queira.
```bash
ncdu
```

Porém, em grande parte das distros não possui esse comando, então deverá instalar:
```bash
sudo apt install ncdu
```

### 31. `uname`
Exibe informações sobre o Kernel do sistema.
```bash
uname
```

E caso queira saber a versão do Kernel, use:
```bash
uname -r
```

### 31. `lscpu`
Exibe informações sobre o processador do sistema.
```bash
lscpu
```

### 32. `lsusb`
Exibe informações sobre as conexões USB da máquina.
```bash
lsusb
```

### 32. `lspci`
Lista todos os dispositivos conectados ao barramento PCI.
```bash
lspci
```

### 32. `lsblk`
Mostra informações da estrutura do seu disco.
```bash
lsblk
```

### 32. `history`
Exibe o histórico de comandos digitados no terminal.
```bash
history
```
