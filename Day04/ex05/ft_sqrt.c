/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 21:40:59 by tamigore          #+#    #+#             */
/*   Updated: 2018/09/06 12:37:38 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int n;

	n = 1;
	if (nb <= 0)
		return (0);
	else if (nb > 2147395600)
		return (0);
	else if (nb == 1)
		return (1);
	while (n <= nb / 2)
	{
		n++;
		if (n * n == nb)
			return (n);
	}
	return (0);
}
