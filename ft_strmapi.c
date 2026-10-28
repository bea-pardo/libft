/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpardo-l <bpardo-l@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:20:00 by bpardo-l          #+#    #+#             */
/*   Updated: 2026/10/28 17:34:56 by bpardo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*result_str;

	if (!s || !f)
		return (NULL);
	result_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result_str)
		return (NULL);
	index = 0;
	while (s[index])
	{
		result_str[index] = f(index, s[index]);
		index++;
	}
	result_str[index] = '\0';
	return (result_str);
}
