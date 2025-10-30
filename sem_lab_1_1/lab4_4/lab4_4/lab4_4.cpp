#include "Weapon.h"
#include <iostream>

// Реализация класса Weapon

Weapon::Weapon(const std::string& name, double weight, int damage)
    : name(name), ves(weight), damage(damage) {
    std::cout << "Создано оружие: " << name << std::endl;
}

Weapon::~Weapon() {
    std::cout << "\n--- Деструктор ---" << std::endl;
    std::cout << "Название: " << name << std::endl;
    std::cout << "Вес: " << ves << " кг" << std::endl;
    std::cout << "Урон: " << damage << std::endl;
    std::cout << "Оружие удаляется!" << std::endl;
}

std::string Weapon::getName() const { return name; }
double Weapon::getVes() const { return ves; }
int Weapon::getDamage() const { return damage; }

void Weapon::setDamage(int newDamage) {
    if (newDamage >= 0) {
        damage = newDamage;
    }
}

void Weapon::printInfo() const {
    std::cout << "Оружие: " << name
        << ", Вес: " << ves << " кг"
        << ", Урон: " << damage << std::endl;
}

bool Weapon::canLift(double max_ves) const {
    return max_ves < ves;
}

double Weapon::totalWeight(const Weapon& other) const {
    return ves + other.ves;
}

double Weapon::totalWeight(double otherWeight) const {
    return ves + otherWeight;
}

double Weapon::totalWeightRefactored(const Weapon& other) const {
    return totalWeight(other.ves);
}

// Реализация класса Characteristic

Characteristic::Characteristic(int strength) : strength(strength) {}

int Characteristic::GetDamage(const Weapon& weapon) const {
    return strength + weapon.getDamage();
}

// Реализация класса MyMath

int MyMath::callCount = 0;  // Инициализация статического поля

int MyMath::Add(int a, int b) {
    callCount++;
    return a + b;
}

int MyMath::Sub(int a, int b) {
    callCount++;
    return a - b;
}

int MyMath::Mult(int a, int b) {
    callCount++;
    return a * b;
}

double MyMath::Div(int a, int b) {
    callCount++;
    if (b != 0) {
        return static_cast<double>(a) / b;
    }
    else {
        std::cerr << "Ошибка: деление на ноль!" << std::endl;
        return 0;
    }
}

int MyMath::getCallCount() {
    return callCount;
}

// Основная функция (main)
int main() {
    setlocale(LC_ALL, "Russian");

    // 1–4. Проверка полей и методов Weapon
    Weapon sword("АНИГИЛЯТОР", 2.5, 15);
    std::cout << "\n--- Проверка GET/SET методов ---" << std::endl;
    std::cout << "Имя: " << sword.getName() << std::endl;
    std::cout << "Вес: " << sword.getVes() << " кг" << std::endl;
    std::cout << "Урон (до): " << sword.getDamage() << std::endl;

    sword.setDamage(20);
    std::cout << "Урон (после): " << sword.getDamage() << std::endl;

    sword.printInfo();

    // 5–8. Проверка Characteristic и GetDamage
    Characteristic str(10);  // Сила = 10
    std::cout << "\n--- Проверка Characteristic ---" << std::endl;
    std::cout << "Суммарный урон (сила + урон оружия): "
        << str.GetDamage(sword) << std::endl;

    // 9–13. Проверка MyMath
    std::cout << "\n--- Проверка MyMath ---" << std::endl;
    std::cout << "5 + 3 = " << MyMath::Add(5, 3) << std::endl;
    std::cout << "10 - 4 = " << MyMath::Sub(10, 4) << std::endl;
    std::cout << "6 * 7 = " << MyMath::Mult(6, 7) << std::endl;
    std::cout << "15 / 3 = " << MyMath::Div(15, 0) << std::endl;


    std::cout << "\nКоличество вызовов методов MyMath: "
        << MyMath::getCallCount() << std::endl;

    return 0;
}
