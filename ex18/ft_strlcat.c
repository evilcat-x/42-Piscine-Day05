/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 00:45:47 by seli              #+#    #+#             */
/*   Updated: 2018/09/25 01:11:34 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*head;
	int		dstlen;
	int		max;

	dstlen = 0;
	dstlen = ft_strlen(dest);
	head = dest;
	max = (int)size - dstlen - 1;
	while (*head)
	{
		head++;
		max--;
	}
	while (*src && max > 0)
	{
		*head++ = *src++;
		max--;
	}
	if (!(size == 0 || dstlen > (int)size))
		*head = 0;
	return (dest);
}

int				ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
