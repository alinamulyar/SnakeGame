/**
 * @file snake.cpp
 * @brief ������������ ���� ��� ������ Snake.
 * 
 *  ���� ����� ������������ ��� ����� ������ � �������� � ���� ���������� ����� ������� ��� 
 *  ��������� ����� ������,
 *  ��������� ������� ������,
 *  ����� Eat
 *
 */





#include "snake.h"
#include <iostream>

Snake::Snake():life(true), nrsegments(1)
{
	//���������� ������������ �� ���������
}
Snake::Snake(const Point& _position) :life(true), nrsegments(1) 
{
	//���������� ������������ � �����������
}

int Snake::Move(Direction direction) {}

int Snake::GetLength() const {}

Point Snake::GetPosition() const {}

void Snake::Eat(const Food& food) {}








//Lab 3

// ���������� ������������ �����������
Snake::Snake(const Snake& other) : life(other.life), segments(other.segments), nrsegments(other.nrsegments)
{
    // �������� ��������� ���� �� ������� ������� ����
}

// ���������� ��������� ������������
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

// ���������� ��������� ��������� ==
bool Snake::operator==(const Snake& other) const
{
    return (life == other.life) && (segments == other.segments) && (nrsegments == other.nrsegments);
}

// ���������� ��������� ��������� !=
bool Snake::operator!=(const Snake& other) const
{
    return !(*this == other);
}

// ���������� ��������� �����
std::istream& operator>>(std::istream& in, Snake& snake)
{
    
    return in;
}

// ���������� ��������� ������
std::ostream& operator<<(std::ostream& out, const Snake& snake)
{
    
    return out;
}