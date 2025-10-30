# Читаем все числа из файла input.txt
with open("input.txt", "r", encoding="utf-8") as f:
    read_1 = f.read().split()

# Используем множество (set) для хранения уникальных чисел
numbers = set()

for token in read_1:
    num = int(token)

    if num > 0:
        numbers.add(num)  # добавляем число
    elif num < 0:
        numbers.discard(-num)
    else:  # num == 0
        result = sorted(numbers)
        with open("output.txt", "w", encoding="utf-8") as out:
            out.write(" ".join(map(str, result)))
        break
