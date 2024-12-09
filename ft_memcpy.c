/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leesparz <leesparz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:05:33 by leesparz          #+#    #+#             */
/*   Updated: 2024/11/28 17:58:17 by leesparz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	d = (char *)dest;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*
int	main(void)
{
	const char *origin
	char dst[25];
	size_t n;

	origin = "hola, como estas?";
	//dst = "como estas?";
	//n = ft_strlen(origin);
	n = 9;

	printf("Before memcpy: %s\n", dst);
	printf("After memcpy: %s\n", ft_memcpy(dst, origin, n));

	return(0);
}
*/