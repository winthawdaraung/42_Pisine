/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:15:10 by winaung           #+#    #+#             */
/*   Updated: 2024/05/26 17:18:39 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i ++;
	}
	return (str);
}
// 
// #include <stdio.h>

// int	main(void)
// {
// 	char text[] = "hEllo";
// 	printf("%s", ft_strlowcase(text));
// }