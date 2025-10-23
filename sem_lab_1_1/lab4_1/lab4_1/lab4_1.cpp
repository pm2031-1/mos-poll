// lab4_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
class Weapon {
public:
	string name;
	int damage;
	float ves;
	Weapon(string weaponName, int weaponDamage, double weaponWeight) {
		name = weaponName;
		damage = weaponDamage;
		ves = weaponWeight;
	}

	// Конструктор без параметров
	
	Weapon() : Weapon("SWORD", 20, 1.5) {}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	//Weapon sword("BIG SWORD", 30, 2.5);
	Weapon defaultWeapon;

	Weapon m;
	m.name = "Big SWORD";
	m.damage = 1000;
	m.ves = 12.5f;
	cout <<"neme "<< m.name << endl;
	cout << "damege " << m.damage << endl;
	cout << "ves " << m.ves << endl;

	cout << "Второе "<<"\n";
	cout << "neme " << defaultWeapon.name << endl;
	cout << "damege " << defaultWeapon.damage << endl;
	cout << "ves " << defaultWeapon.ves << endl;

}


	

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
