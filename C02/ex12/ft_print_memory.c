/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:53:29 by winaung           #+#    #+#             */
/*   Updated: 2024/05/31 14:31:33 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	printbytehex(unsigned char c)
{
	char	*hexa_char;

	hexa_char = "0123456789abcdef";
	if ((c / 16) > 0)
	{
		write(1, &hexa_char[c / 16], 1);
		write(1, &hexa_char[c % 16], 1);
	}
	else
	{
		write(1, "0", 1);
		write(1, &hexa_char[c], 1);
	}
}

void	ft_write_address(void *str)
{
	unsigned char	*ptr;
	int				i;

	i = 7;
	ptr = (unsigned char *)&str;
	while (i >= 0)
	{
		printbytehex(*(ptr + i));
		i--;
	}
}

void	ft_print_str(void *addr)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)addr;
	write(1, " ", 1);
	while (i < 16 && str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, ".", 1);
		}
		i++;
	}
}

void	ft_write_hexa(void *addr)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *) addr;
	while (i < 16)
	{
		if (str[i])
			printbytehex(str[i]);
		else
		{
			write(1, " ", 1);
			write(1, " ", 1);
		}
		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	i = 0;
	while (i < size)
	{
		if (i % 16 == 0)
		{
			ft_write_address((void *)addr + (n * 16));
			write(1, ":", 1);
			write(1, " ", 1);
			ft_write_hexa(addr + (n * 16));
			ft_print_str(addr + (n * 16));
			write(1, "\n", 1);
			n++;
		}
		i++;
	}
	return (addr);
}
int main()
{
    char str[] = "\x0a\x09lo.lol\x0a \x00";
	ft_print_memory(str, 92);
	return (0);
}