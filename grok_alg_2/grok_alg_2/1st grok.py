import random


def selection_sort_descending(arr):
    n = len(arr)
    for i in range(n - 1):
        max_index = i
        for j in range(i + 1, n):
            if arr[j] > arr[max_index]:
                max_index = j
        arr[i], arr[max_index] = arr[max_index], arr[i]
    return arr

# Генерация массива случайных чисел от 0 до 100
array = [random.randint(0, 100) for _ in range(10)]
print("Исходный массив:", array)

sorted_array = selection_sort_descending(array)
print("Отсортированный массив (по убыванию):", sorted_array)

def selection_sort_ascending(arr):
    n = len(arr)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]
    return arr

# Генерация массива случайных чисел от 2 до 103
array = [random.randint(2, 103) for _ in range(10)]
print("Исходные", array)

sorted_array = selection_sort_ascending(array)
print("Отсортированные:", sorted_array)
def selection_sort_phones(phones):
    n = len(phones)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if phones[j] < phones[min_index]:  # сравнение строк
                min_index = j
        phones[i], phones[min_index] = phones[min_index], phones[i]
    return phones

phones = ["23-45-67", "11-22-33", "98-76-54", "23-44-66", "12-34-56"]
print("Исходный список телефонов:", phones)

sorted_phones = selection_sort_phones(phones)
print("Отсортированный список телефонов:", sorted_phones)
