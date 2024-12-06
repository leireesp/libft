/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leire <leire@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:44:15 by leire             #+#    #+#             */
/*   Updated: 2024/12/05 18:08:18 by leire            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/*
int main(void) {
    const char *str = "Hello, world!";
    unsigned int start = 7; // Start at index 7 (world)
    size_t len = 5;        // Extract 5 characters

    char *substr = ft_substr(str, start, len);

    if (substr) {
        printf("Substring: %s\n", substr);
        free(substr); // Important: Free the allocated memory
    } else {
        printf("Error: Substring allocation failed.\n");
    }

    return (0);
} */