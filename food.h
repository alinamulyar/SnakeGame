#pragma once
#include "point.h"

class Food
{
	Point _position;

public:
	Food();
	Food(const Point& position);
	Point GetPosition() const;
	
};