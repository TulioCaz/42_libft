/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:11:14 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/08 18:20:06 by tcamargo         ###   ########.fr       */
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
int		ft_strncmp(char *str1, char *str2, size_t n);

/**
 * @brief Compara os buffers de bytes binários de 'n' bytes. Vai comparando byte
 * por byte checando se os valores são iguais, parando quando se diferem ou ao
 * fim dos 'n' bytes.
 * @param buf1 Endereçõ para um bloco de memória.
 * @param buf2 Endereçõ para outro bloco de memória.
 * @param n O número máximo de bytes a serem comparados.
 * @return int | =0 Se os 'n' primeiros bytes do buffer tiverem o mesmo valor;
 * +1 Se o primeiro byte que difere tem um valor maior em buf1 do que em buf2;
 * -1 Se o primeiro byte que difere tem um valor menor em buf1 do que em buf2;
 */
int		ft_memcmp(void *buf1, void *buf2, size_t n);

/**
 * @brief Calcula o comprimento de uma string terminada em nulo, mas sem contar
 * o byte nulo.
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
int		ft_atoi(char *str);

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
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
size_t	ft_strlcat(char *dst, char const *src, size_t n);
size_t	ft_strlcpy(char *dst, char const *src, size_t n);
char	*ft_strnstr(char *str1, char *str2, size_t n);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memcpy(void *dst, void *str, size_t n);
char	*ft_strrchr(char const *str, int c);
char	*ft_strchr(char const *str, int c);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *str);

// File descriptor Manipulation
/**
 * @brief Passa a string fornecida como parâmetro para o File Descriptor
 * indicado, com uma quebra de linha no final.
 * 
 * @param s Aponta para o endereço na memória onde a string está armazenada.
 * @param fd Numero que indica o File Descriptor.
 */
void	ft_putendl_fd(char *s, int fd);

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
 * @param s Aponta para o endereço na memória onde a string está armazenada.
 * @param fd Numero que indica o File Descriptor.
 */
void	ft_putstr_fd(char *s, int fd);

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
void	*ft_memmove(void *dst, void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memchr(void *str, int c, size_t n);
void	*ft_calloc(size_t nitens, size_t size);
void	ft_bzero(void *dst, size_t n);

// Bonus Functions -- Create and manipulate linked lists
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);

#endif
