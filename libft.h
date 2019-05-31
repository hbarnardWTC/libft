#ifndef _LIBFT_H_
#define _LIBFT_H_
	#include <string.h>
	#include <stdlib.h>
	#include <unistd.h>

	void	ft_putchar(char c);
	void	ft_putstr(const char *c);
	void	ft_putnbr(int nbr);
	int		ft_strlen(const char *s);
	char	*ft_strdup(const char *s1);
	int		ft_isdigit(int c);
	int		ft_atoi(const char *s);
	void	ft_bzero(void *s, size_t n);
	int 	ft_memcmp(const void *s1, const void *s2, size_t n);
	void	*ft_memcpy(void *dst, const void *src, size_t n);
	void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
	void    *ft_memmove(void *dst, const void *src, size_t len);
	void 	*ft_memset(void *b, int c, size_t len);
	void	*ft_memchr(const void *s, int c, size_t n);
	char	*ft_strcpy(char * dst, const char * src);
	char	*ft_strncpy(char * dst, const char * src, size_t len);
	char	*ft_strcat(char *s1, const char *s2);
	char 	*ft_strncat(char *s1, const char *s2, size_t n);
	size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
	char    *ft_strchr(const char *s, int c);
	char    *ft_strrchr(const char *s, int c);
	char	*ft_strstr(const char *haystack, const char *needle);
	char    *ft_strnstr(const char *s1, const char *s2, size_t n);
	int		ft_strcmp(const char *s1, const char *s2);
	int ft_strncmp(const char *s1, const char *s2, size_t n);
#endif /*_LIBFT_H_*/
