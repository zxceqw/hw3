#include "complex.h"

Complex operator+ (const Complex& c1, const Complex& c2)
{
	Complex res(c1.num_re + c2.num_re, c1.num_im + c2.num_im);
	return res;
}

Complex operator- (const Complex& c1, const Complex& c2)
{
	Complex res(c1.num_re - c2.num_re, c1.num_im - c2.num_im);
	return res;
}

Complex operator* (const Complex& c1, const Complex& c2)
{
	Complex res(c1.num_re * c2.num_re - (c1.num_im * c2.num_im), c1.num_re * c2.num_im + c1.num_im * c2.num_re);
	return res;
}

Complex operator/ (const Complex& c1, const Complex& c2)
{
	double z = (c2.num_re * c2.num_re) + (c2.num_im * c2.num_im);
	double re = (c1.num_re * c2.num_re + c1.num_im * c2.num_im) / z;
	double im = (c2.num_re * c1.num_im - c1.num_re * c2.num_im) / z;

	Complex res(re, im);
	return res;
}