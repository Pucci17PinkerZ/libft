/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiora-d <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:57:06 by nfiora-d          #+#    #+#             */
/*   Updated: 2025/10/03 12:43:43 by nfiora-d         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	if (s[i -1] != c)
		count++;
	return (count);
}

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	while (s1[i] && i < n)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	pos;
	size_t	letter;
	char	**tab;

	i = 0;
	j = 0;
	letter = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		letter = 0;
		while (s[i] == c)
			i++;
		pos = i;
		while (s[i] != c && s[i])
		{
			letter++;
			i++;
		}
		tab[j] = ft_strndup(&s[pos], letter);
		j++;
	}
	((char *)tab)[j] = '\0';
	return (tab);
}
// int	main (void)
// {
// 	char tab[100] = "lol  lil lul";
// 	char **swo;
// 	swo = ft_split(tab, 6);
// 	printf("%s\n", swo[0]);
// 	// printf("%s\n", swo[1]);
// 	// printf("%s\n", swo[2]);
// 	// printf("%s\n", swo[3]);
// }