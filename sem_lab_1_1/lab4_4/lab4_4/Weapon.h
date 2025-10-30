#pragma once


#include <string>

// ��������������� ���������� ������ ��� friend
class Characteristic;


// ����� Weapon
class Weapon {
private:
    std::string name;
    double ves;
    int damage;

public:
    Weapon(const std::string& name, double weight, int damage);
    ~Weapon();//�������

    // GET-������ (����� 2)
    std::string getName() const;
    double getVes() const;
    int getDamage() const;

    // SET-����� ��� ����� (����� 3)
    void setDamage(int newDamage);


    void printInfo() const;
    bool canLift(double maxWeight) const;
    double totalWeight(const Weapon& other) const;
    double totalWeight(double otherWeight) const;
    double totalWeightRefactored(const Weapon& other) const;

    // ������������� ����� (����� 6)
    friend class Characteristic;
};

// ����� Characteristic
class Characteristic {
private:
    int strength;

public:
    Characteristic(int strength);  // ����������� (����� 5)

    // ����� GetDamage (����� 7)
    int GetDamage(const Weapon& weapon) const;
};

// ����� MyMath
class MyMath {
private:
    static int callCount;  // ����������� ���� (����� 10)

public:
    static int Add(int a, int b);
    static int Sub(int a, int b);
    static int Mult(int a, int b);
    static double Div(int a, int b);

    static int getCallCount();  // ��� �������� ��������
};
