/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:10:22 by winaung           #+#    #+#             */
/*   Updated: 2024/06/06 10:08:38 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

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

void	ft_sort_str(char **strs, int size)
{
	char	*tmp;
	int		i;

	i = 0;
	while (i < size - 1)
	{
		if (ft_strcmp(strs[i], strs[i + 1]) > 0)
		{
			tmp = strs[i];
			strs[i] = strs[i + 1];
			strs[i + 1] = tmp;
			ft_sort_str(strs, size);
		}
		i ++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc >= 0)
		ft_sort_str(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
