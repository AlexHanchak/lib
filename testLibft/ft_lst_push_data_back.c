/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_data_back.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:24:55 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:24:56 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_data_back(t_list **alst,
	void const *content, size_t content_size)
{
	t_list	*new;

	new = ft_lstnew(content, content_size);
	if (!new)
		return ;
	ft_lst_add_back(alst, new);
}
