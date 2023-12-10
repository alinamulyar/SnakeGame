#pragma once
#include "food.h"
#include "direction.h"
#include "point.h"
#include <vector>


class Snake
{
	bool life;
	std::vector<Point> segments; // Вектор сегментов
	int nrsegments;

public:
	Snake(); //Конструктор по умолчанию
	Snake(const Point& _position); //Конструктор с параметрами
	int Move(Direction direction);
	int GetLength() const;
	Point GetPosition() const;
	void Eat(const Food& food);


	// Операторы
	Snake(const Snake& other); // Конструктор копирования
	Snake& operator=(const Snake& other); // Оператор присваивания
	bool operator==(const Snake& other) const; // Оператор сравнения ==
	bool operator!=(const Snake& other) const; // Оператор сравнения !=
	friend std::istream& operator>>(std::istream& in, Snake& snake); // Оператор ввода
	friend std::ostream& operator<<(std::ostream& out, const Snake& snake); // Оператор вывода

};
