/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:48:37 by abayar            #+#    #+#             */
/*   Updated: 2022/09/11 17:30:17 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void	Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my "
    "7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!"
    << std::endl;
}

void	Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put"
    "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << std::endl;
}

void	Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for"
    "years whereas you started working here since last month."
    << std::endl;
}

void	Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
    int i;
    std::string choses[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (i = 0; i < 4; i++)
    {
        if (choses[i] == level)
            break;
    }
    switch (i)
    {
        case 0:
            (this->*ptr[0])();
        case 1:
            (this->*ptr[1])();
        case 2:
            (this->*ptr[2])();
        case 3:
            (this->*ptr[3])();
            break;
        default:
            std::cout << "Had la command khassra, chokran beslama." << std::endl;
            break;
    }
    
}
