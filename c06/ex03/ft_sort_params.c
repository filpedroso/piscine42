/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:20:42 by fpedroso          #+#    #+#             */
/*   Updated: 2024/10/07 13:57:27 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (argv[++i])
	{
		j = i;
		while (argv[j])
		{
			if (strcmp (argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
	}
	while (*++argv)
	{
		while (**argv)
		{
			write (1, *argv, 1);
			(*argv)++;
		}
		write (1, "\n", 1);
	}
}

get the word with smallest first letter
if more than 1 word has the same first letter, advance 1 letter in all
repeat
