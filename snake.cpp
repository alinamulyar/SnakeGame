/**
 * @file snake.cpp
 * @brief Заголовочный файл для класса Snake.
 * 
 *  Этот класс используется для самой змейки и включает в себя реализацию такиз методов как 
 *  Получение длины змейки,
 *  Получение позиции змейки,
 *  метод Eat
 *
 */





#include "snake.h"
#include <iostream>

Snake::Snake():life(true), nrsegments(1)
{
	//Реализация конструктора по умолчанию
}
Snake::Snake(const Point& _position) :life(true), nrsegments(1) 
{
	//Реализация конструктора с параметрами
}

int Snake::Move(Direction direction) {}

int Snake::GetLength() const {}

Point Snake::GetPosition() const {}

void Snake::Eat(const Food& food) {}








//Lab 3

// Реализация конструктора копирования
Snake::Snake(const Snake& other) : life(other.life), segments(other.segments), nrsegments(other.nrsegments)
{
    // Копируем состояние змеи из другого объекта змеи
}

// Реализация оператора присваивания
Snake& Snake::operator=(const Snake& other)
{
    if (this != &other)
    {
        life = other.life;
        segments = other.segments;
        nrsegments = other.nrsegments;
    }
    return *this;
}

// Реализация оператора сравнения ==
bool Snake::operator==(const Snake& other) const
{
    return (life == other.life) && (segments == other.segments) && (nrsegments == other.nrsegments);
}

// Реализация оператора сравнения !=
bool Snake::operator!=(const Snake& other) const
{
    return !(*this == other);
}

// Реализация оператора ввода
std::istream& operator>>(std::istream& in, Snake& snake)
{
    
    return in;
}

// Реализация оператора вывода
std::ostream& operator<<(std::ostream& out, const Snake& snake)
{
    
    return out;
}