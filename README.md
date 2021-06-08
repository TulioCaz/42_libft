# Libft -- Lib C refactoring

Este é o primeiro projeto da 42SP. O projeto consiste em recriar várias funções da biblioteca padrão da linguagem C, bem como algumas outras funções extras que podem ser úteis, como funções para manipular e criar listas vinculadas por exemplos. O objetivo do projeto é criar a sua própria biblioteca, que será a unica que poderá utilizar nos projetos subsequentes, a menos que especificamente mencionado de outra forma.

O projeto permite que os alunos se familiarizem com algumas das funções mais fundamentais em C

## Get Starter

Para utilizar a biblioteca basta utilizar o comando;

`make all` → para compilar a biblioteca padrão

ou;

`make bonus` → para compilar a biblioteca inteira junto com as funções bonus (funções de manipulação de listas vinculadas.)

Outros comandos uteis;

`make clean` → para excluir os arquivos de objetos criados e limpar o diretório

`make fclean` → para limpar todos os objetos e o arquivo da biblioteca.

`make re` → recompila a biblioteca após fazer algumas mudança nos arquivos.

## Manual

### Funções de validação

**ft_strncmp:** Compara os caracteres dos 'n' primeiros bytes de duas strings terminadas em nulo. Vai comparando caractere por caractere checado se são iguais, parando de comparar quando os caracteres se diferem, encontrando um byte nulo nas strings ou terminando de comparar o byte de número 'n' das duas strings;

- **Return:** int
  - =0 Se os 'n' primeiros bytes da string forem iguais;
  - <0 Se o primeiro caractere que não corresponde tem um valor menor em str1 do que str2;
  - \>0 Se o primeiro caractere que não corresponde tem um valor maior em str1 do que str2;

**ft_memcmp:** Compara os buffers de bytes binários de 'n' bytes. Vai comparando byte por byte checando se os valores são iguais, parando quando se diferem ou ao fim dos 'n' bytes.

- **Return:** int
  - =0 Se os 'n' primeiros bytes do buffer forem iguais;
  - +1 Se o primeiro byte que difere tem um valor maior em buf1 do que em buf2;
  - -1 Se o primeiro byte que difere tem um valor menor em buf1 do que em buf2;

**ft_strlen:** Calcula o comprimento de uma string terminada em nulo, mas sem contar o byte nulo.

- **Return:** size_t, Um número positivo indicando o tamanho da string.

**ft_isdigit:** Valida se um caractere é um dígito numérico.

- **Return:** int,  (1) se verdadeiro e (-1) se falso.

**ft_isalpha:** Valida se um caractere é alfabetístico.

- **Return:** int,  (1) se verdadeiro e (-1) se falso.

**ft_isalnum:** Valida se um caractere é um digito numérico ou alfabético. 

- **Return:** int,  (1) se verdadeiro e (-1) se falso.

**ft_isascii:** Valida se um caractere esta contido na tabela ascii.

- **Return:** int,  (1) se verdadeiro e (-1) se falso.

**ft_isprint:** Valida se um caractere não é um comando e pode ser printado em tela.

- **Return:** int,  (1) se verdadeiro e (-1) se falso.

**ft_isupper:** Valida se um caractere é um alfabético em caixa alta.

- **Return:** int,  (1) se verdadeiro e (-1) se falso.

**ft_islower:** Valida se um caractere é um alfabético em caixa baixa.

- **Return:** int,  (1) se verdadeiro e (-1) se falso.

### Funções de conversão

**ft_atoi:** Converte dígitos dentro de uma cadeia de caracteres 'char' para um número do tipo inteiro 'int'.

- **Return:** int, Retorna um número inteiro contido na cadeia de caractere.

**ft_toupper:** Converte um caractere que está em caixa baixa para caixa alta.

- **Return:** int, Retorna um número inteiro que representa o caractere convertido na tabela ascii.

**ft_tolower:** Converte um caractere que está em caixa alta para caixa baixa.

- **Return:** int, Retorna um número inteiro que representa o caractere convertido na tabela ascii.

**ft_itoa:** Converte um número inteiro 'int' para uma cadeia de caracteres 'char'.

- **Return:** char*, Retorna um ponteiro para um endereço na memória onde o número convertido para uma cadeia de caractere foi armazenado.

## Aprendizado

Recriar uma biblioteca em uma determinada linguagem é um grande desafio. É disso que se trata realmente a libft.

- Saber como funciona uma biblioteca e como usá-la.
- Saber como criar e estruturar qualquer biblioteca em C.

## **License**

Everything in this repository is released under the [Unlicense](https://github.com/TulioCaz/42_libft/blob/master/LICENSE)
