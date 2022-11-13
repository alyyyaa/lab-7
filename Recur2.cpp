//Рекурсивная функция Fact2(N), вычисляющая значение двойного факториала.
#include <iostream>
using namespace std;
float Fact2(int &n, int &res)
{
	if (n > 2) {
		n -= 2;
		res *= n;
		Fact2(n, res);
	}
	return res;
}
void main()
{
	int n;
	int res;
	for (int i = 1; i < 5; i++) {
		cin >> n;
		res = n;
		cout << Fact2(n, res);
	}
}