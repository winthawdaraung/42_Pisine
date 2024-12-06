/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:10:33 by winaung           #+#    #+#             */
/*   Updated: 2024/06/05 15:33:42 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_chr_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
	{
		return (0);
	}
}

int	ft_atoi(char *str)
{
	int	neg_val;
	int	result;

	neg_val = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg_val *= -1;
		str++;
	}
	while (ft_chr_is_numeric(*str))
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	return (result * neg_val);
}
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi("   \t+-123"));
}