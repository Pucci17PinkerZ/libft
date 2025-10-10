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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*new_src;
	size_t				i;

	i = 0;
	new_src = src;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = new_src[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// int main (void)
// {
//     char tab[5] = "abcde";
//     char tab2[6] = "IIIIII";
//     printf("%s\n", (char *)ft_memcpy(tab, tab2, 0));
//     printf("%s\n", (char *)ft_memcpy(tab, tab2, 5));
//     // printf("tab %c\n", tab[17]);
//     // printf("tab2 %c\n", tab2[17]);
//     // printf("tab %c\n", tab[18]);
//     // printf("tab2 %c\n", tab2[18]);
// }