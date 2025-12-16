#pragma once
#include "circle.h"

Circle getCircle(int radius);
void upgradeCircle(Circle circle); // 값 전달과 참조 전달은 하나만 선언 가능
void upgradeCircle(Circle* circle);
void increaseCircle(Circle& circle);
void readRadius(Circle& circle);
