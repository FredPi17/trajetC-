#pragma once

#include <string>
using namespace std;

class Trajet
{
private:
	string depart;
	string arrivee;
	float distance;
	float result;

public:
	Trajet();
	Trajet(string depart, string arrivee, float distance);
	~Trajet();
	string getArrivee();
	string getDepart();
	float getDistance();
	void setArrivee(string arriv�e_t);
	void setDepart(string d�part_t);
	void setDistance(float distance_t);
	bool operator<(const Trajet &p) const;
};