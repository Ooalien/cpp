/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:59:38 by abayar            #+#    #+#             */
/*   Updated: 2022/11/10 12:46:52 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
    protected:
        std::string type;
        
    public:
        Animal();
        Animal(Animal &x);
        virtual ~Animal();
        Animal &operator=(Animal const &x);

        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
        virtual Brain *GetBrain() const = 0;

}  ;



#endif
