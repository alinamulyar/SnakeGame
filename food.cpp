#include "food.h"
#include <iostream>

Food::Food() {} //Определение конструктора по умолчанию
Food::Food(const Point& position) {} //Определние конструктора с параметрами


Point Food::GetPosition() const //Определение метода для получения позиции еды
{
	return _position; //
}

//Операторы, их определение

// Определение оператора присваивания
Food& Food::operator=(const Food& other)
{
    if (this != &other)
    {
        _position = other._position;
    }
    return *this;
}

// Определение оператора сравнения ==
bool Food::operator==(const Food& other) const
{
    return (_position == other._position);
}

// Определение оператора сравнения !=
bool Food::operator!=(const Food& other) const
{
    return !(*this == other);
}

// Определение оператора ввода
std::istream& operator>>(std::istream& in, Food& food)
{
    in >> food._position;
    return in;
}

// Определение оператора вывода
std::ostream& operator<<(std::ostream& out, const Food& food)
{
    out << "Food at " << food._position;
    return out;
}
