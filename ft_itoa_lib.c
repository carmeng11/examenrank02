/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_lib.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:12:32 by cagomez-          #+#    #+#             */
/*   Updated: 2024/12/30 20:07:37 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_int(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*result;

	len = count_int(nbr);
	result = malloc((len + 1) * sizeof(char));
	
	if (!result)
		return (NULL);
	if (nbr == 0)
		result[0] = '0';
		if (nbr < 0)
	{
		nbr = -nbr;
		result[0] = '-';
	}
	result[len] = '\0';
	while (nbr != 0)
	{
		result[len - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (result);
}

int	main(void)
{
	int n;

	n = 2147483647;
	printf("La cadena convertida es %s", ft_itoa(n));
	return (0);
}
