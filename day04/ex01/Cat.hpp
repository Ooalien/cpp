/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:28:31 by abayar            #+#    #+#             */
/*   Updated: 2022/11/10 12:22:13 by abayar           ###   ########.fr       */
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
        Cat &operator=(Cat const &x);
        virtual void    makeSound(void) const;
        virtual Brain *GetBrain() const;
        virtual void setBrain(Brain * br);
    private:
        Brain   *br;
}  ;



#endif
