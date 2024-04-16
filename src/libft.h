/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:25:23 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/16 13:14:01 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

//LIBC FUNCTIONS_____________________________________
//PAGE 6, LEFT COLUMN
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
//memmove
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
//PAGE 6, RIGHT COLUMN
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
// P6 MALLOC FUNCTIONS
// calloc
char	*ft_strdup(const char *s);
//END LIBC FUNCTIONS_____________________________________
/*
int		ft_isalpha(int c);
int		ft_isdigit(int c);
char	*ft_strchr(const char *s, int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
size_t	ft_strlen(const char *s);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_bzero(void *s, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *nptr);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *s);
// memmove
// calloc
*/
