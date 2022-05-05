#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
	Complex() : num_re(0.0), num_im(0.0) {}
	Complex(double re, double im) : num_re(re), num_im(im) {}

	void Set(double re, double im) { num_re = re; num_im = im; }
	double GetRe() { return num_re; }
	double GetIm() { return num_im; }

	friend Complex operator+ (const Complex& c1, const Complex& c2);
	friend Complex operator- (const Complex& c1, const Complex& c2);
	friend Complex operator* (const Complex& c1, const Complex& c2);
	friend Complex operator/ (const Complex& c1, const Complex& c2);

private:
	double num_re, num_im;
};

Complex operator+ (const Complex& c1, const Complex& c2);
Complex operator- (const Complex& c1, const Complex& c2);
Complex operator* (const Complex& c1, const Complex& c2);
Complex operator/ (const Complex& c1, const Complex& c2);

#endif