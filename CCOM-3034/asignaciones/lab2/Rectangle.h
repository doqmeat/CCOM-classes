// Desteny Hernandez
// 401-23-3159
// CCOM 303 - Lab 02

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <iostream>
#include <cmath>

using namespace std;

class Rectangle
{
private:
	int x0, y0;
	int x1, y1;

public:
	Rectangle();
	Rectangle(int xx0, int yy0, int xx1, int yy1);
	int area() const;
	int perimeter() const;
	bool operator==(const Rectangle &r) const;
	bool operator<(const Rectangle &r) const;
	Rectangle operator+(const Rectangle &r) const;
	void scale(int factor);
	string toString() const;
};

#endif