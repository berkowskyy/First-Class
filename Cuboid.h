#ifndef _CUBOID_H_
#define _CUBOID_H_

#include <iostream>

class Cuboid {

public:

	/// <summary>
	/// Konstruktor Klasy Cuboid
	/// </summary>
	/// <param name="d">dlugosc prostopadloscianu</param>
	/// <param name="sz">szerokosc prostopadloscianu</param>
	/// <param name="w">wysokosc prostopadloscianu</param>
	Cuboid(double d, double sz, double w);

	/// <summary>
	/// Destruktor klasy Cuboid
	/// </summary>
	~Cuboid();

	/// <summary>
	/// Ustawianie dlugosci prostopadloscianu
	/// </summary>
	/// <param name="dlugosc">dlugosc prostopadloscianu</param>
	void setDlugosc(double dlugosc);

	/// <summary>
	/// Ustawianie szerokosci prostopadloscianu
	/// </summary>
	/// <param name="szerokosc">szerokosc prostopadloscianu</param>
	void setSzerokosc(double szerokosc);

	/// <summary>
	/// Ustawianie wysokosci prostopadloscianu
	/// </summary>
	/// <param name="wysokosc">wysokosc prostopadloscianu</param>
	void setWysokosc(double wysokosc);

	/// <summary>
	/// Pobieranie dlugosci prostopadloscianu
	/// </summary>
	/// <returns>Zwraca dlugosc prostopadloscianu</returns>
	double getDlugosc();

	/// <summary>
	/// Pobieranie szerokosci prostopadloscianu
	/// </summary>
	/// <returns>Zwraca szerokosc prostopadloscianu</returns>
	double getSzerokosc();

	/// <summary>
	/// Pobieranie wysokosci prostopadloscianu
	/// </summary>
	/// <returns>Zwraca wysokosc prostopadloscianu</returns>
	double getWysokosc();

	/// <summary>
	/// Obliczanie objetosci prostopadloscianu
	/// </summary>
	/// <returns>Zwraca objetosc prostopadloscianu</returns>
	double Objetosc();

	/// <summary>
	/// Obliczanie powierzchni prostopadloscianu
	/// </summary>
	/// <returns>Zwraca pole calkowite powierzchni prostopadloscianu</returns>
	double Powierzchnia();

	/// <summary>
	/// Wypisanie danych prostopadloscianu
	/// </summary>
	void print();

private:
	double dlugosc;
	double szerokosc;
	double wysokosc;

};

#endif // _CUBOID_H_