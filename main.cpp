#include <stdio.h>
#include <iostream>
#include "Point.hpp"

using namespace std;

int main() {
   // printf() displays the string inside quotation
   std::cout << "Hello world !\n" << std::endl;

   int a = 3;
   int b = 5;

    Point<int> truc(a,b);
   //Point<int> a(3, 5);
   //cout << a;
   return 0;
}
