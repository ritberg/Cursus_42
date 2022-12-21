/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:18:03 by mmakarov          #+#    #+#             */
/*   Updated: 2022/12/21 15:48:47 by mmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	j;
	int	**read_input;

	err_checker(argc, argv);
	read_input = malloc(sizeof(int) * (argc - 1));
	j = 1;
	while (j < argc)
	{
		read_input[j - 1] = malloc(sizeof(**int) * ft_strlen(argv[j]));
		ft_atoi(argv[j]);
		ft_strcpy(read_input[j - 1], argv[j])
		j++;
	}
	new_index(read_input[])
	return (0);
}
