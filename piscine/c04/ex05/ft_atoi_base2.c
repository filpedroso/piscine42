/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:19:36 by fpedroso          #+#    #+#             */
/*   Updated: 2024/10/03 13:53:11 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_atoi(char *str);
unsigned int	ft_strlen(char *base);
int				is_valid_base(char *base);
int				calculate_sign(int sign, char c);
void			ft_putnbr_base(int nbr, char *base);
int				calculate_result(int result, char *str);
void			deliciously_recursive_2(unsigned int nbr, char *base, unsigned int base_len);

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;

	if (!is_valid_base(base))
		return (0);
	nbr = ft_atoi(base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	positive_nbr;

	if (!is_valid_base(base))
		return ;
	if (nbr < 0)
	{
		positive_nbr = -((unsigned int)nbr);
		write (1, "-", 1);
	}
	else
		positive_nbr = (unsigned int)nbr;
	base_len = ft_strlen(base);
	deliciously_recursive(positive_nbr, base, base_len);
}

void	deliciously_recursive(unsigned int nbr, char *base, unsigned int base_len)
{
	if (nbr >= base_len)
		deliciously_recursive(nbr / base_len, base, base_len);
	write(1, &base[nbr % base_len], 1);
}

unsigned int	ft_strlen(char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}
int	is_valid_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int i;

	result = 0;
	i = -1;
	sign = 1;
	while (str[++i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = calculate_result(result, &str[i]);
			break ;
		}
		else if (str[i] == '-' || str[i] == '+')
		{
			sign = calculate_sign(sign, str[i]);
		}
		else if (str[i] == ' ')
			continue;
	}
	return (result * sign);
}

int	calculate_sign(int sign, char c)
{
	if (c == '-')
	{
		sign = -sign;
	}
	return (sign);
}

int	calculate_result(int result, char *str)
{
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}