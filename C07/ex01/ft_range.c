/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:28:14 by winaung           #+#    #+#             */
/*   Updated: 2024/06/11 15:34:56 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range_arr;
	int	i;

	i = 0;
	range_arr = (int *) malloc((max - min) * sizeof(int));
	if (range_arr == NULL)
		return (NULL);
	if (min >= max)
		return (0);
	while (min < max)
	{
		range_arr[i] = min;
		i++;
		min++;
	}
	return (range_arr);
}
// #include<stdio.h>
// int	main(void)
// {
// 	int	*arr;
// 	int	i;

// 	i = 0;
// 	int min = 2;
// 	int max = 3;
// 	arr = ft_range(min, max);
// 	while (i < (max - min))
// 	{
// 		printf("%d", arr[i]);
// 		i++;
// 	}
// 	free(arr);
// }
