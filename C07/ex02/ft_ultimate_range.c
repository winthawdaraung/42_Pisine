/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:43:07 by winaung           #+#    #+#             */
/*   Updated: 2024/06/11 15:34:04 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc (sizeof (*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
// #include<stdio.h>
// int	main(void)
// {
// 	int	*arr;
// 	int	i;

// 	i = 0;
// 	int min = 2;
// 	int max = 5;
// 	int len = ft_ultimate_range(&arr, min, max);
// 	while (i < (max - min))
// 	{
// 		printf("%d", arr[i]);
// 		i++;
// 	}
// 	printf("\nlength : %d", len);
// 	free(arr);
// }