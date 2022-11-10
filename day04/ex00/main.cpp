/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:41:17 by abayar            #+#    #+#             */
/*   Updated: 2022/11/10 12:18:04 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const WrongAnimal* meta2 = new WrongAnimal();
    const Animal* i = new Cat();
    const WrongAnimal* i2 = new WrongCat();
    const Animal* j = new Dog();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    i2->makeSound();
    j->makeSound();
    meta->makeSound();
    meta2->makeSound();
    delete i;
    delete i2;
    delete j;
    delete meta;
    delete meta2;

    return 0;
}