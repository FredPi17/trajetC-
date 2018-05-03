#include "stdafx.h"
#include "Distance.h"
#include <cstdlib>

Distance::Distance(float distance1, float distance2)
{
	this->distance1 = distance1;
	this->distance2 = distance2;
}

Distance::~Distance()
{
}


float Distance::getResult() {
	result = distance1 - distance2;
	if (result < 0) {
		result = result * -1;
	}
	return result;
}
