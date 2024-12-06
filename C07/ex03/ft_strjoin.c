/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:07:02 by winaung           #+#    #+#             */
/*   Updated: 2024/06/11 15:37:06 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*str_cat(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			result[c++] = sep[j++];
		}
		i++;
	}
	result[c] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*result;
	int		i;

	total_len = 0;
	i = 0;
	if (size <= 0)
	{
		result = (char *) malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	while (i < size)
	{
		total_len += str_len(strs[i]);
		i++;
	}
	total_len += str_len(sep) * (size - 1);
	result = (char *) malloc (total_len + 1 * sizeof(char));
	result = str_cat(size, strs, sep, result);
	return (result);
}
// #include<stdio.h>
// int	main(void)
// {
// 	char	*tab[4];
// 	tab[0] = "hello";
// 	tab[1] = "hi";
// 	tab[2] = "bonjour";
// 	tab[3] = "hallo";
// 	printf("%s", ft_strjoin(4, tab, ": "));
// 	return (0);
// }