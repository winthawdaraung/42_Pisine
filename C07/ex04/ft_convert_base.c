/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:07:35 by winaung           #+#    #+#             */
/*   Updated: 2024/06/12 10:55:44 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	base_invalid(char *base);
int	is_inbase(char c, char *str);
int	cal_num(char *str, char *base, int base_len);
int	ft_atoi_base(char *str, char *base);

int	num_len(int num, int len, int base_len)
{
	if (num <= 0)
	{
		len++;
		num = -num;
	}
	while (num >= base_len)
	{
		len ++;
		num = num / base_len;
	}
	len++;
	return (len);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}

char	*ft_nbrtostr(int n, char *base, int base_len)
{
	int		pos;
	char	*num_str;
	int		pow;
	int		n_len;

	pos = 0;
	pow = num_len(n, 0, base_len) - 1;
	n_len = num_len(n, 0, base_len);
	num_str = (char *)malloc(sizeof(char) * n_len);
	if (n < 0)
	{
		num_str[pos] = '-';
		pos++;
		n = -n;
	}
	pow -= pos;
	while (pow >= 0)
	{
		num_str[pos] = base[n / ft_recursive_power(base_len, pow)];
		pos++;
		n = n % ft_recursive_power(base_len, pow);
		pow--;
	}
	num_str[pos + 1] = '\0';
	return (num_str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num_deci;
	int		base_tolen;
	char	*num_str;

	if (base_invalid(base_from) || base_invalid(base_to))
		return (0);
	base_tolen = ft_strlen(base_to);
	num_deci = ft_atoi_base(nbr, base_from);
	if (num_deci == 0)
	{
		num_str = (char *)malloc(sizeof(char) * 2);
		num_str[0] = '0';
		num_str[1] = '\0';
		return (num_str);
	}
	return (ft_nbrtostr(num_deci, base_to, base_tolen));
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s", ft_convert_base("    --+-2a","0123456789abcdef","0123456789"));
// }
