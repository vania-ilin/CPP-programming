// динамическая матрица (через new)
#include <iostream>
#include <Windows.h>
using namespace std;
typedef int* pInt;

void printMatrix(pInt X[], int N, int M)
{
    int i, j;
    cout << "Массив:\n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout.width(3);
            cout << X[i][j];
        }
        cout << endl;
    }
    cout << "\nРазмер массива " << N * M << endl;
}

int main()
{
    SetConsoleCP(1251); // установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

    pInt* A;
    int i, j, N, M;

    cout << "Введите размеры матрицы (число строк и столбцов): ";
    cin >> N >> M;

    A = new pInt[N];
    for (i = 0; i < N; i++)
        A[i] = new int[M];

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            A[i][j] = i + j;

    printMatrix(A, N, M);

    for (i = 0; i < N; i++)
        delete[] A[i];
    delete[] A;

    cin.get();
    return 0;
}




