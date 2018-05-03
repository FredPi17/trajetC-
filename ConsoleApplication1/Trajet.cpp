#include "stdafx.h"
#include "Trajet.h"
#include <string>

using namespace std;

Trajet::Trajet(){}

Trajet::Trajet(string depart, string arrivee, float distance)
{
	this->depart = depart;
	this->arrivee = arrivee;
	this->distance = distance;
}


Trajet::~Trajet()
{
}

string Trajet::getArrivee() {
	return arrivee;
}
string Trajet::getDepart() {
	return depart;
}
float Trajet::getDistance() {
	return distance;
}
void Trajet::setArrivee(string arrivée_t) 
{
	arrivee = arrivée_t;
}
void Trajet::setDepart(string départ_t)
{
	depart = départ_t;
}
void Trajet::setDistance(float distance_t) 
{
	distance = distance_t;
}

bool Trajet::operator<(const Trajet & p) const
{
	return (distance < p.distance);
}
