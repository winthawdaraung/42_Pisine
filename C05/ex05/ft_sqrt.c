/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:29:46 by winaung           #+#    #+#             */
/*   Updated: 2024/06/06 15:30:35 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sqr;

	i = 1;
	sqr = 0;
	while (i <= (nb / 2) + 1)
	{
		sqr = i * i;
		if (sqr == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d", ft_sqrt(1));
}
