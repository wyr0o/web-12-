#include <iostream>
#include <Windows.h>
#include <fstream>

int main()
{
	SetConsoleOutputCP(1251);
	std::ofstream fout("C:/files/out.txt");
	int size = 0;
	std::cout << "введите размер массива: ";
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "arr [" << i << "] = ";
		std::cin >> arr[i];
	}
	fout << size<< std::endl;

	for (int i = size - 1; i >= 0; i--)
	{
		fout << arr[i]<< " ";
	}
}