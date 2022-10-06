/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:36:20 by abayar            #+#    #+#             */
/*   Updated: 2022/10/04 12:36:21 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public :
        std::string ideas[100];
        Brain( void );
        Brain(const Brain &other);
        ~Brain( void );
        Brain   &operator=(const Brain &other);
} ;

#endif
