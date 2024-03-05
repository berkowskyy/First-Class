#include "Cuboid.h"
#include <iostream>

using namespace std;

int main() {

    double dlugosc, szerokosc, wysokosc;
    cout << "Programek do prostopadloscianow!\n";
    cout << "Podaj dlugosc: ";
    cin >> dlugosc;
    cout << "Podaj szerokosc: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;
    cout << endl;

    Cuboid c1(0, 0, 0);
    cout << endl;
    c1.setDlugosc(dlugosc);
    c1.setSzerokosc(szerokosc);
    c1.setWysokosc(wysokosc);
    c1.print();

    cout << "\nNowe dane cuboida:" << std::endl;
    c1.setDlugosc(5);
    c1.setSzerokosc(10);
    c1.setWysokosc(20);
    c1.print();
    cout << endl;

    return 0;
}
