/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leakschecker.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 12:28:06 by briffard          #+#    #+#             */
/*   Updated: 2021/12/30 13:13:51 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LEAKSCHECKER_H__
# define __LEAKSCHECKER_H__

/*GLOBALE VARIABLE*/
int allocated_memory;

/*INCLUDES*/
#include <stdlib.h>
#include <stdio.h>

/*PROTYPE*/

void	memory_init(void);
void	*memory_alloc(int const size);
void	memory_free(void *ptr, int const size);
void	memory_check(void);

#endif
