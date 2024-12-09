/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leesparz <leesparz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:46:38 by leesparz          #+#    #+#             */
/*   Updated: 2024/11/27 18:03:05 by leesparz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (0 < n)
	{
		*p = 0;
		p++;
		n--;
	}
}

/* The bzero() function writes n zeroed bytes to the string s. If n is zero,
bzero() does nothing. */
/* #include <stdio.h>
int	main(void)
{
	char str[6] = "Hello!";

	printf("Before ft_bzero: %s\n", str);
	ft_bzero(str, sizeof(str));
	printf("After ft_bzero: %s\n", str);

	return (0);
} */
