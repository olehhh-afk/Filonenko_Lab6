#include <iostream>
     using namespace std;
     int main() {
     float a, b;
     cout << "Введіть значення для a та b: ";
     cin >> a >> b;
     float* ptrA = &a, *ptrB = &b;
     float temp = *ptrA;
     *ptrA = *ptrB;
     *ptrB = temp;
     cout << "Після обміну: a = " << a << ", b = " << b << endl;
     return 0;
     }
