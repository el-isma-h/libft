/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:48:55 by ismael            #+#    #+#             */
/*   Updated: 2023/10/19 17:39:47 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// int main(void)
// {
//     char    test[] = "12345abcABC";
//     int i = 0;

//     while (test[i])
//     {
//         if (ft_isalpha(test[i]))
//             printf("%c is alphabetic\n", test[i]);
//         else
//             printf("%c is not alphabetic\n", test[i]);
//         i++;
//     }
//     return (0);
// }