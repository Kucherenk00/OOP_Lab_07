#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
//19

int main()
{
	setlocale(LC_CTYPE, "ukr");

	vector<int> Array = { 0 };
	
	//Додавання елементів
	int a, b, i;
	
	cout << "Скільки чисел ви хочете додати у масив?" << endl;
	cin >> a;
	for (i=0; i != a; i++)
	{
		cout << "Яке число ви хочете додати у масив?" << endl;
		cin >> b;
		Array.push_back(b);
	}
	//Пошук елемента
	int g;
	cout << endl;
	cout << "Яке число ви хочете знайти у масиві?" << endl;
	cin >> g;

	if (g == Array[i])
		cout << "Число  " << g << "  ->  "<< i <<"-ий елемент" <<endl;

	else
		cout << "Шуканого елемента немає " << endl;
	//Розмір масиву
	cout << endl;
	cout << "Розмір масиву - " << Array.size() << endl;

	//Виведення на екран
	if (Array.empty())
		cout << "Масив пустий " << endl;
		
	else 
		for (int n : Array) 
		{
		std::cout << n << '\n';
		}


	//Вивід в файл
	fstream f;

	std::ifstream in("C:\\VS\\OOP\\GitHub\\OOP_Lab_07\\in.txt");
	f.open("C:\\VS\\OOP\\GitHub\\OOP_Lab_07\\out.txt", fstream::out);
	
	if (f == NULL)
	{
		cout << "Помилка роботи з фвйлами";
		return 0;
	}
	else 
	{
		cout << "Файл відкрито" << std::endl;
	}

	int h;
	for (int h = 0; h < a; h++)
	{
		f << Array[h] << endl;
	}
	f.close();

	getchar(); getchar();
	return 0;
}