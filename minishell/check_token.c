/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_token.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:12:41 by mtemel            #+#    #+#             */
/*   Updated: 2022/12/16 20:21:22 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	check_token()
{
	t_list *iter;

	iter = shell->arg;
	while (iter != NULL)
	{
		if (ft_strcmp(iter->content, ">>"))
		{
			single_right_redirection();
			return (1);
		}
		iter = iter->next;
	}
	return (0);
}
