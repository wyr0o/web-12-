#include <iostream>
#include <Windows.h>
#include <fstream>

int main()
{
	std::ifstream fin("C:/files/in.txt");
	int size = 0;
	fin >> size;
	int* arr = new int[size];
	
	for (int i = 0; i < size; i++)
	{
			fin >> arr[i];
	}
		
	for (int i = size -1; i >=0; i--) 
	{
		std::cout << arr[i] << std::endl;
	}
	delete[] arr;
	fin.close();
}