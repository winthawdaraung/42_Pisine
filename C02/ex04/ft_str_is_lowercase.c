/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:40:43 by winaung           #+#    #+#             */
/*   Updated: 2024/05/26 16:43:58 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
// int	main(void)
// {
// 	printf("%d", ft_str_is_lowercase("1bcDg"));
// 	return (0);
// }