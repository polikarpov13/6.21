#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;


void create_array(int* a, const int array_size, const int number1, const int number2) {
    for (int i = 0; i < array_size; i++)
        a[i] = number1 + rand() % (number2 - number1 + 1);
}

void print_array(int* a, const int array_size) {
    for (int i = 0; i < array_size; i++)
        cout << a[i] << " ";
    cout << endl;
}

void elements_change(int* a, const int array_size) {
    int max = 0;
    int tmp = 0;
    int index = 0;;
    for (int i = 0; i < array_size; i++) {
        if (a[i] > max && a[i] % 2 != 0) {
            max = a[i];
            index = i;
        }
            
    }
    tmp = a[array_size - 1];
    a[array_size - 1] = max;
    a[index] = tmp;
}


int main()
{
    srand((unsigned)time(NULL));

    const int array_size = 10;
    int a[array_size];

    int number1 = -10;
    int number2 = 10;

    create_array(a, array_size, number1, number2);
    print_array(a, array_size);

    elements_change(a, array_size);
    print_array(a, array_size);

    return 0;
    system("pause");
}

