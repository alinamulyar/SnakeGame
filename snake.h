#pragma once
#include "food.h"
#include "direction.h"
#include "point.h"
#include <vector>


class Snake
{
	bool life;
	std::vector<Point> segments; // ������ ���������
	int nrsegments;

public:
	Snake(); //����������� �� ���������
	Snake(const Point& _position); //����������� � �����������
	int Move(Direction direction);
	int GetLength() const;
	Point GetPosition() const;
	void Eat(const Food& food);


	// ���������
	Snake(const Snake& other); // ����������� �����������
	Snake& operator=(const Snake& other); // �������� ������������
	bool operator==(const Snake& other) const; // �������� ��������� ==
	bool operator!=(const Snake& other) const; // �������� ��������� !=
	friend std::istream& operator>>(std::istream& in, Snake& snake); // �������� �����
	friend std::ostream& operator<<(std::ostream& out, const Snake& snake); // �������� ������

};
