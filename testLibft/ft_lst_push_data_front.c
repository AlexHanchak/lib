/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_data_front.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lex <lex@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:25:02 by lex               #+#    #+#             */
/*   Updated: 2022/10/15 14:25:03 by lex              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lst_push_data_front(t_list **alst,
	void const *content, size_t content_size)
{
	t_list	*new;

	if (!(*alst))
		return ;
	new = ft_lstnew(content, content_size);
	if (!new)
		return ;
	ft_lstadd(alst, new);
}
