//Рекурсивная функция maxElem(A, N), которая находит максимальный элемент целочисленного массива A размера N (1 <= N <= 10),
//не используя оператор цикла. Найти максимальных элементы трех массивов.
#include<iostream>
#include<ctime>
using namespace std;

int maxElem(int *first, int *last, int *max)
{
	if (*first > *max)
		*max = *first;
	if (first == last)
		return *max;
	first++;
	maxElem(first, last, max);
}
void main()
{
	srand(time(NULL));
	for (int j = 0; j < 3; j++) {
		int size = rand() % 9 + 1;
		int* arr = new int[size];
		if (arr == 0) return;
		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 11;
			cout << arr[i]<< ";";
		}
		int max = arr[0];
		cout<< endl << "maxElem = " << maxElem(&arr[0], &arr[size - 1], &max) << endl;
		delete [] arr;
	}
}