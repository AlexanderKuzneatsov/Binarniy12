#include <iostream>

using namespace std;

int Array(int Size);

void SearchKey(int key, int Size, const int *array);

int main()
{
	setlocale(LC_ALL, "ru");

	int Size = 0;

	cout << "Введи размер массива" << endl;
	cin >> Size;
	cout << endl;
	Array(Size);

}

int Array(int Size)
{
	int* array = new int[Size];


	for (int i = 0; i < Size; i++)
	{
		array[i] = i;
		cout << array[i] << endl;
	}

	int key = 0;

	cout << "Введите пажилое искомое число" << endl;
	cin >> key;


	SearchKey(key,Size,array);
	
	
	return 0;

	delete[] array;	
}

void SearchKey(int key, int Size, const int* array)
{
	if (key > array[Size] && key < array[0])
	{
		cout << "неверное число, ты ебанько?" << endl;
	}

	int snich = 0;

	int left = 0;

	int right = Size;

	int middle = (Size / 2);


	while (snich == 0)
	{


		if (array[middle] == key)
		{
			cout << "ваш пажилой искомый пятый элемент - " << key << endl;
			snich = 1;


		}
		if (key < array[middle])
		{
			right = (middle - 1);

			middle = ((left + right) / 2);


		}
		else
		{
			left = (middle + 1);

			middle = ((left + right) / 2);

		}

	}
}

