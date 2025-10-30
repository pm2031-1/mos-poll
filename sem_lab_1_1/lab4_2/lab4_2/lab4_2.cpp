#include <iostream>
#include <string>

using namespace std;

// Класс оружия
class Weapon {
private:
    string name;
    double ves;
    int damage;

public:
    // Конструктор
    Weapon(const string& name, double weight, int damage)
        : name(name), ves(weight), damage(damage) {
        cout << "Создано оружие: " << name << endl;
    }

    // Деструктор
    ~Weapon() {
        cout << "\n--- Деструктор ---" << endl;
        cout << "Название: " << name << endl;
        cout << "Вес: " << ves << " кг" << endl;
        cout << "Урон: " << damage << endl;
        cout << "Оружие удаляется!" << endl;
    }

    // Метод для вывода данных оружия
    void printInfo() const {
        cout << "Оружие: " << name
            << ", Вес: " << ves << " кг"
            << ", Урон: " << damage << endl;
    }

    // Метод проверки, можно ли поднять оружие
    bool canLift(double maxWeight) const {
        return maxWeight < ves;
    }

    // Метод суммирования веса с другим оружием (оригинальная версия)
    double totalWeight(const Weapon& other) const {
        return ves + other.ves;
    }

    // Перегрузка: суммирование веса с числовым значением
    double totalWeight(double otherWeight) const {
        return ves + otherWeight;
    }

    // Обновлённая версия метода totalWeight, использующая перегрузку
    double totalWeightRefactored(const Weapon& other) const {
        return totalWeight(other.ves); // Используем перегрузку
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    // 2. Создаём объект оружия (статический)
    Weapon sword("АНИГИЛЯТОР", 2.5, 15);
    sword.printInfo();

    // 3. сОЗДАЕМ динамический объект оружия
    Weapon* axe = new Weapon("Топор", 4.0, 25);
    axe->printInfo();

    // 5. ПровЕряем, можно ли поднять оружие
    cout << "\nПроверка возможности поднять оружие:" << endl;
    cout << "Можно ли поднять АНИГИЛЯТОР (макс. вес 2 кг)? "
        << (sword.canLift(2.0) ? "Да" : "Нет") << endl;
    cout << "Можно ли поднять топор (макс. вес 5 кг)? "
        << (axe->canLift(5.0) ? "Да" : "Нет") << endl;

    // 6, 7, 8. Проверяем методы суммирования веса
    cout << "\nСуммарный вес:" << endl;
    cout << "АНИГИЛЯТОР + Топор: " << sword.totalWeightRefactored(*axe) << " кг" << endl;
    cout << "Топор + 3 кг: " << axe->totalWeight(3.0) << " кг" << endl;//ТУТ произвольный вес 

    // 4. Удаляем динамический объект (вызов деструктора)
    delete axe;

    // Деструктор для статического объекта вызовется автоматически при выходе из main
    return 0;
}
