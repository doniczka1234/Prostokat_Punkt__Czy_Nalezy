#ifndef przyjaciele_h
#define przyjaciele_h
#include <iostream>


class Prostokat;

class Punkt
{
	std::string nazwa;
	float x, y;

public:
	friend void sedzia(Punkt &pkt, Prostokat &p);
	Punkt(std::string = "A", float = 0, float = 0);
	void wczytaj();

};

class Prostokat
{
	std::string nazwa;
	float x, y, szerokosc, wysokosc;

public:
	friend void sedzia(Punkt &pkt, Prostokat &p);
	Prostokat(std::string = "brak", float = 0, float = 0, float = 1, float = 1);
	void wczytaj();
};


#endif
