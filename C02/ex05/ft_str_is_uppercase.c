/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:45:07 by winaung           #+#    #+#             */
/*   Updated: 2024/05/26 16:46:27 by winaung          	###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
// 	printf("%d", ft_str_is_uppercase("ABC"));
// 	return (0);
// }