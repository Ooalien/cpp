/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:41:17 by abayar            #+#    #+#             */
/*   Updated: 2022/10/06 12:04:44 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* j = new Dog();
    Animal* i = new Cat();
    
    Brain *brain = new Brain();
    brain->ideas[0] = "hello .";
    brain->ideas[1] = "my name is brad";
    brain->ideas[2] = "i want to eat";
    brain->ideas[3] = "walk pleaase";
    brain->ideas[4] = "woof woof thanks";

    j->setBrain(brain);
    int x=0;
    while(x < 5)
        std::cout << j->getType() << " -> " << j->GetBrain()->ideas[x++]<<std::endl;
    
    delete brain;
    delete j;
    delete i;
    
    return 0;
}