#include <iostream>
#include "Points.h"

int main()
{
    CartPoint<int> A;
    CartPoint<int> B(3, 0);
    CartPoint<int> C(0, 4);

    std::cout << " A = " << A << "\n B = " << B << "\n C = " << C
        << "\n |AB| = " << A.distance(B) << "\n |BC| = " << B.distance(C) << '\n';

    // Завдання з умови
    std::cout << "Input a point: "; A = ReadPoint<int>(std::cin);
    std::cout << "Input a point: "; B = ReadPoint<int>(std::cin);
    std::cout << "Input a point: "; C = ReadPoint<int>(std::cin);
    double a = A.distance(B);
    double b = B.distance(C);
    double c = C.distance(A);
    double P = a + b + c;
    double p = P * 0.5;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << "\n P = " << P << "\n S = " << S << '\n';
}