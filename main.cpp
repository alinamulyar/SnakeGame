////////////////////////////////////////////
///\brief SnakeGame project
///
/// 
/// 
/// 
/// 
/// 
/// 
/// 
//////////////////////////////////////////////



/**
 * @file main.cpp
 * @brief Основной файл программы.
 * 
 * SnakeGame Project
 * Mulyar Alina DJ2204
 * 2023
 * 
 * 
 */


#include "engine.h"

 /**
  * @brief Точка входа в программу.
  * @return Код возврата.
  */

int main()
{
	Engine engine; // Создаем экземпляр класса Engine.
	engine.Start();  // Запускаем движок.
	engine.Run(); // Запускаем цикл работы движка.
	return 0;
}