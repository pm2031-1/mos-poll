#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleOutputCP(1251);
    /*int x;
    int c= 0;
    while (true) {
        cout << "Введите целое положительное число: ";
        cin >> x;

        if (x > 0) {
            break; // правильный ввод, выходим из цикла
        }
        else {
            cout << "Некорректный ввод. Попробуйте еще раз." << endl;
        }
    }
    for (int i = 0; i <= x; i++) {
        c += i;
    }
    cout << c;
    */

    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    for (int j = 0; j < 10; j++) {
        cout << arr[j];
        if (j != 9) {
            cout << " ЧИСЛО";
        }
    }
    cout << "\n" << "---------------------------------" << "\n";

    for (int z = 0; z < 10; z++) {
        if (z % 2 == 0) {

            cout << arr[z];
            if (z != 9) {
                cout << " -ЧЕТНОЕ" << "\n";
            }
        }
    }
    int v = 0;
    cout << "---------------------------------" << "\n";
    for (int z = 0; z < 10; z++) {
        if (z % 2 != 0) {
            cout << arr[z];

            cout << " -НЕЧЕТНОЕ" << "\n";
            v += arr[z];


        }

    }
    cout << v;
}
