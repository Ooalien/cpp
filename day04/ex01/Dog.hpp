/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:28:33 by abayar            #+#    #+#             */
/*   Updated: 2022/11/10 12:22:31 by abayar           ###   ########.fr       */
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
        Dog &operator=(Dog const &x);
        virtual void    makeSound(void) const;
        virtual Brain *GetBrain() const;
        virtual void setBrain(Brain * br);
        
    private:
        Brain   *br;
}  ;



#endif
