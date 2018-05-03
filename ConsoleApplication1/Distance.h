#pragma once
class Distance
{
private:
	float distance1;
	float distance2;
	float result;

public:
	Distance(float distance1, float distance2);
	~Distance();
	float getResult();
};