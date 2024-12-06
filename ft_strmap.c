/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leire <leire@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:42:05 by leire             #+#    #+#             */
/*   Updated: 2024/12/05 19:42:38 by leire            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	fstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (fstr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		fstr[i] = f(i, s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
/*ft_strmapi applies the function (f) to each character of the input string
(s) and returns a new string (fstr) containing the characters of the input
string (s).input string (s) and returns a new string (fstr) containing the
transformed characters.*/
/*
char	to_upper(unsigned int index, char c)
{
	(void)index;
	 if (c >= 'a' && c <= 'z')
		c = c - 32;
	return(c);
}

int main(void)
{
	char *original_str;
	char *mapped;

	original_str = "Hola!";
	mapped = ft_strmapi(original_str, to_upper);
	printf("Original string: %s\n", original_str);
	printf("Mapped string: %s\n", mapped);
	free(mapped);
	return 0;
} */