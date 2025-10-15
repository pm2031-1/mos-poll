import random

# ======= СОРТИРОВКА ВЫБОРОМ =======

def selection_sort_ascending(arr):
    """Сортировка выбором по возрастанию"""
    n = len(arr)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]


def selection_sort_descending(arr):
    """Сортировка выбором по убыванию"""
    n = len(arr)
    for i in range(n - 1):
        max_index = i
        for j in range(i + 1, n):
            if arr[j] > arr[max_index]:
                max_index = j
        arr[i], arr[max_index] = arr[max_index], arr[i]


def selection_sort_strings(arr):
    """Сортировка строк (телефонов) по возрастанию"""
    n = len(arr)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]


# ======= ОСНОВНАЯ ПРОГРАММА =======

def main():
    print("Выберите задачу:")
    print("1 - Сортировка по возрастанию (числа {2,103})")
    print("2 - Сортировка по убыванию (числа {0,100})")
    print("3 - Сортировка списка телефонов (по возрастанию)")
    choice = input("Ваш выбор: ")

    if choice == '1':
        arr = [random.randint(2, 103) for _ in range(10)]
        print("Исходный массив:", arr)
        selection_sort_ascending(arr)
        print("Отсортированный по возрастанию:", arr)

    elif choice == '2':
        arr = [random.randint(0, 100) for _ in range(10)]
        print("Исходный массив:", arr)
        selection_sort_descending(arr)
        print("Отсортированный по убыванию:", arr)

    elif choice == '3':
        phones = ["23-45-67", "12-11-09", "99-88-77", "45-67-89", "10-00-00"]
        print("Исходный список телефонов:", phones)
        selection_sort_strings(phones)
        print("Отсортированный список телефонов:", phones)

    else:
        print("Неверный выбор!")


if __name__ == "__main__":
    main()
