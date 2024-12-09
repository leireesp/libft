/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leesparz <leesparz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:24:00 by leesparz          #+#    #+#             */
/*   Updated: 2024/11/28 17:34:21 by leesparz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}

/* #include "stdio.h"
int main(void)
{
	printf( "Prueba a %d \n", ft_isalnum('3'));
	printf( "Prueba 0 %d \n", ft_isalnum('F'));
	printf( "Prueba 4 %d \n", ft_isalnum('u'));
	printf( "Prueba P %d \n", ft_isalnum('&'));

	return(0);
} */
