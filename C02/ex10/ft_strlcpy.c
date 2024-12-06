/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:44:41 by winaung           #+#    #+#             */
/*   Updated: 2024/05/29 17:06:21 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_lenght;
	unsigned int	i;

	i = 0;
	src_lenght = 0;
	while (src[src_lenght] != '\0')
	{
		src_lenght++;
	}
	if (size == 0)
	{
		return (src_lenght);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_lenght);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	a[] = "Hello there!";
// 	char	b[] = "hi";
// 	int	len = ft_strlcpy(b, a, 10);
// 	printf("%s", b);
// 	printf("%d", len);
// }