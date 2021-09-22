// Lab_03_1.cpp
// Нюл Василь
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 7



#include <iostream>
#include <cmath>

using namespace std;
 int main()
{
     double x;  // вхідний параметр
     double y;  // результат обчислення виразу
     double A;  // проміжний результат - функціонально стала частина виразу
     double B = 0.0;  // проміжний результат - функціонально змінна частина виразу
     
     cout<<"x=";cin >>x;
     A = x*x*sin(x/2);
     
    if (x<=-5)
        B = atan(exp(x));
     
    if (-5<x && x<=0)
        B = 1+x*x*x/4;
     
    if (x>0)
        B = log(abs(x))-x/5;
     
     y = A+B;
     
     cout << endl;
     
     cout << "1) y = " << y << endl;
}

