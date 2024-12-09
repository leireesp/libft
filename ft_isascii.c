/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leesparz <leesparz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:39:15 by leesparz          #+#    #+#             */
/*   Updated: 2024/11/27 16:51:39 by leesparz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include "stdio.h"
int main (int argc, char **argv)
{
	int		i;
	char	c;
	
	 if (argc != 2)
	{
		printf("Error en el num de argumentos");
		return (0);
	}
	c = argv[1][3];
	i = ft_isascii(c);
	if (i == 0)
		printf("No es un caracter ASCII return (%i)", i);
	else
		printf("Si es un caracter ASCII return (%i)", i);
	return(0);
} */