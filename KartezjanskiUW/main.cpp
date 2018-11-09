#include "przyjaciele.h"

int main()
{
	Punkt pkt1("A", 3, 15);
	pkt1.wczytaj();

	Prostokat p1("Prostokat", 0, 0, 6, 4);
	 p1.wczytaj();

	sedzia(pkt1, p1);
	system("Pause");
	return 0;
}