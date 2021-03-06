/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:13:30 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/10/25 14:13:31 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int p;

	i = 0;
	p = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			p++;
		i++;
	}
	return (p);
}
