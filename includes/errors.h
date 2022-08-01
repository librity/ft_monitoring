/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 02:27:26 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/07/31 23:57:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# define GENERIC_ERR "no no bad bad bad.\n"

/******************************************************************************\
 * TTY
\******************************************************************************/

# define TTY_EMPTY_ATTR_ERR "Original tty attributes are empty.\n"
# define TTY_GET_ATTR_ERR "Unable to get original tty attributes.\n"
# define TTY_SET_ATTR_ERR "Unable to set raw mode tty attributes.\n"
# define TTY_RESTORE_ATTR_ERR "Unable to restore original tty attributes.\n"

# define READ_KEY_ERR "Unable to read next input key from STDIN_FILENO.\n"

/******************************************************************************\
 * FILES
\******************************************************************************/

# define FILE_CREATE_ERR "Unable to create necessary file.\n"
# define FILE_OPEN_ERR "Unable to open necessary file.\n"
# define FD_DOUBLE_CLOSE_ERR "Closing a closed file descriptor.\n"
# define FD_CLOSE_ERR "Unable to close necessary file descriptor.\n"

/******************************************************************************\
 * FLAGS
\******************************************************************************/

# define FILE_FLAG_NULL_PATH_ERR "File flags must be followed by \
a file path argument.\n"
# define EQUAL_FILE_PATHS_ERR "Config and log file paths must be different.\n"
# define BAD_FLAGS_ERR "Invalid flag or flags. \
Run program with --help for flags and usage.\n"

/******************************************************************************\
 * CONFILE FILE
\******************************************************************************/

# define DOUBLE_OPEN_CONFIG_ERR "Config file descriptor already open.\n"
# define CONFIG_READ_ERR "Couldn't read config file.\n"

/******************************************************************************\
 * LOG FILE
\******************************************************************************/

# define DOUBLE_OPEN_LOG_ERR "Log file descriptor already open.\n"
# define LOG_READ_ERR "Couldn't read log file.\n"

/******************************************************************************\
 * CONFIG
\******************************************************************************/

# define CONFIG_PROTOCOL_ERR "Invalid monitoring protocol in config file.\n"

/******************************************************************************\
 * IP
\******************************************************************************/

# define IPV4_VALIDATION_ERR "Error validating IPv4 address with inet_pton.\n"
# define IPV6_VALIDATION_ERR "Error validating IPv6 address with inet_pton.\n"

/******************************************************************************\
 * CONFIG VALIDATORS
\******************************************************************************/

# define HTTP_FIELD_COUNT_ERR "HTTP config must have \
six tab-separated fields.\n"
# define HTTP_METHOD_ERR "Invalid HTTP request method.\n\
Valid methods: https://developer.mozilla.org/en-US/docs/Web/HTTP/Methods\n"
# define HTTP_CODE_ERR "Invalid HTTP response status code.\n\
Valid codes: https://developer.mozilla.org/en-US/docs/Web/HTTP/Status\n"
# define HTTP_FREQUENCY_ERR "Invalid HTTP monitoring frequency.\n\
Frequency must be a whole number greater than zero, \
representing the interval between requests in seconds.\n"

# define PING_FIELD_COUNT_ERR "Ping config must have \
four tab-separated fields.\n"
# define PING_FREQUENCY_ERR "Invalid Ping monitoring frequency.\n\
Frequency must be a whole number greater than zero, \
representing the interval between requests in seconds.\n"

# define DNS_FIELD_COUNT_ERR "DNS config must have \
four tab-separated fields.\n"
# define DNS_FREQUENCY_ERR "Invalid DNS monitoring frequency.\n\
Frequency must be a whole number greater than zero, \
representing the interval between requests in seconds.\n"
# define DNS_SERVER_ADDRESS_ERR "Invalid DNS server IPv4 address.\n"

#endif
