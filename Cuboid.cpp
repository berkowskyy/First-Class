#include "Cuboid.h"
#include <iostream>

using namespace std;


Cuboid::Cuboid(double d, double sz, double w)
{
    dlugosc = d;
    szerokosc - sz;
    wysokosc = w;

    cout << "KONTRUKTOR PROSTOPADLOSCIANOW \n";

}

Cuboid::~Cuboid() 
{
    cout << "DESTRUKTOR PROSTOPADLOSCIANOW. Kiedys na pewno sie przydam.\n";
}

void Cuboid::setDlugosc(double newDlugosc) {

	dlugosc = newDlugosc;
}

void Cuboid::setSzerokosc(double newSzerokosc) {
    szerokosc = newSzerokosc;
}

void Cuboid::setWysokosc(double newWysokosc) {
    wysokosc = newWysokosc;
}

double Cuboid::getDlugosc() {

    return dlugosc;
}

double Cuboid::getSzerokosc() {

    return szerokosc;
}

double Cuboid::getWysokosc() {

    return wysokosc;
}

double Cuboid::Objetosc() {
    return dlugosc * szerokosc * wysokosc;
}

double Cuboid::Powierzchnia() {
    return 2 * ((dlugosc * szerokosc) + (dlugosc * wysokosc) + (szerokosc * wysokosc));
}

void Cuboid::print() {
    std::cout << "Prostopadloscian - wymiary: dlugosc = " << dlugosc << ", szerokosc = " << szerokosc << ", wysokosc = " << wysokosc << ", objetosc = " << Objetosc() << ", pole powierzchni = " << Powierzchnia() << std::endl;
}