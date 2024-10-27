/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:13:12 by filpedroso        #+#    #+#             */
/*   Updated: 2024/10/03 12:29:38 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*int main()
{
	int conta = ft_strlen("Aeroporto da Jujuba na Dongolandia");
	printf("Quantidade de letras: %i", conta);
}*/