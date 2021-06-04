/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcamargo <tcamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:11:14 by tcamargo          #+#    #+#             */
/*   Updated: 2021/06/04 14:42:10 by tcamargo         ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
size_t	ft_strlcat(char *dst, char const *src, size_t n);
size_t	ft_strlcpy(char *dst, char const *src, size_t n);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
char	*ft_strnstr(char *str1, char *str2, size_t n);
char	*ft_strtrim(char const *s1, char const *set);
int		ft_strncmp(char *str1, char *str2, size_t n);
void	*ft_memmove(void *dst, void *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_memcmp(void *str1, void *str2, size_t n);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	*ft_memcpy(void *dst, void *str, size_t n);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memchr(void *str, int c, size_t n);
void	*ft_calloc(size_t nitens, size_t size);
char	*ft_strchr(char const *str, int c);
char	**ft_split(char const *s, char c);
void	ft_putendl_fd(char *s, int fd);
void	ft_bzero(void *dst, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strrchr(char *str, int c);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlen(char const *str);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
char	*ft_strdup(char *str);
int		ft_atoi(char *str);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_itoa(int n);

#endif
