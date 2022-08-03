/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   datagram.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 05:09:50 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/03 05:10:06 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <monitoring.h>

int	create_datagram_socket(void)
{
	int	sockfd;

	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	return (sockfd);
}
