/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylewis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:22:13 by sylewis           #+#    #+#             */
/*   Updated: 2019/04/07 15:33:07 by sylewis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (s1 == '\0' && s2 == '\0')
		return (1);
	if ((s1 == '\0' && s2 != '\0') || (s1 != '\0' && s2 == '\0'))
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	else
		return (0);
}
