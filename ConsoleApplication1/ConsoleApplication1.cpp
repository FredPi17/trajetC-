// ConsoleApplication1.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Trajet.h"
#include "Distance.h"
#include <iostream>

int main()
{
	
	string toto;
	Trajet t1("Grenoble", "Paris", 800);
	Trajet t2("Marseille", "Grenoble", 250);
	//cout << (t1 > t2) << endl;
	Distance d(t1.getDistance(), t2.getDistance());
	cout << "Trajet 1: " << t1.getDepart() << " -> " << t1.getArrivee() << " -> " << t1.getDistance() << endl;
	cout << "Trajet 2: " << t2.getDepart() << " -> " << t2.getArrivee() << " -> " << t2.getDistance() << endl;
	cout << "La difference de distance entre les deux trajets: " << d.getResult() << endl;
	if ((t1 < t2) == 0) {
		cout << "Le trajet 1 avec: " << t1.getDepart() << " est plus long que le trajet 2. Le trajet fait: " << t1.getDistance() << endl;
	}
	else {
		cout << "Le trajet 2 avec: " << t2.getDepart() << " est plus long que le trajet 1. Le trajet fait: " << t2.getDistance() << endl;
	}
	cout << "Cliquer sur q pour quitter.. " << endl;
	cin >> toto;
	return 0;
}

