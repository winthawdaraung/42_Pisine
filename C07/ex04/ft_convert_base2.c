/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:17:01 by winaung           #+#    #+#             */
/*   Updated: 2024/06/10 14:18:08 by winaung          ###   ########.fr       */
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

int	is_inbase(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

int	cal_num(char *str, char *base, int base_len)
{
	int	result;
	int	j;

	result = 0;
	while (is_inbase(*str, base))
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
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
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
