/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:14:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/05 14:29:49 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <monitoring.h>

t_tpcontrol	*tpc(void)
{
	static t_tpcontrol	__tp_control_instance;

	return (&__tp_control_instance);
}

void	initialize_thread_pool_control(void)
{
	tpc()->workers_count = DEFAULT_WORKERS_COUNT;
}
