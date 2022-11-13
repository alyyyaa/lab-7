//Рекурсивная функция Combin1(N, K), находящая число сочетаний из N элементов по K - с помощью рекуррентного соотношения. 
#include <iostream>
using namespace std;
int Combin1(int N, int K) {
    if (K == 0) return 1;
    if (N == K) return 1;
    return Combin1(N - 1, K) + Combin1(N - 1, K - 1);
}

void main()
{
    int N, K;
    cin >> N >> K;
    cout << Combin1(N, K);
}
