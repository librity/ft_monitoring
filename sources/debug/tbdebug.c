/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tbdebug.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:27:05 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/08/23 22:37:21 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <netmon.h>

/*
** Behaves like printf but with a "DEBUG: " suffix and an endline.
** Only prints if _debug is enabled.
** Uses system's printf with flockfile/funlockfile so it's thread safe.
*/
void	tbdebug(bool _debug, const char *format, ...)
{
	va_list	ap;

	if (!_debug)
		return ;
	flockfile(stdout);
	fprintf(stdout, "%sDEBUG:%s\t", YB, RC);
	va_start(ap, format);
	vfprintf(stdout, format, ap);
	fprintf(stdout, "\n");
	va_end(ap);
	funlockfile(stdout);
}
