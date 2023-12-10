#include "food.h"
#include <iostream>

Food::Food() {} //����������� ������������ �� ���������
Food::Food(const Point& position) {} //���������� ������������ � �����������


Point Food::GetPosition() const //����������� ������ ��� ��������� ������� ���
{
	return _position; //
}

//���������, �� �����������

// ����������� ��������� ������������
Food& Food::operator=(const Food& other)
{
    if (this != &other)
    {
        _position = other._position;
    }
    return *this;
}

// ����������� ��������� ��������� ==
bool Food::operator==(const Food& other) const
{
    return (_position == other._position);
}

// ����������� ��������� ��������� !=
bool Food::operator!=(const Food& other) const
{
    return !(*this == other);
}

// ����������� ��������� �����
std::istream& operator>>(std::istream& in, Food& food)
{
    in >> food._position;
    return in;
}

// ����������� ��������� ������
std::ostream& operator<<(std::ostream& out, const Food& food)
{
    out << "Food at " << food._position;
    return out;
}
