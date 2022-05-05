#include "vector.h"
#include "circle.h"
#include <iostream>
#include "complex.h"
using namespace std;


int main()
{
	Complex complex = { 17, 4.2 };
	cout << complex.GetRe() << " " << complex.GetIm() << endl;

	Vector vector = { 7, -18 };
	cout << vector.GetX() << " " << vector.GetY() << endl;

	Circle circle = { 32.4 };
	cout << circle.GetRadius() << endl;

	return 0;
}