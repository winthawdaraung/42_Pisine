/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winaung <winaung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:02:54 by winaung           #+#    #+#             */
/*   Updated: 2024/06/12 11:08:16 by winaung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

int	is_sep(char c, char *sep)
{
	while (*sep)
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
}

int	words_count(char *str, char *sep)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (is_sep(*str, sep) == 0 && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (is_sep(*str, sep))
			trigger = 0;
		str++;
	}
	return (i);
}

char	*place_word(char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		index;
	char	**split;

	split = malloc((words_count(str, charset) + 1) * sizeof(char *));
	if (!str || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= str_len(str))
	{
		if (is_sep(str[i], charset) == 0 && index < 0)
			index = i;
		else if ((is_sep(str[i], charset) || i == str_len(str)) && index >= 0)
		{
			split[j++] = place_word(str, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
// #include <stdio.h>
// int		main(void)
// {
// 	char	**strs;
// 	int		i;

// 	i = 0;
// 	strs = ft_split("helo world", "ol");
// 	while (strs[i])
// 	{
// 		printf("%s\n",strs[i]);
// 		i++;
// 	}
// 	return (0);
// }
