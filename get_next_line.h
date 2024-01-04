/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:59:21 by mboumlik          #+#    #+#             */
/*   Updated: 2024/01/04 18:55:56 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef GET_NEXT_LINE_H 
// #define GET_NEXT_LINE_H

// # include <ctype.h>
// # include <stddef.h>
// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>
// # include <strings.h>
// # include <unistd.h>
// # ifndef BUFFER_SIZE
// #  define BUFFER_SIZE 12
// # endif

// char *get_next_line(int fd);
// char	*ft_strjoin(char const *s1, char const *s2);
// void	ft_putstr(char *s);
// char	*ft_strchr(const char *s, int c);
// #endif 

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 03:34:45 by msbai             #+#    #+#             */
/*   Updated: 2023/12/10 23:07:53 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 12
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strjoin1(char *str);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
#endif