/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/30 17:46:01 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/07/09 18:48:35 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	negative;
	int	answer;

	i = 0;
	answer = 0;
	negative = 1;
	while (str[i] && (str[i] == '\f' || str[i] == '\r' || str[i] == ' ' ||
			str[i] == '\t' || str[i] == '\v' || str[i] == '\n'))
		i++;
	if (str[i] == '\e' || ((str[i] < '0' || str[i] > '9')
		&& (str[i] != '+' && str[i] != '-')))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			negative = -1;
		else if (str[i] >= '0' && str[i] <= '9')
			answer = answer * 10 + (str[i] - '0');
		if (str[i + 1] < '0' || str[i + 1] > '9')
			return (negative * answer);
		i++;
	}
	return (0);
}
