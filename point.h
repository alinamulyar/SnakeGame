#pragma once
#include <iostream>

struct Point
{
	int xcoordinate; //переменная координаты x
	int ycoordinate; //переменная координаты y

	//Конструкторы
	Point(); //по умолчанию
	Point(int x, int y); //с параметрами
	Point(const Point& other); //копирования

	// Операторы
	Point& operator=(const Point& other); // Оператор присваивания
	bool operator==(const Point& other) const; // Оператор сравнения == равен
	bool operator!=(const Point& other) const; // Оператор сравнения != не равен

	// & сравнивает каждый бит первого операнда с соответствующим битом второго операнда

	//Операторы ввода и вывода
	friend std::istream& operator>>(std::istream& in, Point& point); // Оператор ввода
	friend std::ostream& operator<<(std::ostream& out, const Point& point); // Оператор вывода
	//friend используется для указания, что функция или класс имеет доступ к приватным или защищенным членам другого класса (Point)



};
