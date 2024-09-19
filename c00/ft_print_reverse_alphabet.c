/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:48:26 by fpedroso          #+#    #+#             */
/*   Updated: 2024/09/19 22:17:32 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		i;

	i = 26;
	while (i >= 0)
	{
		c = i + 97;
		write(1, &c, 1);
		i--;
	}
	return ;
}
