#include "przyjaciele.h"
#include <string>

Punkt::Punkt(std::string n, float xx, float yy)
{
	nazwa = n;
	x = xx;
	y = yy;		
}

void Punkt::wczytaj()
{
	std::cout << "Podaj x: "; std::cin >> x;
	std::cout << "Podaj y: "; std::cin >> y;
	std::cout << "Podaj nazwe: "; std::cin >> nazwa;
}

Prostokat::Prostokat(std::string n, float xx, float yy, float s, float w)
{
	nazwa = n;
	x = xx;
	y = yy;
	szerokosc = s;
	wysokosc = w;
}

void Prostokat::wczytaj()
{
	std::cout << "Podaj x lewego dolnego naroznika: "; std::cin >> x;
	std::cout << "Podaj y lewego dolnego naroznika: "; std::cin >> y;
	std::cout << "Podaj szerokosc: "; std::cin >> szerokosc;
	std::cout << "Podaj wysokosc: "; std::cin >> wysokosc;
	std::cout << "Podaj nazwe prostokata: "; std::cin >> nazwa; 
	
}

void sedzia(Punkt &pkt, Prostokat &p)
{
	if ((pkt.x >= p.x) && (pkt.x <= p.x + p.szerokosc) && (pkt.y >= p.y) && (pkt.y <= p.y + p.wysokosc))
	{
		std::cout << std::endl << "Punkt " << pkt.nazwa << " nalezy do prostokata: " << p.nazwa <<std::endl;
	}
	else std::cout << std::endl << "Punkt " << pkt.nazwa << " nie nalezy do prostokata: " << p.nazwa <<std::endl;
}