#include <iostream>
#include <Windows.h>

using namespace std;

//int* all(int size) {
//    return new int[size];
//}
//
//void init(int*& array, int size) {
//    array = all(size);
//}
//
//void print(int* array, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//
//void delet(int*& array) {
//    delete[] array;
//    array = nullptr;
//}
//
//void app(int*& array, int& size, int elem) {
//    int* newArray = new int[size + 1];
//    for (int i = 0; i < size; ++i) {
//        newArray[i] = array[i];
//    }
//    newArray[size] = elem;
//    delete[] array;
//    array = newArray;
//    size++;
//}
//
//void insert(int*& array, int& size, int index, int elem) {
//    int* newArray = new int[size + 1];
//    for (int i = 0; i < index; ++i) {
//        newArray[i] = array[i];
//    }
//    newArray[index] = elem;
//    for (int i = index; i < size; ++i) {
//        newArray[i + 1] = array[i];
//    }
//    delete[] array;
//    array = newArray;
//    size++;
//}
//
//void rem(int*& array, int& size, int index) {
//    if (size == 0 || index < 0 || index >= size) {
//        return;
//    }
//    int* newArray = new int[size - 1];
//    for (int i = 0; i < index; ++i) {
//        newArray[i] = array[i];
//    }
//    for (int i = index + 1; i < size; ++i) {
//        newArray[i - 1] = array[i];
//    }
//    delete[] array;
//    array = newArray;
//    size--;
//}

int* rem(int* arr, int& size) {
    int odd = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            odd++;
        }
    }
    int* newArray = new int[odd];
    int index = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            newArray[index] = arr[i];
            index++;
        }
    }
    delete[] arr;
    arr = nullptr;
    size = odd;

    return newArray;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //1
    /*int* arr = nullptr;
    int size = 0;

    init(arr, size);

    app(arr, size, 10);
    app(arr, size, 20);
    app(arr, size, 30);

    insert(arr, size, 1, 15);

    rem(arr, size, 2);

    cout << "Масив: ";
    print(arr, size);

    delet(arr);*/

    //2

    int size = 6;
    int* arr = new int[size] {1, 2, 3, 4, 5, 6};

    int* newArray = rem(arr, size);

    cout << "Новий масив після видалення парних чисел:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    delete[] newArray;

    return 0;
}