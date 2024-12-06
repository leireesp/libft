/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leire <leire@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:12:09 by leire             #+#    #+#             */
/*   Updated: 2024/12/05 14:19:39 by leire            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	p = malloc (count * size);
	if (!p)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		((char *)p)[i] = 0;
		i++;
	}
	return (p);
}
/* int main()
{
    int *array;
    size_t count = 10; // Number of elements
    size_t i = 0;
    
    // Allocate memory for an array of 10 integers
    array = (int *)ft_calloc(count, sizeof(int));
    if (!array)
    {
        printf("Memory allocation failed\n");
        return 1; // Return with error code
    }
    
    // Use a while loop to print the array elements
    while (i < count)
    {
        printf("array[%zu] = %d\n", i, array[i]);
        i++;
    }
    
    // Free the allocated memory
    free(array);
    
    return 0;
} */