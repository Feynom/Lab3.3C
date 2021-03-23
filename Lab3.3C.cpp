﻿#include <iostream>
#include "Vector3D.h"

int main()
{
    cout << "Number of elements of class Vector3D : " << Object::Count() << endl;

    Vector3D A;
    cout << "Number of elements of class Vector3D : " << Object::Count() << endl;

    Vector3D B;
    cout << "Number of elements of class Vector3D : " << Object::Count() << endl;

    Vector3D C;
    cout << "Number of elements of class Vector3D : " << Object::Count() << endl;

    cout << "\nVector A" << endl;
    cin >> A;
    cout << A;

    cout << "\nVector B" << endl;
    cin >> B;
    cout << B;

    cout << "\nVector C" << endl;
    cin >> C;
    cout << C;

    cout << "\nA + B = " << endl;
    cout << A + B << endl;

    cout << "\nB + C = " << endl;
    cout << B + C << endl;

    cout << "\nA + C = " << endl;
    cout << A + C << endl;

    cout << "\nA * B = " << A * B << endl;

    cout << "A++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;

    cout << "Size of class is equal to " << sizeof(Vector3D);

    return 0;
}