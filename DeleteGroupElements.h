#pragma once
#include <iostream>
using namespace std;
int* DeleteGroupElements(int* source, int& size1, int index, int index1, int index2) {
    cout << "Введите 3 находящиеся рядом друг с другом индекса которые хотите удалить в диапазоне размера массива" << endl;
    cin >> index;
    cin >> index1;
    cin >> index2;
    int new_size = size1;
    int *temp = new int[new_size];
    cout << "[";
    for (int i = 0, j = 0; i < size1; ++i) {
        if (i == index) continue;
        if (i == index1) continue;
        if (i == index2) continue;
        temp[j] = source[i];
        j++;
        cout << " " << source[i] << " ";
    }
    cout << "]" << endl;
}