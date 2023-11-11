#pragma once
#include "food.h"
#include "snake.h"
#include "field.h"

class Engine
{
	Food _food;
	Snake _snake;
	Field _field;

public:
	Engine();
	void Start();
	void Run();
}; 
