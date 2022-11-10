/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:28:33 by abayar            #+#    #+#             */
/*   Updated: 2022/11/10 12:05:50 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(Dog &x);
        virtual ~Dog(void);
        virtual void    makeSound(void) const;
        Dog &operator=(Dog const &x);
}  ;



#endif
