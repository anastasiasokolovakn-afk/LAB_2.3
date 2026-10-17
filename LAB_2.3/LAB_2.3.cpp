#include <iostream>
#include <Windows.h>
#include "Complex.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Complex c1;                     
    Complex c2(3.5, 2.5);           
    Complex c3(c2);                
    Complex* c4 = new Complex(1.0, -4.0); 

    cout << "c1 (default): " << c1 << endl;
    cout << "c2 (init):    " << c2 << endl;
    cout << "c3 (copy):    " << c3 << endl;
    cout << "c4 (dynamic): " << *c4 << endl;

    Complex staticArr[2] = { Complex(1.1, 2.2), Complex(3.3, 4.4) };
    cout << "Статичний масив:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "  staticArr[" << i << "] = " << staticArr[i] << endl;
    }

    Complex* dynamicArr = new Complex[2];
    dynamicArr[0] = Complex(5.0, 6.0);
    dynamicArr[1] = Complex(7.0, 8.0);
    cout << "Динамічний масив:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "  dynamicArr[" << i << "] = " << dynamicArr[i] << endl;
    }
    delete[] dynamicArr;

    Complex a(2.0, 3.0);
    Complex b(4.0, 1.0);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    Complex sum = a + b;
    cout << "Додавання (a + b): " << sum << endl;

    Complex prod = a * b;
    cout << "Множення  (a * b): " << prod << endl;

    cout << "Порівняння (a == b): " << (a == b ? "Рівні" : "Не рівні") << endl;
    Complex aCopy = a;
    cout << "Порівняння (a == aCopy): " << (a == aCopy ? "Рівні" : "Не рівні") << endl;

    cout << "Початкове a: " << a << endl;
    ++a;
    cout << "Після ++a:   " << a << endl;
    a++;
    cout << "Після a++:   " << a << endl;
    --a;
    cout << "Після --a:   " << a << endl;
    a--;
    cout << "Після a--:   " << a << endl;

    Complex userNum;
    cout << "Введіть комплексне число:" << endl;
    cin >> userNum;
    cout << "Ви ввели: " << userNum << endl;

    cout << "sizeof(Complex): " << sizeof(Complex) << " байт" << endl;

    delete c4;
    return 0;
}