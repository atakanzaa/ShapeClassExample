#include "Shape.h"

int main() {
	Shape* ptr1;
	Shape* ptr2;
	Circle circle1(5);
	Rectangle rect1(3, 4);

	ptr1 = &rect1;
	ptr1->calculateArea();
	ptr1->calculatePerimeter();
	ptr1->display(); 

	ptr2 = &circle1;
	ptr2->calculateArea();
	ptr2->calculatePerimeter();
	ptr2->display();

}