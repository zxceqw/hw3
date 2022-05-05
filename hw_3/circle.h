#pragma once

class Circle
{
public:
	Circle() : ar(0.0) {}
	Circle(double r) : ar(r) {}

	void SetRadius(double r) { ar = r; }
	double GetRadius() { return ar; }

private:
	double ar;
};
