/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:28:31 by abayar            #+#    #+#             */
/*   Updated: 2022/11/10 12:45:52 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat(void);
        Cat(Cat &x);
        virtual ~Cat(void);
        virtual void    makeSound(void) const;
        virtual Brain *GetBrain() const;
        virtual void setBrain(Brain * br);
        Cat		&operator=( Cat const &cat );
    private:
        Brain   *br;
}  ;



#endif
