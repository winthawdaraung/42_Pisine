/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:01:46 by winaung           #+#    #+#             */
/*   Updated: 2024/06/05 18:38:27 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 0)
	{
		result *= i;
		i--;
	}
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d",ft_iterative_factorial(5));
// 	printf("\n%d",ft_iterative_factorial(-5));
// 	printf("\n%d",ft_iterative_factorial(0));
// }
