#ifndef LIBFT_H
# define LIBFT_H
#include <wchar.h>
#include <stdlib.h>

# define LIBFT_ALPHA_LOW 'A'
# define LIBFT_ALPHA_HIGH 'z'

# define LIBFT_DIGIT_LOW '0'
# define LIBFT_DIGIT_HIGH '9'

//TODO CHECKEN OF DEZE KLOPPEN (ZIJN OCTALS);
# define LIBFT_ASCII_LOW 0
# define LIBFT_ASCII_HIGH 0177

# define LIBFT_PRINTABLE_LOW 040
# define LIBFT_PRINTABLE_HIGH 0176

typedef int	t_bool;

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_bzero(void *dest, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *dest, int ch, size_t len);
char	*ft_strchr(const char *str, int c);
char	*ft_strchrset(const char *str, const char *charset);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strrchrset(const char *str, const char *charset);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *str, char const *set);
char	**ft_split(char const *str, char c);
char	*ft_strsep(char **stringp, const char *delim);
char	*ft_itoa(int num);
#endif