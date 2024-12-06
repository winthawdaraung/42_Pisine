/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:33:51 by winaung           #+#    #+#             */
/*   Updated: 2024/05/29 17:54:14 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexa_char(unsigned char c)
{
	char	*hexa_char;

	hexa_char = "0123456789abcdef";
	if ((c / 16) > 0)
	{
		ft_putchar(hexa_char[c / 16]);
		ft_putchar(hexa_char[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexa_char[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			hexa_char(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
// int	main(void)
// {
// 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
// 	return (0);
// }