// SAOD Lab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>

using namespace std;

void filein(string fout, string abc)
{
	ofstream fout(abc); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
	for (int i = 0; i < 20; i++)
	{
		fout1 << numbers_radix[i]; // запись строки в файл
	}
	fout1.close(); // закрываем файл
}

int main()
{
    return 0;
}

