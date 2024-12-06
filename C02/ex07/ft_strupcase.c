/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:57:40 by winaung           #+#    #+#             */
/*   Updated: 2024/05/26 17:13:19 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i ++;
	}
	return (str);
}
// 
// #include <stdio.h>

// int	main(void)
// {
// 	char text[] = "hEllo";
// 	printf("%s", ft_strupcase(text));
// }