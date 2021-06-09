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

## Aprendizado

Recriar uma biblioteca em uma determinada linguagem é um grande desafio. É disso que se trata realmente a libft.

- Saber como funciona uma biblioteca e como usá-la.
- Saber como criar e estruturar qualquer biblioteca em C.

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

## Funções de manipulação de strings

**ft_strmapi:** Aplica a uma função 'f', recebida por parâmetro, para cada caractere da string 's', criando uma nova string.

- **Return:** char*,  Retorna um novo ponteiro para o endereço onde a nova string foi alocada. Retorna NULL se a alocação falhar.

**ft_substr:** Cria uma string nova, que é uma sub-string formada à partir do índice start da string 'str' passada como parâmetro e tem o tamanho máximo de 'len'.

- **Return:** char*, Retorna um novo ponteiro para o endereço onde a sub-string foi alocada. Retorna NULL se a alocação falhar.

**ft_strlcat:**  Concatena duas strings, sem criar uma nova string. Ela pega o tamanho total do buffer, passado no parâmetro 'len', e garante a terminação NULL da string concatenada, desde que haja pelo menos um byte livre na string 'dst'. Observe também, que a função opera apenas em strings "C" verdadeiras. Isso significa que ambas as strings devem ser terminadas em um byte NULL.

- **Return:** size_t, Retorna o tamanho da string que tentamos criar, ou seja, tamanho total da string 'dst' mais tamanho de 'src'.

**ft_strlcpy:** Copia uma string de um endereço de memória para outro. Ela pega o tamanho total do buffer, passado no parâmetro 'len', e garante a terminação NULL da string copiada, desde que haja pelo menos um byte livre no buffer em 'dst'. Observe que um byte para o NUL deve ser incluído no tamanho. Observe também que a função opera apenas em strings "C" verdadeiras, ou seja 'src' deve ser terminado em NULL.

- **Return:** size_t, Retorna o tamanho da string que será copiada.

**ft_strnstr:** Localiza uma sub-string em uma string.

- **Return:** char*, Retorna um ponteiro para o primeiro caractere dessa sub-string.

**ft_strtrim:** Cria uma nova string eliminando os caracteres especificados em 'set' do inicio e do final da original passada como parâmetro.

- **Return:** char*, Retorna um ponteiro para o endereço onde está armazenada a nova string criada.

**ft_strjoin:** Concatena duas strings, criando uma novas string como resultado.

- **Return:** char*, Retorna um ponteiro para o buffer onde a nova string será armazenada.

**ft_split:** Cria um array de strings criado à partir de uma string dividida usando um delimitador especificado. O array criado é acompanhado de um ponteiro NULL na última posição.

- **Return:** char**, Retorna um array de strings criado como resultado da divisão da string passada como parâmetro. Ou NULL se a alocação falhar.

**ft_split:** Cria uma nova string que é uma cópia da string original. Essa nova string é um ponteiro para uma string terminada em NULL.

- **Return:** char*, Retorna um ponteiro para o endereço onde a nova string duplicada está armazenada. Ou NULL se a alocação falhar.

## Funções de escrita em arquivos

**ft_putendl_fd:** Passa a string fornecida como parâmetro para o File Descriptor indicado, com uma quebra de linha no final.

**ft_putchar_fd:** Passa um caractere fornecido como parâmetro para o File Descriptor indicado.

**ft_putstr_fd:** Passa a string fornecida como parâmetro para o File Descriptor indicado.

**ft_putnbr_fd:** Passa o numero fornecido como parâmetro para o File Descriptor indicado.

## Funções de manipulação de memória

**ft_memccpy:** Copia não mais que 'n' bytes do buffer 'src' para a área do buffer 'dst', parando quando o caractere 'c' é encontrado.

- **Return:** Retorna um ponteiro para o byte seguinte a 'c' se encontrado esse caractere nos 'n' primeiros bytes de 'src'. Ou retorna NULL se não encontrado nenhum caractere 'c'.

**ft_memmove:** Copia 'n' bytes do buffer apontado por 'src' para o buffer apontado por 'dst', mas para blocos de memória sobrepostos, memmove() é mais seguro que memcpy().

- **Return:** Retorna um ponteiro para o buffer de destino 'dest', para onde os bytes foram copiados.

**ft_memcpy:** Copia 'n' bytes do buffer apontado por 'src' para dentro do buffer apontado por 'dst'.

- **Return:** Retorna um ponteiro para o buffer de destino 'dest', para onde os bytes foram copiados.

**ft_memset:** Copia o caractere especificado em 'c' para os 'n' primeiros bytes do buffer apontados por 'src'.

- **Return:** Retorna um ponteiro para o primeiro byte do buffer 'src'.

**ft_memchr:** Procura a primeira ocorrência do caractere 'c' nos primeiros 'n' bytes do buffer apontado por 'src'.

- **Return:** Retorna um ponteiro para a primeira ocorrência de 'c' nos 'n' bytes de 'src'. Ou NULL se não encontrada nenhuma ocorrência de 'c'.

**ft_calloc:** Aloca a memória solicitada, e retorna um ponteiro para o buffer alocado.

- **Return:** Retorna um ponteiro para buffer alocado. Ou NULL se a alocação falhar.

**ft_bzero:** Define os 'n' primeiros bytes de um buffer como NULL.

## **License**

Everything in this repository is released under the [Unlicense](https://github.com/TulioCaz/42_libft/blob/master/LICENSE)
