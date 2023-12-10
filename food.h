#pragma once
#include "point.h"

class Food //����������� ������ ���
{
	Point _position;

public:
	Food(); //����������� �� ���������
	Food(const Point& position); //����������� � �����������

	Point GetPosition() const; //����� ��� ��������� ������� ���

	//���������

	Food& operator=(const Food& other); // �������� ������������
	bool operator==(const Food& other) const; // �������� ��������� ==
	bool operator!=(const Food& other) const; // �������� ��������� !=

	// ��������� ����� � ������
	friend std::istream& operator>>(std::istream& in, Food& food); // �������� �����
	friend std::ostream& operator<<(std::ostream& out, const Food& food); // �������� ������

	
};