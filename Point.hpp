/*
 * Point.hpp
 *
 *  Created on: 07 dec. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */

#ifndef POINT_H_
#define POINT_H_

#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <map>

using namespace std;

template<typename T>
class Point {
protected:
    T x;
    T y;
public:
	Point(T _x, T _y);
    Point(void);
    T getX() const;
    void setX(T x);
    T getY() const;
    void setY(T x);

	//friend ostream& operator<<(ostream& os, const Point& Point);
};

#endif /* POINT_H_ */
