/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leakschecker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briffard <briffard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 11:43:18 by briffard          #+#    #+#             */
/*   Updated: 2021/12/30 13:13:44 by briffard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leakschecker.h"

void	memory_init(void)
{
	allocated_memory = 0;
}

void	*memory_alloc(int const size)
{
	void	*ptr;
	ptr = malloc (size);
	allocated_memory += size;
	/*
	printf("ALLOC : Total of your allocation memory = %d\n", allocated_memory);
	*/
}

void	memory_free(void *ptr, int const size)
{
	printf("INSIDE MEMORYFREE\n");
	free (ptr);
	//ptr = NULL;
	printf("ADRESSEDE PTR APRES FREE : %p\n",ptr);
	allocated_memory -= size;
	/*
	printf("FREE : Total of your allocation memory = %d\n", allocated_memory);
	*/
}

void	memory_check(void)
{
	if (allocated_memory != 0)
	{
			printf("ATTENTION: You have some memory leaks in your program.\n%d octets need to be freed.\n", allocated_memory);
	}
}
