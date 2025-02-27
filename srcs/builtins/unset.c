/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 02:58:49 by anoteris          #+#    #+#             */
/*   Updated: 2025/01/17 05:29:02 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtins.h"

void	unset(t_cmd *cmd, t_minishell *mini)
{
	int	i ;

	i = 0 ;
	while (cmd->cmd_args[++i])
		env_lstdel_by_key(&mini->env, cmd->cmd_args[i]);
}
