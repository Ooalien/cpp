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
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *t[8];

    for (int i = 0 ; i < 8; i++)
    {
        if ( i < 4)
            t[i] = new Cat();
        else
            t[i] = new Dog();
    }
    for (int i = 0 ; i < 8; i++)
    {
        Brain *brain = t[i]->GetBrain();
        std::string x = ((std::string)"Im happy " + ((t[i]->getType() == "Cat")?(std::string)"Cat":(std::string)"Dog"));
        brain->ideas[0] = x;
        brain->ideas[1] = ((t[i]->getType() == "Cat")?"Meow Meow":"Woof Woof");
        brain->ideas[2] = "I don't bite";
        brain->ideas[3] = "But";
        brain->ideas[4] = "My mom does x'D";
    }
    for (int i = 0 ; i < 8; i++)
    {
        std::cout << " ---------- Animal nbr " << i+1 << " ----------" << std::endl;
        std::cout << t[i]->GetBrain()->ideas[0] << std::endl;
        std::cout << t[i]->GetBrain()->ideas[1] << std::endl;
        std::cout << t[i]->GetBrain()->ideas[2] << std::endl;
        std::cout << t[i]->GetBrain()->ideas[3] << std::endl;
        std::cout << t[i]->GetBrain()->ideas[4] << std::endl;
    }
    for (int i = 0 ; i < 8; i++)
    {
        delete t[i];
    }

    return 0;
}