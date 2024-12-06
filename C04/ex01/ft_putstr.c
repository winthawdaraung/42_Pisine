/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:39:40 by winaung           #+#    #+#             */
/*   Updated: 2024/06/05 15:33:38 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr( char *str )
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	write(1, str, i);
}
int	main(void)
{
	char	text[] = "hello, world!";
	ft_putstr(text);
}