/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:36:10 by winaung           #+#    #+#             */
/*   Updated: 2024/06/11 19:52:11 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	res = NULL;
	i = 0;
	res = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	if (res != NULL)
	{
		while (src[i] != '\0')
		{
			res[i] = src[i];
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str			*res;

	i = 0;
	res = malloc(sizeof(t_stock_str) * (ac + 1));
	if (res == NULL)
		return (NULL);
	while (i < ac)
	{
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		res[i].size = ft_strlen(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}
// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	int					index;
// 	struct s_stock_str	*structs;

// 	structs = ft_strs_to_tab(argc, argv);
// 	index = 0;
// 	while (index < argc)
// 	{
// 		printf("str: %s\n", structs[index].str);
// 		printf("copy: %s\n", structs[index].copy);
// 		printf("size : %d\n", structs[index].size);
// 		printf("\n");
// 		index++;
// 	}
// }
