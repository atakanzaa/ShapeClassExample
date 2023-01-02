#pragma once
#include <iostream>
using namespace std;
#define pi 3.14159265358979


class Shape {
private:
	double shapeArea;
	double shapeCircumference;
public:
	double getArea()const {
		return shapeArea;
	}
	double getCircumF()const {
		return shapeCircumference;
	}
	void setArea(double shape_area) {
		shapeArea = shape_area;
	}
	void setCircumF(double c_fr) {
		shapeCircumference = c_fr;
	}
	virtual void calculateArea() = 0;
	virtual void calculatePerimeter() = 0;
	virtual void display() = 0;

};
class Circle:public Shape {
private:
	double radius;
public:
	Circle(double r) {
		radius = r;
	}
	void calculateArea() {
		double area = pi * (radius * radius);
		setArea(area);
		
	}
	void calculatePerimeter() {
		double perimeter = 2 * pi * radius;
		setCircumF(perimeter);
	}
	void display() {
		cout << "Circle's Area is :" << getArea() << endl;
		cout << "Cirsle's Perimeter is :" << getCircumF() << endl;
	}


};
class Rectangle :public Shape {
private:
	double width, height;
public:
	Rectangle(double w, double h) {
		width = w;
		height = h;
	}
	void calculateArea() {
		double RectArea = width * height;
		setArea(RectArea);
	}
	void calculatePerimeter() {
		double RectPerimeter = 2 * (width + height);
		setCircumF(RectPerimeter);
	}
	void display() {
		cout << "Rectangle's Area is :" << getArea() << endl;
		cout << "Rectange's Perimeter is :" << getCircumF() << endl;
	}

};
	
