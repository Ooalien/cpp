/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:23:47 by abayar            #+#    #+#             */
/*   Updated: 2022/09/11 13:46:59 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void	Harl::debug(void)
{
    std::cout << "I love having extra bacon for my "
    "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
    << std::endl;
}

void	Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
    "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << std::endl;
}

void	Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
    "years whereas you started working here since last month."
    << std::endl;
}

void	Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void	Harl::complain( std::string level )
{
    std::string choses[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (choses[i] == level)
        {
            (this->*ptr[i])();
            return ;
        }
    }
    std::cout << "Had la command khassra, chokran beslama." << std::endl;
}
