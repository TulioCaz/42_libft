/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:11:14 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/09 22:33:24 by tcamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// Validation functions
/**
 * @brief Compara os caracteres dos 'n' primeiros bytes de duas strings
 * terminadas em nulo. Vai comparando caractere por caractere checado se são
 * iguais, parando de comparar quando os caracteres se diferem, encontrando um
 * byte nulo nas strings ou terminando de comparar o byte de número 'n' das duas
 * strings;
 * 
 * @param str1 Aponta para o endereço de memória onde esta armazenada a primeira
 * string.
 * @param str2 Aponta para o endereço de memória onde está armazenada a segunda
 * string.
 * @param n O número máximo de bytes a serem comparados.
 * @return int | =0 Se os 'n' primeiros bytes da string forem iguais; >0 Se o
 * primeiro caractere que não corresponde tem um valor maior em str1 do que 
 * str2; <0 Se o primeiro caractere que não corresponde tem um valor menor em 
 * str1 do que str2;
 **/
int		ft_strncmp(const char *str1, const char *str2, size_t n);

/**
 * @brief Compara os buffers de bytes binários de 'n' bytes. Vai comparando byte
 * por byte checando se os valores são iguais, parando quando se diferem ou ao
 * fim dos 'n' bytes.
 * 
 * @param buf1 Endereçõ para um bloco de memória.
 * @param buf2 Endereçõ para outro bloco de memória.
 * @param n O número máximo de bytes a serem comparados.
 * @return int | =0 Se os 'n' primeiros bytes do buffer tiverem o mesmo valor;
 * +1 Se o primeiro byte que difere tem um valor maior em buf1 do que em buf2;
 * -1 Se o primeiro byte que difere tem um valor menor em buf1 do que em buf2;
 */
int		ft_memcmp(const void *buf1,const void *buf2, size_t n);

/**
 * @brief Valida a ocorrência do caractere 'c' na string passada como parâmetro,
 * e retorna um ponteiro para a última ocorrência desse caractere dentro de
 * 'str'.
 * 
 * @param str Aponta para o buffer que armazena a string que será validada.
 * @param c Caractere a ser procurado na string.
 * @return char* | ponteiro para a última ocorrência do caractere 'c' dentro de
 * 'str'.
 */
char	*ft_strrchr(char const *str, int c);

/**
 * @brief Valida a ocorrência do caractere 'c' na string passada como parâmetro,
 * e retorna um ponteiro para a primeira ocorrência desse caractere dentro de
 * 'str'.
 * 
 * @param str Aponta para o buffer que armazena a string que será validada.
 * @param c Caractere a ser procurado na string.
 * @return char* | ponteiro para a primeira ocorrência do caractere 'c' dentro
 * de 'str'.
 */
char	*ft_strchr(char const *str, int c);

/**
 * @brief Calcula o comprimento de uma string terminada em nulo, mas sem contar
 * o byte nulo.
 * 
 * @param str Aponta para o endereço onde a string esta armazenada.
 * @return size_t | Um número positivo indicando o tamanho da string.
 */
size_t	ft_strlen(char const *str);

/**
 * @brief Valida se um caractere é um dígito numérico.
 * 
 * @param c Caractere à ser validado.
 * @return int | (1) se verdadeiro e (-1) se falso.
 */
int		ft_isdigit(int c);

/**
 * @brief Valida se um caractere é alfabetístico.
 * 
 * @param c Caractere à ser validado.
 * @return int | (1) se verdadeiro e (-1) se falso.
 */
int		ft_isalpha(int c);

/**
 * @brief Valida se um caractere é um dígito numérico ou alfabético.
 * 
 * @param c Caractere à ser validado.
 * @return int | (1) se verdadeiro e (-1) se falso.
 */
int		ft_isalnum(int c);

/**
 * @brief Valida se um caractere esta contido na tabela ascii.
 * 
 * @param c Caractere à ser validado.
 * @return int | (1) se verdadeiro e (-1) se falso.
 */
int		ft_isascii(int c);

/**
 * @brief Valida se um caractere não é um comando e pode ser printado em tela.
 * 
 * @param c Caractere à ser validado.
 * @return int | (1) se verdadeiro e (-1) se falso.
 */
int		ft_isprint(int c);

/**
 * @brief Valida se um caractere é um alfabético em caixa alta.
 * 
 * @param c Caractere à ser validado.
 * @return int | (1) se verdadeiro e (-1) se falso.
 */
int		ft_isupper(int c);

/**
 * @brief Valida se um caractere é um alfabético em caixa baixa.
 * 
 * @param c Caractere à ser validado.
 * @return int | (1) se verdadeiro e (-1) se falso.
 */
int		ft_islower(int c);

// Convertion Functions

/**
 * @brief Converte dígitos dentro de uma cadeia de caracteres 'char' para um
 * número do tipo inteiro 'int'.
 * 
 * @param str Cadeia de caracteres à ser convertida.
 * @return int | Retorna um número inteiro contido na cadeia de caractere.
 */
int		ft_atoi(const char *str);

/**
 * @brief Converte um caractere que está em caixa baixa para caixa alta.
 * 
 * @param c Caractere a ser convertido.
 * @return int | Retorna um número inteiro que representa o caractere convertido
 * na tabela ascii.
 */
int		ft_toupper(int c);

/**
 * @brief Converte um caractere que está em caixa alta para caixa baixa.
 * 
 * @param c Caractere a ser convertido.
 * @return int | Retorna um número inteiro que representa o caractere convertido
 * na tabela ascii.
 */
int		ft_tolower(int c);

/**
 * @brief Converte um número inteiro 'int' para uma cadeia de caracteres 'char'.
 * 
 * @param n Número inteiro à ser convertido.
 * @return char* | retorna um ponteiro para um endereço na memória onde o número
 * convertido para uma cadeia de caractere foi armazenado.
 */
char	*ft_itoa(int n);

// String Manipulate
/**
 * @brief Aplica a uma função 'f', recebida por parâmetro, para cada caractere
 * da string 's', criando uma nova string.
 * 
 * @param str Aponta para o endereço de memória onde está alocada a string
 * original.
 * @param f Função à ser aplicada aos caracteres de 's'.
 * @return char* | Retorna um novo ponteiro para o endereço onde a nova string
 * foi alocada. Retorna NULL se a alocação falhar.
 */
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));

/**
 * @brief Cria uma string nova, que é uma sub-string formada à partir do índice
 * start da string 'str' passada como parâmetro e tem o tamanho máximo de 'len'.
 * 
 * @param str Aponta para o endereço de memória onde está alocada a string
 * original.
 * @param start Índice que indica o início da sub-string.
 * @param len Tamanho máximo da sub-string.
 * @return char* | Retorna um novo ponteiro para o endereço onde a sub-string
 * foi alocada. Retorna NULL se a alocação falhar.
 */
char	*ft_substr(char const *str, unsigned int start, size_t len);

/**
 * @brief Concatena duas strings, sem criar uma nova string. Ela pega o tamanho
 * total do buffer, passado no parâmetro 'len', e garante a terminação NULL da
 * string concatenada, desde que haja pelo menos um byte livre na string 'dst'.
 * Observe também, que a função opera apenas em strings "C" verdadeiras. Isso
 * significa que ambas as strings devem ser terminadas em um byte NULL.
 * 
 * @param dst Aponta para o endereço de memória destino de string, para onde
 * ocorerá a concatenação.
 * @param src Aponta para o endereço de memória onde esta a stringa que vai ser
 * concatenada.
 * @param len Tamanho total do buffer alocado para a string resultante.
 * @return size_t | Retorna o tamanho da string que tentamos criar, ou seja,
 * tamanho total da string 'dst' mais tamanho de 'src'.
 */
size_t	ft_strlcat(char *dst, char const *src, size_t len);

/**
 * @brief Copia uma string de um endereço de memória para outro. Ela pega o
 * tamanho total do buffer, passado no parâmetro 'len', e garante a terminação
 * NULL da string copiada, desde que haja pelo menos um byte livre no buffer em
 * 'dst'. Observe que um byte para o NUL deve ser incluído no tamanho. Observe
 * também que a função opera apenas em strings "C" verdadeiras, ou seja 'src'
 * deve ser terminado em NULL.
 * 
 * @param dst Aponta para o endereço de memória alocado para um buffer de
 * destino da string que vai ser copiada.
 * @param src Aponta para o endereço de memória da string à ser copiada.
 * @param len Tamanho total do buffer alocado para a string resultante.
 * @return size_t | Retorna o tamanho da string que será copiada.
 */
size_t	ft_strlcpy(char *dst, char const *src, size_t len);

/**
 * @brief Localisa uma sub-string em uma string.
 * 
 * @param str1 Aponta para a string a ser analizada.
 * @param str2 Aponta para o endereço da sub-string que será procurada.
 * @param n O numero máximo de bytes a serem analizados na string principal.
 * @return char* | Retorna um ponteiro para o primeiro caractere dessa
 * sub-string.
 */
char	*ft_strnstr(const char *str1, const char *str2, size_t n);

/**
 * @brief Cria uma nova string eliminando os caracteres especificados em 'set'
 * do inicio e do final da original passada como parâmetro.
 * 
 * @param str Aponta para o buffer onde está localizada a string original.
 * @param set Aponta para um buffer que armazena o caracteres que devem ser
 * removidos para criar a nova string limpa.
 * @return char* | Retorna um ponteiro para o endereço onde está armazenada a
 * nova string criada.
 */
char	*ft_strtrim(char const *str, char const *set);

/**
 * @brief Concatena duas strings, criando uma novas string como resultado.
 * 
 * @param str1 Aponta para o buffer que armazena a string que será o prefixo da
 * nova string.
 * @param str2 Aponta para o buffer que armazena a string que será o sufixo da
 * nova string.
 * @return char* | Retorna um ponteiro para o buffer onde a nova string será
 * armazenada.
 */
char	*ft_strjoin(char const *str1, char const *str2);

/**
 * @brief Cria um array de strings criado à partir de uma string dividida usando
 * um delimitador especificado. O array criado é acompanhado de um ponteiro NULL
 * na última posição.
 * 
 * @param str Aponta parra o buffer que armazena a string que será cortada.
 * @param c Caractere delimitador do corte.
 * @return char** | Retorna um array de strings criado como resultado da divisão
 * da string passada como parâmetro. Ou NULL se a alocação falhar.
 */
char	**ft_split(char const *str, char c);

/**
 * @brief Cria uma nova string que é uma cópia da string original. Essa nova
 * string é um ponteiro para uma string terminada em NULL.
 * 
 * @param str Aponta para o endereço do buffer que armazena a string à ser
 * duplicada.
 * @return char* | Retorna um ponteiro para o endereço onde a nova string
 * duplicada está armazenada. Ou NULL se a alocação falhar.
 */
char	*ft_strdup(char *str);

// File descriptor Manipulation
/**
 * @brief Passa a string fornecida como parâmetro para o File Descriptor
 * indicado, com uma quebra de linha no final.
 * 
 * @param str Aponta para o endereço na memória onde a string está armazenada.
 * @param fd Numero que indica o File Descriptor.
 */
void	ft_putendl_fd(char *str, int fd);

/**
 * @brief Passa um caractere fornecido como parâmetro para o File Descriptor
 * indicado.
 * 
 * @param c Caractere à ser passado para file descriptor.
 * @param fd Numero que indica o File Descriptor.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Passa a string fornecida como parâmetro para o File Descriptor
 * indicado.
 * 
 * @param str Aponta para o endereço na memória onde a string está armazenada.
 * @param fd Numero que indica o File Descriptor.
 */
void	ft_putstr_fd(char *str, int fd);

/**
 * @brief Passa o numero fornecido como parâmetro para o File Descriptor
 * indicado.
 * 
 * @param n Numero inteiro que será convertido cara caractere e passado para o
 * file descriptor.
 * @param fd Numero que indica o File Descriptor.
 */
void	ft_putnbr_fd(int n, int fd);

// Memory Manipulaation
/**
 * @brief Copia não mais que 'n' bytes do buffer 'src' para a área do buffer
 * 'dst', parando quando o caractere 'c' é encontrado.
 * 
 * @param dst Aponta para o endereço de memória que será o destino do conteúdo
 * copiado.
 * @param src Aponta para o endereço de memória onde esta os bytes à serem
 * copiados para área de memória do buffer 'dst'.
 * @param c Caractere de terminação, numero inteiro que será convertido para um
 * unsigned char.
 * @param n Este é o numero máximo de bytes à serem copiados.
 * @return void* | Retorna um ponteiro para o byte seguinte a 'c' se encontrado
 * esse caractere nos 'n' primeiros bytes de 'src'. Ou retorna NULL se não
 * encontrado nenhum caractere 'c'.
 */
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

/**
 * @brief Copia 'n' bytes do buffer apontado por 'src' para o buffer apontado
 * por 'dst', mas para blocos de memória sobrepostos, memmove() é mais seguro
 * que memcpy().
 * 
 * @param dst Aponta para o buffer de destino para onde o conteúdo deve ser
 * copiado.
 * @param src Este é um ponteiro para um buffer onde está armazenado os bytes
 * que devem ser copiados.
 * @param n Este é o número de bytes que devem ser copiados.
 * @return void* | Retorna um ponteiro para o buffer de destino 'dest', para
 * onde os * bytes foram copiados.
 */
void	*ft_memmove(void *dst, void *src, size_t n);

/**
 * @brief Copia 'n' bytes do buffer apontado por 'src' para dentro do buffer
 * apontado por 'dst'.
 * 
 * @param dst Aponta para o buffer de destino para onde o conteúdo deve ser
 * copiado.
 * @param src Este é um ponteiro para um buffer onde está armazenado os bytes
 * que devem ser copiados.
 * @param n Este é o número de bytes que devem ser copiados.
 * @return void* | Retorna um ponteiro para o buffer de destino 'dest', para
 * onde os * bytes foram copiados.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Copia o caractere especificado em 'c' para os 'n' primeiros bytes do
 * buffer apontados por 'src'.
 * 
 * @param src Aponta para o buffer onde os caracteres serão gravados.
 * @param c Caractere que será copiado, numero inteiro que será convertido para
 * um unsigned char.
 * @param n Este é o número de bytes do buffer src.
 * @return void* | Retorna um ponteiro para o primeiro byte do buffer 'src'.
 */
void	*ft_memset(void *src, int c, size_t n);

/**
 * @brief Procura a primeira ocorrência do caractere 'c' nos primeiros 'n' bytes
 * do buffer apontado por 'src'.
 * 
 * @param src Aponta para o buffer onde a pesquisa será realizada.
 * @param c Caractere a ser pesquisado, numero inteiro que será convertido para
 * um unsigned char.
 * @param n Este é o numero máximo de bytes à serem pesquisados no buffer 'src'.
 * @return void* | Retorna um ponteiro para a primeira ocorrência de 'c' nos 'n'
 * bytes de 'src'. Ou NULL se não encontrada nenhuma ocorrência de 'c'.
 */
void	*ft_memchr(void const *src, int c, size_t n);

/**
 * @brief Aloca a memória solicitada, e retorna um ponteiro para o buffer
 * alocado.
 * 
 * @param nitens Este é o número de elementos a serem alocados.
 * @param size Este é o tamanho dos elementos.
 * @return void* | Retorna um ponteiro para buffer alocado. Ou NULL se a
 * alocação falhar.
 */
void	*ft_calloc(size_t nitens, size_t size);

/**
 * @brief Define os 'n' primeiros bytes de um buffer como NULL.
 * 
 * @param src Aponta para o buffer onde está alocado a memória que qqueremos
 * passar para NULL.
 * @param n Este é o numero de bytes que queremos trocar os valores.
 */
void	ft_bzero(void *src, size_t n);

// Bonus Functions -- Create and manipulate linked lists
/**
 * @brief Aloca memória para criação de uma estrutura de lista vinculada.
 * Adiciona o conteúdo de 'content' à lista criada, e seta NULL ao próximo
 * elemento em 'next'.
 * 
 * @param content Aponta para o buffer de memória onde está armazenado o
 * conteúdo que será adicionado a lista criada.
 * @return t_list* | Retorna um ponteiro para a estrutura 't_list' criada.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Retorna o último elemento de uma lista vinculada.
 * 
 * @param lst Aponta para o buffer que armazena um elemento de uma lista.
 * @return t_list* | Retorna um ponteiro para o buffer que armazena o último
 * elemento da lista.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Conta o número de elemento em um lista.
 * 
 * @param lst Aponta para o buffer que armazena o primeiro elemento de uma
 * lista.
 * @return int | Retorna um número inteiro representando a quantidade de
 * elementos presente na lista.
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Adiciona um novo elemento no inicio de uma lista.
 * 
 * @param lst Aponta para o buffer que armazena o primeiro elemento de uma
 * lista.
 * @param new Aponta para o buffer que armazena o elemento à ser adicionado
 * a lista.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Adiciona um novo elemento no final de uma lista.
 * 
 * @param lst Aponta para o endereço do buffer que armazena a lista.
 * @param new Aponta para o buffer que armazena o elemento à ser adicionado
 * a lista.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Itera a lista e aplica uma função passada como parâmetro para cada
 * elemento da lista.
 * 
 * @param lst Aponta para o endereço do ponteiro para um elemento de uma lista.
 * @param f Aponta para o endereço onde está armazenada a função à ser aplicada
 * a função que será aplicada a cada elemento da lista.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Recebe um elemento de uma lista e libera a memória do conteúdo do
 * elemento usando a função passada pelo parâmetro 'del' e libera o elemento. E
 * a memória do elemento seguinte não é liberado.
 * 
 * @param lst Aponta para o buffer que armazena um elemento de uma lista.
 * @param del Aponta para o endereço onde está armazenada a função usada para
 * liberar a memória do conteúdop do elemento passado.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * @brief Deleta e libera o primeiro elemento de uma lista e todos os outros 
 * sub-sequentes. E no final seta como NULL o ponteiro da lista.
 * 
 * @param lst Aponta para o buffer que armazena a lista.
 * @param del Aponta para o endereço onde está armazenada a função usada para
 * delletar e liberar a memória do conteúdo dos elementos da lista passada.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * @brief Itera uma lista e aplica uma função para cada elemento dela. Criando
 * uma nova lista como resultado das iterações. A função 'del' é usada para
 * deletar e liberar a memória de um elemento caso necessário. 
 * 
 * @param lst Aponta para o buffer que armazena um elemento de uma lista.
 * @param f Aponta para o endereço onde está armazenada a função à ser aplicada
 * a função que será aplicada a cada elemento da lista.
 * @param del  Aponta para o endereço onde está armazenada a função usada para
 * liberar a memória do conteúdo de um elemento caso seja necessário.
 * @return t_list* | Retorna uma nova lista criada a partir das iterações
 * anteriores na lista original.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
