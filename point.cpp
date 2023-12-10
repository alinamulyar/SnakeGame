



#include <iostream>
#include "point.h"

//����������� �������������

// ����������� ������������ �� ���������
Point::Point() : xcoordinate(0), ycoordinate(0) {}

// ����������� ������������ � �����������
Point::Point(int x, int y) : xcoordinate(x), ycoordinate(y) {}

// ����������� ������������ �����������
Point::Point(const Point& other) : xcoordinate(other.xcoordinate), ycoordinate(other.ycoordinate) {}


//����������� ����������


// ����������� ��������� ������������
Point& Point::operator=(const Point& other)
{
    if (this != &other) // �������� �� ����������������
    {
        xcoordinate = other.xcoordinate; // ������������ �������� ������ ��������� �� ������ ���������
        ycoordinate = other.ycoordinate;
    }
    return *this; // ������� ������ �� ������� ������
}


// ����������� ��������� ��������� == //����� �����
bool Point::operator==(const Point& other) const
{
    return (xcoordinate == other.xcoordinate) && (ycoordinate == other.ycoordinate);
}

// ����������� ��������� ��������� != //����� �� �����
bool Point::operator!=(const Point& other) const
{
    return !(*this == other);
}

// ����������� ��������� �����
std::istream& operator>>(std::istream& in, Point& point)
{
    in >> point.xcoordinate >> point.ycoordinate;
    return in;
}

// ����������� ��������� ������
std::ostream& operator<<(std::ostream& out, const Point& point)
{
    out << "(" << point.xcoordinate << ", " << point.ycoordinate << ")";
    return out;
}