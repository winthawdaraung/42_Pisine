/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:12:24 by winaung           #+#    #+#             */
/*   Updated: 2024/05/28 18:18:53 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}
// 
// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("%d", ft_str_is_numeric("123A56789"));
// }