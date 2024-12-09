/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leesparz <leesparz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:32:30 by leesparz          #+#    #+#             */
/*   Updated: 2024/11/27 18:03:00 by leesparz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

/* ft_memset establece los primeros len bytes del bloque de memoria apuntado
por b al valor c (convertido a unsigned char).
La función devuelve b para indicar que el llenado se ha completado. */
/* int main()
{
	char str[5];
	int c;
	size_t len;
	size_t i;

	len = sizeof(str);
	c = 'B';
	i = 0;

	// Initialize str with random values
	while (i < len)
	{
		str[i] = '0' + (i % 10);
		i++;
	}

	printf("Before ft_memset: %s\n", str);
	ft_memset(str, c, len);
	printf("After ft_memset: %s\n", str);

	return 0;
} */