/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leire <leire@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:20:46 by leire             #+#    #+#             */
/*   Updated: 2024/12/05 18:08:18 by leire            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	i = 0;
	while (s1[i] != '\0')
		i++;
	s2 = malloc(sizeof(char) * (i + 1));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/* int main(void)
{
	char s1[] = "Enhorabuena, has terminado la primera parte";
	char *s2;

	s2 = ft_strdup(s1);
	printf("Mi propio s2 es igual a=%s\n", s2);

	printf("Mi propio s2 es igual a=%s\n", ft_strdup(s1));

	return (0);
} */