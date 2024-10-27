/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:15:07 by fpedroso          #+#    #+#             */
/*   Updated: 2024/10/02 12:12:46 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	calculate_sign(int sign, char c);
int	calculate_result(int result, char *str);

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

int main() 
{
    char str1[] = "   -++42";
    char str2[] = "  +--56";
    char str3[] = "   123";
    char str4[] = "   +42xyz";

    printf("%d\n", ft_atoi(str1)); // Output: -42
    printf("%d\n", ft_atoi(str2)); // Output: 56
    printf("%d\n", ft_atoi(str3)); // Output: 123
    printf("%d\n", ft_atoi(str4)); // Output: 42

    return 0;
}