/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leire <leire@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:47:53 by leire             #+#    #+#             */
/*   Updated: 2024/12/05 19:51:32 by leire            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
void to_upper(unsigned int index, char *c)
{
	(void)index; //para usar sin usar
	 if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}
int main(void)
{
	char original_str[] = "Hola!";

	ft_striteri(original_str, to_upper);
	// Print the original and the mapped strings
    printf("Mapped string: %s\n", original_str);

    return 0;
}  */