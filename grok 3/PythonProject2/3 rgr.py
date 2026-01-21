import random

# -------------------------------
# БЫСТРАЯ СОРТИРОВКА (общая)
# -------------------------------
def quicksort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quicksort(left) + middle + quicksort(right)


# ==================================================
# 1. Сортировка последовательности из 1000 чисел
# ==================================================
print("1) Сортировка 1000 целых чисел")

a = [random.randint(0, 1000) for _ in range(1000)]
a = quicksort(a)

print(a)
print("-" * 50)


# ==================================================
# 2. Сортировка одномерного массива [50, 100]
# ==================================================
print("2) Сортировка массива из интервала [50, 100]")

arr = [random.randint(50, 100) for _ in range(20)]
print("Исходный массив:", arr)

arr = quicksort(arr)
print("Отсортированный массив:", arr)
print("-" * 50)


# ==================================================
# 3. Сортировка первого столбца двумерного массива
# ==================================================
print("3) Сортировка первого столбца двумерного массива")

def quicksort_rows(matrix):
    if len(matrix) <= 1:
        return matrix
    pivot = matrix[len(matrix) // 2][0]
    left = [row for row in matrix if row[0] < pivot]
    middle = [row for row in matrix if row[0] == pivot]
    right = [row for row in matrix if row[0] > pivot]
    return quicksort_rows(left) + middle + quicksort_rows(right)

n, m = 5, 4
matrix = [[random.randint(5, 61) for _ in range(m)] for _ in range(n)]

print("Исходный массив:")
for row in matrix:
    print(row)

matrix = quicksort_rows(matrix)

print("Отсортированный по первому столбцу:")
for row in matrix:
    print(row)
print("-" * 50)


# ==================================================
# 4. Сортировка списка студентов по алфавиту
# ==================================================
print("4) Сортировка списка студентов")

students = [
    "Иванов",
    "Петров",
    "Сидоров",
    "Александров",
    "Кузнецов"
]

students.sort()

print("Отсортированный список студентов:")
for s in students:
    print(s)
