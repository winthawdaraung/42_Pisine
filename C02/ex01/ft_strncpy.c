/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:03:04 by winaung           #+#    #+#             */
/*   Updated: 2024/05/28 17:46:48 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}
// 
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	a[] = "Hello!";
// 	char	b[] = "Hi!";

// 	printf("%s\n",ft_strncpy(b, a, 3));
// 	printf("%s\n",strncpy(b, a, 3));
// 	return (0);
// }