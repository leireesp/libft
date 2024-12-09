/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leesparz <leesparz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:00:10 by leesparz          #+#    #+#             */
/*   Updated: 2024/11/28 17:34:21 by leesparz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
int main(void)
{
	size_t	kk;
	char s[] = {"hola, mundo!"};
	kk = ft_strlen(s); //recupera el return (en este caso (i))
	printf("test 1 %zu", kk);
	return(0);
}
//The strnlen() function attempts to compute the length of str, but never
//scans beyond the first maxlen bytes of s. */