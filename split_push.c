#include <stdlib.h>

char	*ft_strncpy(char *s1, char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

void	ft_free(char **array, int k)
{
	while (k >=0)
	{
		free(array[k]);
		k--;
	}
	free(array);
}

char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	k;
	int wc;
	char	**array;

	i = 0;
	j = 0;
	k = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	array = malloc(sizeof(char *) * (wc + 2));
	if (!array)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (j < i)
		{
			array[k] = malloc(sizeof(char ) * ((i - j) + 1));
                        if (k == 0)
                                array[k][0] = '\0'; 
			if (!array[k])
			{
				ft_free(array, k);
				return (NULL);
			}
			ft_strncpy(array[k++], &str[j], i - j);
		}
	}
	array[k] = NULL;
	return (array);
}

#include <stdio.h>

int main()
{
    char *str = "12 45 89";
    char **array;
    int i = 0;

    array = ft_split(str);

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
}
