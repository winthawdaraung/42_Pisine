/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:07:03 by winaung           #+#    #+#             */
/*   Updated: 2024/06/05 18:39:01 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d",ft_recursive_factorial(5));
// 	printf("\n%d",ft_recursive_factorial(-5));
// 	printf("\n%d",ft_recursive_factorial(0));
// }
