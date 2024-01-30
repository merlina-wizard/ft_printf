#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>

int	ft_putnbr_un(unsigned int n);
int	ft_putnbr(int n);
int	ft_puthex(unsigned int n, const char format);
int	ft_putptr(unsigned long n, const char format);
int	ft_printf(const char *format, ...);
int	ft_type(va_list args, const char format);
int	ft_putstr(char *s);
int	ft_putchar(int c);

#endif
