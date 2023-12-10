



#include <iostream>
#include "point.h"

//Определение конструкторов

// Определение конструктора по умолчанию
Point::Point() : xcoordinate(0), ycoordinate(0) {}

// Определение конструктора с параметрами
Point::Point(int x, int y) : xcoordinate(x), ycoordinate(y) {}

// Определение конструктора копирования
Point::Point(const Point& other) : xcoordinate(other.xcoordinate), ycoordinate(other.ycoordinate) {}


//Определение операторов


// Определение оператора присваивания
Point& Point::operator=(const Point& other)
{
    if (this != &other) // Проверка на самоприсваивание
    {
        xcoordinate = other.xcoordinate; // Присваивание значений членам структуры из другой структуры
        ycoordinate = other.ycoordinate;
    }
    return *this; // Возврат ссылки на текущий объект
}


// Определение оператора сравнения == //через равен
bool Point::operator==(const Point& other) const
{
    return (xcoordinate == other.xcoordinate) && (ycoordinate == other.ycoordinate);
}

// Определение оператора сравнения != //через не равен
bool Point::operator!=(const Point& other) const
{
    return !(*this == other);
}

// Определение оператора ввода
std::istream& operator>>(std::istream& in, Point& point)
{
    in >> point.xcoordinate >> point.ycoordinate;
    return in;
}

// Определение оператора вывода
std::ostream& operator<<(std::ostream& out, const Point& point)
{
    out << "(" << point.xcoordinate << ", " << point.ycoordinate << ")";
    return out;
}