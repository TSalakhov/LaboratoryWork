#include<iostream>
#include<fstream>
#include<string>
using namespace std;


void getTable()
{
	bool a = true;
	short n, s, numb;
	while (a)
	{
		cout << "Выберите способ ввода информации,Консоль-1,Файл-0: ";
		cin >> s;
		cout << "Выберите способ вывода информации,Консоль-1,Файл-0: ";
		cin >> n;
		if (s == 0)
		{
			ifstream fi("Input.txt");
			if (n == 1)
			{
				cout << "Цельсий      " << "Фаренгейт\n";
				for (int i = 0; i < 101; i++)
				{
					    fi >> numb;
						cout << "-------------------------\n";
						cout << numb << "C            " << 9 / 5 * numb + 32 << "F\n";
				}
				a = false;
			}
			if (n == 0)
			{
				ofstream f;
				f.open("Output.txt");
				int numb;
				f << "Цельсий      " << "Фаренгейт\n";
				for (int i = 0; i < 101; i++)
				{
					    fi >> numb;
						f << "-------------------------\n";
						f << numb << "C            " << 9 / 5 *numb + 32 << "F\n";
				}
				a = false;
			}
			else
			{
				cout << "Неверное значение!\n";
			}
		}
		if (s==1)
		{
			if (n == 1)
			{
				cout << "Цельсий      " << "Фаренгейт\n";
				for (int i = 0; i < 101; i++)
				{
					cout << "-------------------------\n";
					cout <<i << "C            " << 9 / 5 * i + 32 << "F\n";
				}
				cout << "\nВы хотите повторить вывод данных?Да-1 Нет-0: ";
				cin >> n;
				if (n == 0)
				{
					a = false;
				}
			}
			if (n == 0)
			{
				ofstream f;
				f.open("Output.txt");
				f << "Цельсий      " << "Фаренгейт\n";
				for (int i = 0; i < 101; i++)
				{
					f << "-------------------------\n";
					f << i << "C            " << 9 / 5 * i + 32 << "F\n";
				}
				cout << "\nВы хотите повторить вывод данных?Да-1 Нет-0: ";
				cin >> n;
				if (n == 0)
				{
					a = false;
				}
			}
			else
			{
				cout << "Неверное значение!\n";
			}
		}
		else
		{
			cout << "Вы ввели неверное значение!\n";
		}
	}
}


int main()
{
<<<<<<< HEAD
=======
	setlocale(LC_ALL, "Rus");
>>>>>>> 191555bcd27b17144c77f6b0c4d332b6efed22ef
	getTable();
	return 0;
}