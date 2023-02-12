//Группа БВ 215
//Афанасьев Антон Анатольевич
//ДЗ
//1.Написать функцию по удалению(копированию) из массива группы элементов.
//Значения индексов диапазона удаляемых(копируемых) элементов задаются пользователем.
//Удаляемые(копируемые) элементы должны распологаться рядом, без разрывов.

#include <iostream>
#include "DeleteGroupElements.h"
using namespace std;


int main() {
    system("chcp 65001");
    int size1 = 10;
    int *arr1 = new int[10]{1, 2, 3, 4,5,6,7,8,9,10};
    cout << "[";
    for (int i = 0; i < size1; ++i) {
        cout << " " << arr1[i] << " ";
    }
    cout << "]" << endl;
    arr1 = DeleteGroupElements(arr1,size1,1,2,3);
    return 0;
}
