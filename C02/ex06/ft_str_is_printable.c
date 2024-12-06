/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:51:45 by winaung           #+#    #+#             */
/*   Updated: 2024/05/27 14:37:38 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
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
// 	printf("%d", ft_str_is_printable("Coucoutu vas bien ?"));
// }