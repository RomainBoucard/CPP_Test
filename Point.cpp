/*
 * Point.cpp
 *
 *  Created on: 07 dec. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */


#include "Point.hpp"

template<typename T>
Point<T>::Point(T x, T y){
    this->x = x;
    this->y = y;
}

template<typename T>
Point<T>::Point(void){
    this->y = (T)0;
    this->x = (T)0;
}

template<typename T>
T Point<T>::getX() const{
    return this->x;
}

template<typename T>
void Point<T>::setX(T x){
    this->x = x;
}

template<typename T>
T Point<T>::getY() const{
    return this->y;
}

template<typename T>
void Point<T>::setY(T y){
    this->y = y;
}

/*ostream& operator<<(ostream& os, const Point& Point){
	os << "Coordonnees :\n" << "x : " << Point.x << "  y : " << Point.y << endl;
	return os;
}*/