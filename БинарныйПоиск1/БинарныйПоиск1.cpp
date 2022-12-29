#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int Size = 0;

	cin >> Size;
	cout << endl;

	int *array = new int[Size];

	for (int i = 0; i < Size; i++)
	{
		array[i] = i;
		cout << array[i] << endl;
	}

	int key = 0;

	cout << "Введите пажилое искомое число" << endl;
	cin >> key;
	
	int snich = 0;

	int left = 0;

	int left1 = 0;

	int right = Size;

	int middle = (Size / 2);

	if (key > Size && key < left1)
	{
		cout << "неверное число, ты ебанько?" << endl;
		snich = 1;
	}
	


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
