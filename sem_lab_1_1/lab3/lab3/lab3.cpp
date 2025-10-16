#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");    
    int number = 10;

    int* ptr_number = &number;

    
    std::cout << "Адрес указателя: " << ptr_number << std::endl;
    std::cout << "Значение по адресу указателя: " << *ptr_number << std::endl;

    *ptr_number = 20;

    std::cout << "Новое значение переменной 'number': " << number << std::endl;

    int arr[] = { 1, 2, 3, 4, 5 };
    int* ptr_arr = arr; // Указатель на первый элемент массива

 
    std::cout << "Элементы массива через указатель:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr_arr + i) << " "; // или *(ptr_arr++)
    }
    std::cout << std::endl;

    int value = 5;

    // Использование константного указателя на переменную.
    int* const_ptr_value = &value;


    // Попытка изменить адрес (ошибка компилятора)
    // int another_value = 100;
    // const_ptr_value = &another_value; // Ошибка компилятора: присвоение в объявленном с const указателе

    // Изменение значения через указатель
    *const_ptr_value = 50;

    // Проверка, что значение переменной изменилось
    std::cout << "Новое значение 'value' через константный указатель: " << value << std::endl;

    return 0;
}
