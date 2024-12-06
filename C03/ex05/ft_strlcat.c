/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:02:24 by winaung           #+#    #+#             */
/*   Updated: 2024/05/29 17:38:42 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	len;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_dest < size)
		len = len_dest + len_src;
	else
		len = len_src + size;
	if (size > 0)
	{
		while (src[i] && (len_dest + i < size - 1))
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
	}
	return (len);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	str1[] = "hello world!";
// 	char	str2[] = "hello, ";
// 	int a = ft_strlcat(str2, str1, 5);
// 	printf("%d\n",a);
// }