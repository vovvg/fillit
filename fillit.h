/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstacksp <bstacksp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:02:35 by bstacksp          #+#    #+#             */
/*   Updated: 2019/11/06 10:19:11 by bstacksp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include "./libft/libft.h"
#include <fcntl.h>

typedef struct		s_flist
{
	char			*tmp;

	struct s_flist	*next;

}					t_flist;

t_flist		*ft_read_file(int fd);

#endif
