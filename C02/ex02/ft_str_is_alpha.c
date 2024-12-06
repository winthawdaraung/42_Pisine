/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:46:56 by winaung           #+#    #+#             */
/*   Updated: 2024/05/30 15:40:48 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_str_is_alpha("abcdg"));
// 	return (0);
// }