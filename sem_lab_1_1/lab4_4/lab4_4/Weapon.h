#pragma once


#include <string>

// Предварительное объявление класса для friend
class Characteristic;


// Класс Weapon
class Weapon {
private:
    std::string name;
    double ves;
    int damage;

public:
    Weapon(const std::string& name, double weight, int damage);
    ~Weapon();//Деструр

    // GET-методы (пункт 2)
    std::string getName() const;
    double getVes() const;
    int getDamage() const;

    // SET-метод для урона (пункт 3)
    void setDamage(int newDamage);


    void printInfo() const;
    bool canLift(double maxWeight) const;
    double totalWeight(const Weapon& other) const;
    double totalWeight(double otherWeight) const;
    double totalWeightRefactored(const Weapon& other) const;

    // Дружественный класс (пункт 6)
    friend class Characteristic;
};

// Класс Characteristic
class Characteristic {
private:
    int strength;

public:
    Characteristic(int strength);  // Конструктор (пункт 5)

    // Метод GetDamage (пункт 7)
    int GetDamage(const Weapon& weapon) const;
};

// Класс MyMath
class MyMath {
private:
    static int callCount;  // Статическое поле (пункт 10)

public:
    static int Add(int a, int b);
    static int Sub(int a, int b);
    static int Mult(int a, int b);
    static double Div(int a, int b);

    static int getCallCount();  // Для проверки счётчика
};
