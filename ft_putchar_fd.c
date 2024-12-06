/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leire <leire@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:53:21 by leire             #+#    #+#             */
/*   Updated: 2024/12/05 19:58:02 by leire            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* 
int main(void) {
    char character = 'H';
    int fd = STDOUT_FILENO; // Standard output file descriptor

    // Print the character 'H' to standard output
    ft_putchar_fd(character, fd);

    // Alternatively, print a string character by character
    char *message = "Hello, world!";
    int i = 0;
    while (message[i]) {
        ft_putchar_fd(message[i], fd);
        i++;
    }

    return 0;
} */