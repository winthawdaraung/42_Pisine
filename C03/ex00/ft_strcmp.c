/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:38:50 by winaung           #+#    #+#             */
/*   Updated: 2024/05/29 16:52:58 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
// 
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str1[] = "hello, world!";
// 	char	str2[] = "hello world!";
// 	printf("%d", ft_strcmp(str1, str2));
// 	printf("\n%d",strcmp(str1,str2));
// }