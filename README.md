# 💻 Estudo de Linguagem C

Este repositório contém códigos-fonte da linguagem de programação C, onde se mantém em mente que EdxzyLuksz retirou todas as demonstrações e exercícios, em fonte principal, o livro "Estudo dirigido de Linguagem C", pelo autor José Augusto N. G. Manzano, além de outras consultas externas pela internet.

Este `README.md` servirá como consulta direta a informações mais abstratas ou procedurais, estas quais se encontram incompatíveis com linhas de comentário tradicionais.

## 📖 Introdução e Histórico

A partir do século XIX, inúmeras tentativas de construir aparelhos mecânicos para efetuar operações matemáticas ocorreram. O modelo eletrônico se sobressaiu, e por consequência os computadores ganharam espaço, para até mesmo utilizá-los para objetivos além de sua premissa inicial.

Em 1972, no laboratório da empresa antiga Bell Telephone Labs. Inc, a linguagem de programação para computadores "C" foi projetada, por Dennis M. Ritchie, com o objetivo de usá-la na codificação da segunda versão do sistema operacional UNIX para a equipe de trabalho chefiada por Ken Thompson.

A primeira versão do UNIX foi escrita em Assembly para o computador DEC PDP-11, precursor dos atuais minicomputadores. A partir da segunda versão até hoje o UNIX é escrito em C.

A linguagem C faz parte de uma linhagem de linguagens iniciada com ALGOL, passando por BCPL e B. A linguagem B foi criada por Ken Thompson como uma evolução da linguagem BCPL, desenvolvida por Martin Richards. Posteriormente, Dennis Ritchie desenvolveu a linguagem C nos laboratórios Bell para uso no sistema Unix. A linguagem sucessora de C foi chamada de C++, criada por Bjarne Stroustrup, adicionando suporte à programação orientada a objetos.

O C foi criado a partir da necessidade de escrever programas que utilizem os recursos internos de máquina de uma forma mais fácil que o Assembly, permitindo então a integração direta entre alto nível e baixo nível.

Sua grande aceitação provém da efetiva conciliação com a linguagem de baixo nível com seu alto grau de portabilidade, ou seja, teoricamente um programa escrito em C pode ser executado em qualquer plataforma.

## 🛠️ Ambiente de Trabalho

É necessário entender o contexto de criação da linguagem C, que foi feita para o sistema UNIX. O kernel do Linux foi projetado para ser UNIX-Like, ou seja, funcionalmente similar ao seu precursor, porém construído do zero. Estas características implicam que o sistema operacional Windows, naturalmente, possui menor afinidade com a linguagem. 

Portanto, a solução encontrada foi utilizar a tecnologia Windows Subsystem for Linux, um container que consegue virtualizar uma distro Linux para ser utilizada diretamente pela interface do Windows, no modo CLI padrão.

### 🪟 Passo a Passo (Instalação do WSL + GCC no Windows)

#### 🐚 PowerShell
1. Execute o PowerShell como Administrador e escreva:
  - `wsl --install`
2. Reinicie sua máquina, conforme as próprias instruções do instalador sugerem;
3. Após reiniciar, reabra o PowerShell e escreva:
  - `wsl --list --online`
Este comando listará todas as distros disponíveis para utilizar no container.
> Distro utilizada: Debian
4. Para instalar a distro desejada, siga:
  - `wsl --install nomeDistro`
5. Para acessar a distro, escreva:
  - `wsl`
> Aviso: Caso o usuário tenha instalado mais distros, perceba que ao digitar o comando acima, somente uma distro padrão será sempre executada. Para contornar isto, utilize `-d nomeDistro` para especificar qual sistema operacional é o desejado ou `-s nomeDistro` para alterar a distro padrão.

#### 🐧 Debian (WSL)

Para instalar o **editor de texto** dentro do ambiente Debian, utiliza-se:
  - `sudo apt install gedit`

Para instalar o **toolchain** do C, utiliza-se:
  - `sudo apt install build-essential`
Este pacote possui o conjunto de ferramentas necessárias para transformar código fonte em programa executável, sendo esta baseada em GNU Compiler Collection.

Principais componentes:
  - `gcc` - compila C
  - `g++` - compila C++
  - `make` - automatiza builds
  - `libc` - biblioteca padrão
  - `binutils` - ferramentas de link


A partir deste processo, é possível escrever códigos em C e compilá-los para execução facilmente.

### ⚙️ Processo de Compilação e Execução

Para demonstrar o processo para a execução do programa, o teste demonstrará um código simples:

``` c
#include <stdio.h>
int main(){
    printf("Hello, World!\n");
    return 0;
}
```

> Ao iniciar a distro, o usuário estará por padrão em seu diretório pessoal (~), normalmente localizado em `/home/usuario`. - É dentro deste diretório onde recomenda-se organizar arquivos pessoais, visto que os demais diretórios na raiz do sistema são utilizados pelo próprio sistema operacional Linux.

Para organizar o desenvolvimento, também é sugerido criar um novo diretório chamado "c" com o seguinte comando:
  - `mkdir ~/c && cd ~/c`
Com isto, será criada a pasta e acessada ao mesmo tempo.

Após a criação da pasta, escreva no bash `gedit hello.c` para acessar o editor de texto com um nome de arquivo já definido (recomendado, dado a limitações comuns do WSL ao renderizar apps gráficos do Linux). 

O próximo passo será colar o código C acima, pressionar `Ctrl + S` para salvar e fechar o editor com `Alt + F4` ou clique no X.

O arquivo "hello.c" está pronto para ser compilado, através do comando GCC:
  - `gcc hello.c -o hello`
  
Explicação: O comando compilará o código fonte escrito em C e transformará o nome do executável em "hello". Caso não houvesse a instrução final "-o hello", o nome do arquivo gerado seria "a.out" - Nome originado de assembler output.

Por fim, apenas digite o nome do arquivo executável para rodar diretamente no bash:
- `./hello`

O `./` se vê necessário, pois sistemas baseados em UNIX não procuram no diretório atual automaticamente.

## 💫 Fatos interessantes

O comando `else if` em C não é exatamente uma única instrução para a máquina. Ele se dá através de **junção** das intruções if (se) e else (senão). Essa combinação funciona por conta de que, se uma condicional possuir somente um argumento (`;`), não é necessário inserir as chaves `{}` para executar o código.
"
Dado este fato, porém, existe um bug conhecido como "dangling else", traduzido como "else pendurado". Por exemplo:

``` c
#include <stdio.h>
int a = 5, b = 4
if (a >= 5)
  if (a == b)
    printf("Valores iguais");
else
  printf("'a' é menor que 5");
```

Perceba que nenhum laço acima possui as chaves para separar os argumentos. Por conta disso, o else não respeitará a indentação do programador e executará o bloco `else` somente se 'a' e 'b' forem diferentes, não se 'a' for menor que 5.

Resumidamente:
- Neste exemplo, o `else` está associado ao `if (a == b)`, não ao `if (a >= 5).`
- Ou seja, a indentação que você vê no código enganaria o programador, mas não o compilador.