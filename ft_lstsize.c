/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:24:17 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/14 16:24:28 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*current_position;

	count = 1;
	current_position = lst->next;
	while (current_position != NULL)
	{
		count++;
		current_position = current_position->next;
	}
	return (count);
}
