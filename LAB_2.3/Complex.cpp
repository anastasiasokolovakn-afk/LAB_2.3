#include "Complex.h"
#include <iostream>
#include <sstream>

using namespace std;

double Complex::GetX() const {
	return x;
}
double Complex::GetY() const {
	return y;
}

bool Complex::SetX(double value) {
	x = value;
	return true;
}
bool Complex::SetY(double value) {
	y = value;
	return true;
}

Complex::Complex() {
	x = 0;
	y = 0;
}
Complex::Complex(double x, double y) {
	this->x = x;
	this->y = y;
}
Complex::Complex(const Complex& other) {
	x = other.x;
	y = other.y;
}

Complex& Complex::operator++() {
	x++;
	return *this;
}
Complex Complex::operator++(int) {
	Complex temp(*this);
	x++;
	return temp;
}

Complex& Complex::operator--() {
	x--;
	return *this;
}
Complex Complex::operator--(int) {
	Complex temp(*this);
	x--;
	return temp;
}

Complex& Complex::operator=(const Complex& other) {
	if (this != &other) {
		x = other.x;
		y = other.y;
	}
	return *this;
}

Complex::operator string() const {
	stringstream ss;
	ss << x << " + " << y << "i";
	return ss.str();
}

Complex operator+(const Complex& a, const Complex& b) {
	return Complex(a.x + b.x, a.y + b.y);
}
Complex operator*(const Complex& a, const Complex& b) {
	return Complex(a.x * b.x - a.y * b.y, a.x * b.y + a.y * b.x);
}
bool operator==(const Complex& a, const Complex& b) {
	return (a.x == b.x) && (a.y == b.y);
}

ostream& operator<<(ostream& out, const Complex& obj) {
	out << string(obj);
	return out;
}
istream& operator>>(istream& in, Complex& obj) {
	cout << "  Дійсна частина (x): "; in >> obj.x;
	cout << "  Уявна частина (y): "; in >> obj.y;
	return in;
}
