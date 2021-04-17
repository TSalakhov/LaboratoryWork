#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
using namespace std;


void getSum(double arr[101])
{
	bool a = true;
	short n, s;
	arr[0] = cos(1) * cos(1);;
	arr[1] = -(sin(1) * sin(1));
	double sum=0;
	for (int i = 2; i < 101; i++)
	{
		arr[i] = 2 * arr[i - 1] - arr[i - 2];
	}
	for (int i = 0; i < 101; i++)
	{
		if (arr[i] <= 2)
		{
			cout << arr[i] << "\n";
			sum += arr[i];
		}
	}
	while (a)
	{
		cout << "Выберите способ ввода информации,Консоль-1,Файл-0: ";
		cin >> s;
		cout << "Выберите способ вывода информации,Консоль-1,Файл-0: ";
		cin >> n;
		cout.precision(10);
		if (s == 0)
		{
			ifstream fi("Input.txt");
			if (n == 1)
			{
				cout << "Сумма элементов больше 2: " << sum << "\n";
				a = false;
			}
			else if (n == 0)
			{
				ofstream f;
				f.open("Output.txt");
				f.precision(10);
				f<< "Сумма элементов больше 2: " << sum  << "\n";
				a = false;
			}
			else
			{
				cout << "Неверное значение!Попробуйте еще раз:\n";
			}
		}
		else if (s == 1)
		{
			if (n == 1)
			{
				cout << "Сумма элементов больше 2: " << sum << "\n";
				cout << "\nВы хотите повторить вывод данных?Да-1 Нет-0: ";
				cin >> n;
				if (n == 0)
				{
					a = false;
				}
			}
			else if (n == 0)
			{
				ofstream f;
				f.open("Output.txt");
				f << "Сумма элементов больше 2: " << sum << "\n";
				cout << "\nВы хотите повторить вывод данных?Да-1 Нет-0: ";
				cin >> n; 
				if (n == 0)
				{
					a = false;
				}
			}
			else
			{
				cout << "Неверное значение!Попробуйте еще раз \n";
			}
		}
		else
		{
			cout << "Неверное значение!Попробуйте еще раз \n";
		}
	}
}


int main()
{
	double arr[101];
	getSum(arr);
	return 0;
}