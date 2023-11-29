#pragma once

class Field
{
	int width;
	int height;

public:
	Field(int width = 100, int height = 100);
	int GetWidth() const;
	int GetHeight() const;
};