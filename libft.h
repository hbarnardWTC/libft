#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef _LIBFT_H_
#define _LIBFT_H_
	void	ft_putchar(char c);
	void	ft_putstr(const char *c);
	void	ft_putnbr(int nbr);
	int		ft_strlen(const char *s);
	char	*ft_strdup(const char *s1);
	int		ft_isdigit(int c);
	int		ft_atoi(const char *s);
	void	ft_bzero(void *s, size_t n);
	int 	ft_memcmp(const void *s1, const void *s2, size_t n);
	void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
	void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
	void    *ft_memmove(void *dst, const void *src, size_t len);
	void 	*ft_memset(void *b, int c, size_t len);
	void	*ft_memchr(const void *s, int c, size_t n);
	char	*ft_strcpy(char * dst, const char * src);
	char	*ft_strncpy(char * dst, const char * src, size_t len);
	char	*ft_strcat(char *restrict s1, const char *restrict s2);
#endif /*_LIBFT_H_*/
