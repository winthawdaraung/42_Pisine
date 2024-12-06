/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:11:39 by winaung           #+#    #+#             */
/*   Updated: 2024/05/29 16:53:51 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
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
// 	char	str1[] = "hello world!";
// 	char	str2[] = "hello world !";
// 	printf("%d", ft_strncmp(str1, str2, 5));
// 	printf("\n%d",strncmp(str1,str2, 5));
// }
