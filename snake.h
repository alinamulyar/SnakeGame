#pragma once
#include "food.h"
#include "direction.h"
#include "point.h"


class Snake
{
	bool life;
	Point segments;
	int nrsegments;

public:
	Snake();
	Snake(const Point& _position);
	void Move(Direction direction);
	int GetLength() const;
	Point GetPosition() const;
	void Eat(const Food& food);

};
