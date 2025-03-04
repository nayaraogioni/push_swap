/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:12:01 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/24 19:57:13 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strndup(const char	*s, size_t n)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc (sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_count(char const *str, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (count);
}

static void	ft_free(char **strings)
{
	size_t	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}

static char	**fill_words(char const *s, char **strings, char c)
{
	size_t	i;
	size_t	d;
	size_t	words;

	i = 0;
	d = 0;
	while (i < (size_t)ft_count(s, c))
	{
		while (s[d] == c)
			d++;
		words = 0;
		while (s[d + words] != '\0' && s[d + words] != c)
			words++;
		strings[i] = ft_strndup(&s[d], words);
		if (!strings[i])
		{
			ft_free(strings);
			return (NULL);
		}
		d = d + words;
		i++;
	}
	strings[i] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	size_t	count_words;
	char	**strings;

	count_words = ft_count(s, c);
	strings = malloc (sizeof(char *) * (count_words + 1));
	if (!s || !strings)
		return (NULL);
	strings = fill_words(s, strings, c);
	if (!strings)
	{
		free(strings);
		return (NULL);
	}
	return (strings);
}

/*int	main()
{
	char const *str = "This is a test string for split function";
    char **result = ft_split(str, ' ');
    if (result == NULL)
        return 1;
    printf("Result of split:\n");
    printf("%s\n", result[0]);
    printf("%s\n", result[1]);
    printf("%s\n", result[2]);
    printf("%s\n", result[3]);
    printf("%s\n", result[4]);
    printf("%s\n", result[5]);
    printf("%s\n", result[6]);
    printf("%s\n", result[7]);
	return (0);
}*/
