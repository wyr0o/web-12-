#include <iostream>
#include <Windows.h>
#include <fstream>

int main()
{
	int rows = 0;
	int col = 0;
	std::ifstream fin("C:/files/in.txt");
	
	fin >> rows;
	fin >> col;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[col];
	}
	for (int i = 0;i < rows; i++)
	{
		for (int j = 0; j<col; j++)
		{
			fin>> arr[i][j];
		}
	}
	for (int i = 0;i < rows; i++)
	{
		for (int j = col - 1; j >= 0; j--)
		{
			std::cout<< arr[i][j]<< " ";
		}
		std::cout << std::endl;
	}
	fin.close();

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}