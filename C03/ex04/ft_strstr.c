/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:51:48 by winaung           #+#    #+#             */
/*   Updated: 2024/06/04 11:33:17 by winaung          ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	to_find_len;
	int	j;

	to_find_len = ft_strlen(to_find);
	i = 0;
	if (to_find_len == 0)
		return (&str[i]);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (j == (to_find_len - 1))
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str3[] = "abbshchco";
// 	char	str4[] = "";
// 	char	*ft_ret = ft_strstr(str3,str4);
// 	char	*ret = strstr(str3,str4);
// 	printf("%s", ft_ret);
// 	printf("\n%s", ret);
// }