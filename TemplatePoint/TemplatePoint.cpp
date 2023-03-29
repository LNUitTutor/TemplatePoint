#include <iostream>
#include "Points.h"

int main()
{
    CartPoint<int> A;
    CartPoint<int> B(3, 0);
    CartPoint<int> C(0, 4);

    std::cout << " A = " << A << "\n B = " << B << "\n C = " << C
        << "\n |AB| = " << A.distance(B) << "\n |BC| = " << B.distance(C) << '\n';
}