#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
//19

int main()
{
	setlocale(LC_CTYPE, "ukr");

	vector<int> Array = { 0 };
	
	//��������� ��������
	int a, b, i;
	
	cout << "������ ����� �� ������ ������ � �����?" << endl;
	cin >> a;
	for (i=0; i != a; i++)
	{
		cout << "��� ����� �� ������ ������ � �����?" << endl;
		cin >> b;
		Array.push_back(b);
	}
	//����� ��������
	int g;
	cout << endl;
	cout << "��� ����� �� ������ ������ � �����?" << endl;
	cin >> g;

	if (g == Array[i])
		cout << "�����  " << g << "  ->  "<< i <<"-�� �������" <<endl;

	else
		cout << "�������� �������� ���� " << endl;
	//����� ������
	cout << endl;
	cout << "����� ������ - " << Array.size() << endl;

	//��������� �� �����
	if (Array.empty())
		cout << "����� ������ " << endl;
		
	else 
		for (int n : Array) 
		{
		std::cout << n << '\n';
		}


	//���� � ����
	fstream f;

	std::ifstream in("C:\\VS\\OOP\\GitHub\\OOP_Lab_07\\in.txt");
	f.open("C:\\VS\\OOP\\GitHub\\OOP_Lab_07\\out.txt", fstream::out);
	
	if (f == NULL)
	{
		cout << "������� ������ � �������";
		return 0;
	}
	else 
	{
		cout << "���� �������" << std::endl;
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