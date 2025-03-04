/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:06:05 by nogioni-          #+#    #+#             */
/*   Updated: 2025/03/04 16:06:09 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char *s, char c)
{
    int i;
    int wc;
    
    i = 0;
    wc = 0;
    while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i])
			wc++;
		while (s[i] && (s[i] != c))
			i++;
	}
    return (wc);
}

static char	*get_next_word(char *s, char c)
{
	static int	cursor = 0;
	char		*next_word;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (s[cursor] == c)
		++cursor;
	while ((s[cursor + len] != c) && s[cursor + len])
		++len;
	next_word = malloc(sizeof(char) + (len + 1));
	if (!next_word)
		return (NULL);
	while ((s[cursor] != c) && s[cursor])
		next_word[i++] = s[cursor++];
	next_word[i] = '\0';
	return (next_word);
}

char **split(char *s, char c)
{
	int		words_count;
	char	**array;
	int		i;

	i = 0;
	words_count = count_words(s, c);
	if (!words_count)
		exit(1);
	array = malloc(sizeof(char *) * (words_count + 2));
	if (!array)
		return (NULL);
	while (words_count-- >= 0)
	{
		if (i == 0)
		{
			array[i] = malloc(sizeof(char));
			if (!array[i])
				return (NULL);
			array[i++][0] = '\0';
			continue ;
		}
		array[i++] = get_next_word(s, c);
	}
	array[i] = NULL;
	return (array);
}
/* 
#include <stdio.h>
int main()
{
    char *str = "12 45 89";
    char **array;
    int i = 0;

    array = split(str, ' ');

    if (!array)
    {
        printf("Erro: ft_split retornou NULL\n");
        return (1);
    }

    while (array[i])
	{
        printf("%s\n", array[i]);
        free(array[i]);
        i++;
    }
    free(array);
    return (0);
} */
