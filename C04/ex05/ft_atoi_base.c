/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:16:38 by winaung           #+#    #+#             */
/*   Updated: 2024/06/05 15:35:52 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
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

int	cal_num(char *str, char *base, int base_len)
{
	int	result;
	int	j;

	result = 0;
	while (*str)
	{
		j = 0;
		while (base[j])
		{
			if (*str == base[j])
			{
				result = result * base_len + (j);
				break ;
			}
			j++;
		}
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	neg_val;
	int	result;
	int	base_len;

	neg_val = 1;
	result = 0;
	if (base_invalid(base))
		return (0);
	base_len = ft_strlen(base);
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg_val *= -1;
		str++;
	}
	result = cal_num(str, base, base_len);
	return (result * neg_val);
}
// #include<stdio.h>
// int	main (int argc, char **argv)
// {
// 	printf("%d", ft_atoi_base(argv[1], argv[2]));
// }
