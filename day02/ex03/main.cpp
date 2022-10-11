/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:59:56 by abayar            #+#    #+#             */
/*   Updated: 2022/10/12 00:51:50 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Point.hpp"
#include <iostream>

int main( void ) {
    const Point a(0.0 , 0.0);
    const Point b(10.0 , 30.0);
    const Point c(20.0 , 0.0);
    const Point p(4.0 , 1.0);
    
    std::cout << "a  :->> " << a.getx() << " " << a.gety() << std::endl;
    std::cout << "b  :->> " << b.getx() << " " << b.gety() << std::endl;
    std::cout << "c  :->> " << c.getx() << " " << c.gety() << std::endl;
    std::cout << "p  :->> " << p.getx() << " " << p.gety() << std::endl;
    std::cout << (bsp(a, b, c, p) ? "True" : "False") << std::endl;
    
    return 0;
}