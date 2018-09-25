/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 15:13:32 by seli              #+#    #+#             */
/*   Updated: 2018/09/25 15:25:21 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base_check(char *str);
void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	long	n;
	long	divisor;

	n = (long)nbr;
	base_size = ft_base_check(base);
	divisor = base_size;
	if (base <= 1)
		return ;
	if (n < 0)
		ft_putchar('-');
	n = n < 0 ? -n : n;
	while (divisor < n)
		divisor *= base_size;
	while (divisor != base_size)
	{
		divisor /= base_size;
		ft_putchar((n / divisor) % divisor + '0');
	}
	ft_putchar(n % divisor + '0');
}

int		ft_base_check(char *str)
{
	int		len;
	char	*head;

	len = 0;
	while (*str)
	{
		head = str;
		if (*str == '+' || *str == '-')
			return (0);
		while (*++head)
		{
			if (*head == *str)
				return (0);
		}
		len++;
		str++;
	}
	return (len);
}