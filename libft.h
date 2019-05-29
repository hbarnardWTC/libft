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
#endif /*_LIBFT_H_*/
