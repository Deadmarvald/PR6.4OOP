#include <iostream>
#include <Windows.h>

using namespace std;

template<class T>
bool Task(T* arr, T n)
{
	T tmp = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (tmp == arr[i])
		{
			return false;
		}
		else
		{
			tmp = arr[i];
		}
	}

	return true;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;

	cout << "Введіть кількість елементів в масиві = "; cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Введіть значення елементу №" << i + 1 << " = "; cin >> arr[i];
	}
	cout << endl;

	if (Task(arr, n))
	{
		cout << "Масив не містить однакових сусідніх елементів." << endl << endl;
	}
	else
	{
		cout << "Масив містить однакові сусідні елементи." << endl << endl;
	}

	system("pause");
	return 0;
}