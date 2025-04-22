#include <iostream>
#include <Windows.h>
#include <fstream>

int main()
{
	SetConsoleOutputCP(65001); //поменял 1251 на 65001, чтобы работал с кодировкой UTF-8. ещё мне помог переход на кодировку ANSI, но решил, что такой вариант универсальнее
	SetConsoleCP(65001);
	std::string str;
	std::ifstream fin("C:/files/in txt.txt");
	if (fin.is_open()) 
	{
		while (!(fin >> str).eof())
		{
			std::cout << str << std::endl;
		}
	}

}