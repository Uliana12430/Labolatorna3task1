#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c;
    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;
    cout << "Введіть значення c: ";
    cin >> c;

    
    if (b - a <= 0) {
        cout << "Помилка: b - a повинно бути більше за нуль для кореня." << endl;
        return 1;
    }

  
    double vuraz1 = sqrt(b / sqrt(b - a)) / (b * b + a * b * c);
    double dodatoc = abs(b + a);
    double f = vuraz1 + dodatoc;

  
    cout << "Значення f: " << f << endl;

    return 0;
}
