/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:11:29 by abayar            #+#    #+#             */
/*   Updated: 2022/10/11 21:06:17 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{

}

Point::Point(float x, float y) : x(x) , y(y)
{

}

Point::Point(const Point &o) : x(o.x) , y(o.y)
{
    
}

Point &Point::operator=(const Point &o)
{
    Point &r = *(new Point(Point(o.getx().toFloat(), o.gety().toFloat())));
    return r;
}

Fixed const Point::getx() const
{
    return x;
}

Fixed const Point::gety() const
{
    return y;
}

Point::~Point()
{
    
}

std::ostream &operator<<(std::ostream &os, const Point &a)
{
	os << "x->" << a.getx() << " y->" << a.gety();
	return os;
}
