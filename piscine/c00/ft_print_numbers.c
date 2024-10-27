/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:48:26 by fpedroso          #+#    #+#             */
/*   Updated: 2024/09/19 22:59:54 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_numbers(void);

int	main(void)
{
	ft_print_reverse_numbers();
	return (0);
}

void	ft_print_reverse_numbers(void)
{
	char	c;
	int		i;

	i = 0;
	while (i < 10)
	{
		c = i + 48;
		write(1, &c, 1);
		i++;
	}
	return ;
}
