#include <iostream>
using namespace std;

//  Функция, принимающая 2 указателя и возвращающая сумму элементов массива
int sumArr(int* start, int* end) {
    int sum = 0;
    for (int* dell_perm = start; dell_perm < end; ++dell_perm) {
        sum += *dell_perm;
    }
    return sum;
}

//  Функции суммы и разности
int add(int a, int b) {
    return a + b;
}

int slozi(int a, int b) {
    return a - b;
}

int (*getOperation(char op))(int, int) {
    if (op == '+')
        return add;
    else if (op == '-')
        return slozi;
    else
        return nullptr; // если символ не '+' или '-'
}

int main() {
    //  Проверка функции суммы массива
    int numbers[] = { 1, 2, 3, 4, 5 };
    int sum = sumArr(numbers, numbers + 5);
    cout << "Сумма элементов массива: " << sum << endl;

    //  Проверка функции, возвращающей указатель на другую функцию
    char op;
    cout << "Введите операцию (+ или -): ";
    cin >> op;

    int (*operation)(int, int) = getOperation(op); // получаем указатель на функцию
    if (operation) {
        int a = 10, b = 4;
        int result = operation(a, b); // вызов функции через указатель
        cout << "Результат операции " << op << ": " << result << endl;
    }
    else {
        cout << "Неверный оператор!" << endl;
    }

    // Динамический указатель типа float
    float* ptr = new float(3.14f);
    cout << "Динамическое значение float: " << *ptr << endl;

    //  Освобождаем память
    delete ptr;
    ptr = nullptr; // обнуляем указатель для безопасности

    return 0;
}
