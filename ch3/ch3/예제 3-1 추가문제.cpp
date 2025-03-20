#include <iostream>
#include <string>
using namespace std;

class Circle {
public:
	int innerRadius;
	int outerRadius;
	double getArea();
	double donut_two();
};
double Circle::getArea() {
	return 3.14 * outerRadius * outerRadius;
}
double Circle::donut_two() {
	return 3.14 * innerRadius * innerRadius;
}

int main() {
	Circle donut;
	donut.innerRadius = 5;
	donut.outerRadius = 10;
	double area = donut.getArea() - donut.donut_two();
	cout << "donut ¸éÀûÀº" << area << endl;
}