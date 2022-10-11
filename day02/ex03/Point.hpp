/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayar <abayar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:11:32 by abayar            #+#    #+#             */
/*   Updated: 2022/10/11 18:24:24 by abayar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private :
    	Fixed const x;
    	Fixed const y;
	public :
		Point();
		Point(float x, float y);
		Point(const Point &o);
		Point &operator=(const Point &o);
		Fixed const	getx() const ;
		Fixed const	gety() const ;
		~Point();
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &os, const Point &a);

#endif