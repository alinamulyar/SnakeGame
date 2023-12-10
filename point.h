#pragma once
#include <iostream>

struct Point
{
	int xcoordinate; //���������� ���������� x
	int ycoordinate; //���������� ���������� y

	//������������
	Point(); //�� ���������
	Point(int x, int y); //� �����������
	Point(const Point& other); //�����������

	// ���������
	Point& operator=(const Point& other); // �������� ������������
	bool operator==(const Point& other) const; // �������� ��������� == �����
	bool operator!=(const Point& other) const; // �������� ��������� != �� �����

	// & ���������� ������ ��� ������� �������� � ��������������� ����� ������� ��������

	//��������� ����� � ������
	friend std::istream& operator>>(std::istream& in, Point& point); // �������� �����
	friend std::ostream& operator<<(std::ostream& out, const Point& point); // �������� ������
	//friend ������������ ��� ��������, ��� ������� ��� ����� ����� ������ � ��������� ��� ���������� ������ ������� ������ (Point)



};
