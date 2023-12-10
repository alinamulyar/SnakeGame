#pragma once
#include "point.h"

class Food //Определение класса еды
{
	Point _position;

public:
	Food(); //Конструктор по умолчанию
	Food(const Point& position); //Конструктор с параметрами

	Point GetPosition() const; //Метод для получения позиции еды

	//Операторы

	Food& operator=(const Food& other); // Оператор присваивания
	bool operator==(const Food& other) const; // Оператор сравнения ==
	bool operator!=(const Food& other) const; // Оператор сравнения !=

	// Операторы ввода и вывода
	friend std::istream& operator>>(std::istream& in, Food& food); // Оператор ввода
	friend std::ostream& operator<<(std::ostream& out, const Food& food); // Оператор вывода

	
};