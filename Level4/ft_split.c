//SOLUCION EXAMEN
#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;

	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}
//SOLUCION LIBRERIA

// static int	count_words(const char *str, char c)
// {
// 	int	x;
// 	int	count;
// 	int	i;

// 	x = 0;
// 	i = 0;
// 	count = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] != c && x == 0)
// 		{
// 			count++;
// 			x = 1;
// 		}
// 		else if (str[i] == c && x == 1)
// 			x = 0;
// 		i++;
// 	}
// 	return (count);
// }
// int count_words(char *str, char c)
// {
//     int i;
//     int count;

//     i = 0;
//     count = 0;

//     while (str[i])
//     {
//         while (str[i] && str[i] == c)
//             i++;
//         if (str[i] != c)
//             count++;
//         while (str[i] && str[i] != c)
//             i++;
//     }
//     return (count);
// }

// static int	free_str(char **str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		free(str[i]);
// 		i++;
// 	}
// 	free(str);
// 	return (0);
// }

// static int	write_str(char **res, char *str, char c)
// {
// 	int	i;
// 	int	j;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == c)
// 			i++;
// 		else
// 		{
// 			j = 0;
// 			while (str[i + j] != c && str[i + j])
// 				j++;
// 			res[count] = ft_substr(str, i, j);
// 			if (res[count] == NULL)
// 				return (free_str(res));
// 			i = i + j;
// 			count++;
// 		}
// 	}
// 	return (1);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		count;
// 	char	**res;

// 	if (!s)
// 		return (NULL);
// 	count = count_words((char *)s, c);
// 	res = ft_calloc(count + 1, sizeof(char *));
// 	if (!res)
// 		return (NULL);
// 	if (!write_str(res, (char *)s, c))
// 		return (NULL);
// 	return (res);
// }

// int main()
// {
// 	char	s[] = "////hi /worl/// bye/ how/are/you";
	
// 	char	**res;

	
// 	int i = 0;
// 	res = ft_split(s);
// 	if (res == NULL)
// 	{
// 		printf("Error.\n");
// 		return (1);
// 	}
// 	for 
// 		(int i = 0; 
// 		res[i] != NULL; 
// 		i++)
// 	{
// 		printf("Palabra %d: %s\n", i + 1, res[i]);
// 		free(res[i]);
// 	}
// 	free(res);
// 	return (0);	
// }

int main() {
    char s[] = "////hi /worl/// bye/ how/are/you";
    char **res;

    res = ft_split(s);
    if (res == NULL) {
        printf("Error.\n");
        return (1);
    }

    // Usamos un bucle while para imprimir las palabras
    int i = 0;
    while (res[i] != NULL) 
	0{
        printf("Palabra %d: %s\n", i + 1, res[i]);
        free(res[i]); // Liberamos la memoria de cada palabra
        i++;
    }
    free(res); // Liberamos la memoria del arreglo de punteros

    return 0;
}