#pragma once
#include <iostream>
#include <string>

using namespace std;

class Complex
{
private:
    double x;
    double y;
public:
	double GetX() const;
	double GetY() const;

	bool SetX(double value);
	bool SetY(double value);

	Complex();
	Complex(double x, double y);
	Complex(const Complex& other);

	Complex& operator++();       
	Complex operator++(int);

	Complex& operator--();       
	Complex operator--(int);

	Complex& operator=(const Complex& other);

	operator string() const; 

	friend Complex operator+(const Complex& a, const Complex& b);
	friend Complex operator*(const Complex& a, const Complex& b);
	friend bool operator==(const Complex& a, const Complex& b);

	friend ostream& operator<<(ostream& out, const Complex& obj);
	friend istream& operator>>(istream& in, Complex& obj);
};

