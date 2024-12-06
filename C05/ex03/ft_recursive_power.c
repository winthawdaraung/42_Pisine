/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:58:13 by winaung           #+#    #+#             */
/*   Updated: 2024/06/05 18:40:26 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d",ft_recursive_power(2, 6));
// 	printf("\n%d",ft_recursive_power(5, -1));
// 	printf("\n%d",ft_recursive_power(5, 0));
// 	printf("\n%d",ft_recursive_power(0, 5));
// }