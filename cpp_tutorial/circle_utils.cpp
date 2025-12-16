#include "circle_utils.h"

Circle getCircle(int radius) {
	return Circle(radius);
}

void upgradeCircle(Circle circle) {
	circle.setRadius(50);
}

void upgradeCircle(Circle* circle) {
	circle->setRadius(50);
}

void increaseCircle(Circle& circle) {
	int radius = circle.getRadius();
	circle.setRadius(radius + 1);
}

void readRadius(Circle& circle) {
	int radius;
	std::cout << "Enter radius: ";
	std::cin >> radius;
	circle.setRadius(radius);
}