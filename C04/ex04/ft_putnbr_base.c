/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:19:30 by winaung           #+#    #+#             */
/*   Updated: 2024/06/05 15:34:53 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	base_invalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	n;

	base_len = ft_strlen(base);
	if (base_invalid(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	else
		n = nbr;
	if (n < base_len)
	{
		ft_putchar(base[n]);
	}
	else
	{
		ft_putnbr_base(n / base_len, base);
		ft_putnbr_base(n % base_len, base);
	}
}
int	main(void)
{
	ft_putnbr_base(894867, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(-12, "01");
	ft_putchar('\n');
	ft_putnbr_base(53, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(0, "01");
	ft_putchar('\n');
	ft_putnbr_base(15, "");
	ft_putchar('\n');
	ft_putnbr_base(-15, "abbcd");
	ft_putchar('\n');
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(40, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(123, "a");
	ft_putchar('\n');
	ft_putnbr_base(-2147483648, "01");
}