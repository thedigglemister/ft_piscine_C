/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:57:38 by biremong          #+#    #+#             */
/*   Updated: 2016/11/01 15:19:21 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_low_alpha(char c);

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_low_alpha(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		is_low_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
