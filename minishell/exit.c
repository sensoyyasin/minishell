/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:45:52 by ysensoy           #+#    #+#             */
/*   Updated: 2022/10/13 16:45:53 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int ft_exit(int i)
{
	if (i == 1)
		exit(EXIT_SUCCESS);
	else
		exit(EXIT_FAILURE);
	return(1);
}
