/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:23:38 by abayar            #+#    #+#             */
/*   Updated: 2022/10/09 11:53:25 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	Sed::replacee( Sed *a )
{
    int i;
    a->index = a->line.find(a->find);
    if (a->index == -1)
        return ;
    a->line.erase(a->index, a->find.length());
    i = a->index;
    replacee(a);
    a->line.insert(i, a->repl);
}