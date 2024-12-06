/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:34:13 by winaung           #+#    #+#             */
/*   Updated: 2024/05/27 10:36:23 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_chrupcase(char c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

char	ft_chrlowcase(char c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

int	ft_chr_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
	{
		return (0);
	}
}

int	ft_chr_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str[0] = ft_chrupcase(str[0]);
	i = 1;
	while (str[i])
	{
		if (ft_chr_is_alpha(str[i - 1]) || ft_chr_is_numeric(str[i - 1]))
			str[i] = ft_chrlowcase(str[i]);
		else
		{
			str[i] = ft_chrupcase(str[i]);
		}
		i++;
	}
	return (str);
}
// 
// #include <stdio.h>

// int	main(void)
// {
// 	char text[] = "salut, comment tu vas ? 42mots 
//quarante-deux; cinquante+et+un";
// 	printf("%s", ft_strcapitalize(text));
// }