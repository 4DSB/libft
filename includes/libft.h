/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <amittal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by amittal           #+#    #+#             */
/*   Updated: 2017/08/21 01:21:30 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdlib.h>

# include "macrosft.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_slice
{
	char			*str;
	char			delim;
	size_t			x0;
	size_t			x1;
	size_t			y0;
	size_t			y1;
}					t_slice;

typedef struct		s_text
{
	char			*start;
	char			*end;
	char			delim;
}					t_text;

void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *src);
char				*ft_strfjoin(char *s1, char *s2);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strchr(const char *str, char c);
char				*ft_strrchr(const char *str, char c);
char				*ft_strchrnul(const char *str, char c);
char				*ft_strstr(const char *str, const char *c);
char				*ft_strnstr(const char *str,
								const char *c, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strrev(char *str);
char				*ft_strset(char *str, char c);
char				*ft_strnchr(const char *str, char c, size_t n);
char				*ft_strvchr(char *head, char *from, char q);
char				*ft_strvchrhed(char *head, char *from, char q);
int					ft_atoi(char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
int					ft_strevery(char const *s, int (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*my_strsub(char const *start, char const *end);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
size_t				ft_lstlen(t_list *lst);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstpush(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstrev(t_list **begin_list);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_lstevery(t_list *lst, int (*f)(t_list *elem));
void				ft_lstsort(t_list **list,
	int (*cmp)(void *a_, void *b_), void *(*get_data)(t_list *e));
void				ft_lstiter_if(t_list *lst, void (*f)(t_list *e),
							int (*g)(t_list *e));
size_t				ft_count_digits(int value);
char const			*ft_next_word(char const *str, char delim);
char				*ft_word_copy(char *dest, char const *src, char delim);
unsigned			ft_count_words(char const *str, char delim);
unsigned			ft_word_length(char const *str, char delim);
t_point				*ft_ptnew(int x, int y);
t_point				*ft_ptsub(t_point *minuend, t_point *subtrahend);
int					get_next_line(int const fd, char **line);

#endif
