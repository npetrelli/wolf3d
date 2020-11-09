/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:16:11 by maxim             #+#    #+#             */
/*   Updated: 2020/07/23 22:16:11 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	if (c != ' ' && c != '\r' && c != '\v' && c != '\f' && c != '\t')
		c = 0;
	return (c);
}
