/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohanchak <ohanchak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:34:29 by ohanchak          #+#    #+#             */
/*   Updated: 2022/10/27 16:16:30 by ohanchak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    char    *result;
    if (size && size * count / size == count)
    {
        result = malloc(size * count);
        if (!result)
            return (NULL);
        while (count-- > 0)
        {
            result[count] = '\0';
        }
        return (result);
    }
    return (NULL);
}