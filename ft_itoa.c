/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leire <leire@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:39:09 by leire             #+#    #+#             */
/*   Updated: 2024/12/05 19:41:29 by leire            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_it_negative(long m);
int	sizer(long m);

char	*ft_itoa(int n)
{
	long	m;
	int		size;
	char	*str;

	m = n;
	size = sizer(m);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (m == 0)
		str[0] = '0';
	if (m < 0)
	{
		m *= -1;
		str[0] = '-';
	}
	str[size--] = '\0';
	while (m > 0)
	{
		str[size--] = m % 10 + '0';
		m = m / 10;
	}
	return (str);
}

int	sizer(long m)
{
	int	size;

	size = 0;
	if (m == 0)
		size = 1;
	if (m < 0)
	{
		m *= -1;
		size++;
	}
	while (m > 0)
	{
		m /= 10;
		size++;
	}
	return (size);
}

/* int	main(void)
{
	char	*str = ft_itoa(-12345);

	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (0);
} */