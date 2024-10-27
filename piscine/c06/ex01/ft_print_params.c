/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:31:58 by fpedroso          #+#    #+#             */
/*   Updated: 2024/10/07 10:54:44 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	while (*++argv) // pre increments argv, but checks for *argv existance
	{
		while (**argv)
		{
			write (1, *argv, 1);
			(*argv)++; // pre increments *argv
		}
		write (1, "\n", 1);
	}
	return (0);
}