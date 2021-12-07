/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hubretec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:12:56 by hubretec          #+#    #+#             */
/*   Updated: 2021/11/25 10:24:39 by hubretec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = -1;
	words = 0;
	while (s[++i])
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			words++;
	return (words);
}

static int	wordlen(char const *s, char c, int start)
{
	int	tmp;

	tmp = start;
	while (s[start] != c && s[start])
		start++;
	return (start - tmp);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (j < count_words(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		tab[j] = (char *)malloc(sizeof(char) * (wordlen(s, c, i) + 1));
		if (!tab[j])
			return (0);
		k = 0;
		while (s[i] != c && s[i])
			tab[j][k++] = s[i++];
		tab[j++][k] = '\0';
	}
	tab[j] = 0;
	return (tab);
}

//#include <stdio.h>
//void display(char **tab)
//{
//	int i;
//
//	i = -1;
//	while (tab[++i])
//		printf("%s\n", tab[i]);
//}
//
//int main(int ac, char **av)
//{
//	int i;
//	char **strs;
//
//	if (ac != 3)
//		return (0);
//	strs = ft_split(av[1], av[2][0]);
//	display(strs);
//	i = 0;
//	while (strs[i])
//		free(strs[i++]);
//	free(strs);
//	return (0);
//}
