#include <stdio.h>
#include <iostream>
#include "Point.hpp"

using namespace std;

int main() {
   // printf() displays the string inside quotation
   std::cout << "Hello world !\n" << std::endl;

    Point<int> truc(5, 8);
   //Point<int> a(3, 5);
   //cout << a;
   return 0;
}