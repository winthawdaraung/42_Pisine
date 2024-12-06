/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:37:32 by winaung           #+#    #+#             */
/*   Updated: 2024/06/05 18:39:44 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d",ft_iterative_power(2, 5));
// 	printf("\n%d",ft_iterative_power(5, -1));
// 	printf("\n%d",ft_iterative_power(5, 0));
// 	printf("\n%d",ft_iterative_power(0, 5));
// }