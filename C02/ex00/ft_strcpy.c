/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 13:09:52 by winaung           #+#    #+#             */
/*   Updated: 2024/05/26 14:00:02 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
// 
// #include <stdio.h>

// int	main(void)
// {
// 	char	a[] = "Ho!";
// 	char	b[] = "Hi!";

// 	printf("%s\n",ft_strcpy(b, a));
// 	return (0);
// }