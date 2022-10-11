/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:05:28 by abayar            #+#    #+#             */
/*   Updated: 2022/10/11 21:30:39 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point const a, Point const b, Point const c)
{
    // the aria of triangle Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By) 
   return abs(((a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety()) / 2)).toFloat());
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
    
    float A = area (a, b, c);

    float A1 = area (point, b, c);

    float A2 = area (a, point, c);

    float A3 = area (a, b, point);

    std::cout << a << " " << b << " " << c << " " << point << std::endl;
    std::cout << A << " " << A1 << " " << A2 << " " << A3 << std::endl;
    
    return (A == A1 + A2 + A3);
   
}
