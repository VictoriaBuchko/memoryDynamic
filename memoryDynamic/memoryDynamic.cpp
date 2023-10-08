//задания 2 и 3 закоментированы для удобства 
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//---------------------------------------------------------------------------------------------------------
// 1) Добавить заданное количество элементов (случайные значения) в конец динамического массива.


int main()
{
    srand(time(0));
    int size;
    cout << "Enter size: ";
    cin >> size;

    int* arr = new int[size];//создание динамического массива

    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }


    int random_number = rand() % 5 + 1;//сгенерировать рандомное число от 1 до 5

    int* temp = new int[size + random_number];
    for (int i = 0; i < size; i++) {

        temp[i] = arr[i];
    }

    for (int i = size; i < size + random_number; i++)
    {
        temp[i] = rand() % 11 + 10; // генерируем случайные числа для новых элементов
    }

    delete[] arr;  // удаляем исходный дин. массив
    arr = temp;  // теперь указатель arr смотрит на новый массив

    for (int i = 0; i < size + random_number; i++) {

        cout << arr[i] << " ";
    }
    delete[] arr;

    return 0;
}



//-------------------------------------------------------------------------------------------------------------------------
//2) Написать функцию, которая добавляет заданное количество элементов (случайные значения) в конец динамического массива.
/*
int* random(int* arr, int* size, int* random_number) {
    int* temp = new int[*size + *random_number];

    for (int i = 0; i < *size; i++) {

        temp[i] = arr[i];
    }

    for (int i = *size; i < *size + *random_number; i++) {

        temp[i] = rand() % 11 + 10; // генерируем случайные числа для новых элементов
    }

    delete[] arr;
    return temp;
}

int main() {
    srand(time(0));
    int size;
    cout << "Enter size: ";
    cin >> size;

    int* arr = new int[size]; // создание динамического массива

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    int random_number = rand() % 5 + 1; // сгенерировать рандомное число от 1 до 5

    arr = random(arr, &size, &random_number);
    size += random_number; // Обновляем size

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
*/


//---------------------------------------------------------------------------------------------------------
//3 задание Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры).
// Необходимо создать третий массив минимально возможного размера,
//в котором нужно собрать только общие элементы двух массивов без повторений.
/*
int main() {
    srand(time(0));
    int M, N;
    cout << "Enter the size of array A: ";
    cin >> M;
    cout << "Enter the size of array B: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "\n\n";

    cout << "Enter elements of array A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Enter elements of array B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int min = (M < N) ? M : N;
    int* C = new int[min];
    int newSize = 0;

    bool jointElements = false;// проверка на то если ли вообще совместные елементы в 1 и 2 масивах

    for (int i = 0; i < M; i++) {
        bool present = false;//проверяем нет ли повторений первого масива в масиве с
        for (int j = 0; j < N; j++) {

            if (A[i] == B[j]) {
                for (int k = 0; k < newSize; k++) {

                    if (C[k] == A[i]) {
                        present = true; // если элемент уже есть в C переходим к следующей итерации
                        break;
                    }
                }
                if (!present) {

                    C[newSize] = A[i];
                    newSize++;
                }
                jointElements = true;
                break;
            }
        }
    }

    if (!jointElements)
    {

        cout << "There are no common elements in arrays A and B";
    }
    else
    {
        for (int i = 0; i < newSize; i++) {

            cout << C[i] << " ";
        }
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
*/
