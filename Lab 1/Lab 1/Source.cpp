#include<iostream>
#include<fstream>
using namespace std;


void getTable()
{
	cout << "Выберите  способ вывода информации,Консоль-1,Файл-0: ";
	short n;
	cin >> n;
	bool a = true;
	while (a)
	{
		if (n == 1)
		{
			cout << "Цельсий      " << "Фаренгейт\n";
			for (int i = 0; i < 101; i++)
			{
				cout << "-------------------------\n";
				cout << i << "            " << 9 / 5 * i + 32 << '\n';
			}
			cout << "Вы хотите повторить вывод данных?Да-1 Нет-0: ";
			cin >> n;
			if (n==0)
			{
				a = false;
			}
		}
		else
		{
			ofstream f;
			f.open("Output.txt");
			f << "Цельсий      " << "Фаренгейт\n";
			for (int i = 0; i < 101; i++)
			{
				f << "-------------------------\n";
				f << i << "            " << 9 / 5 * i + 32 << '\n';
			}
			a = false;
		}
	}

}


int main()
{
	setlocale(LC_ALL, "Russian");
	getTable();
	return 0;
}