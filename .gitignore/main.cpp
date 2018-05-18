//Дана бесконечная рандомная последовательность из 3 символов: a, b, c
//посчитать количество триад(трех символов, идущих подряд)
//каждую триаду считать отдельно и результат вывести
#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	setlocale (LC_ALL,"Russian");
	int i=0, j = 0, k = 0, triada_a = 0, triada_b = 0, triada_c = 0;
	int n = 1000000;     						// количество элементов в массиве
	char *mas = new char[n];
	
	for (int l = 0; l < n; l++)     					//заполнение массива
	{
		mas[l] = char(randomRange('a', 'c'));	
	}

	while (i <= mas.length())			//подсчет кол-ва триад a
	{
		if( mas[i] == 'a' && mas[i+1] == 'a' && mas[i+2] == 'a')
		{
			triada_a++;
			i = i + 3;
		}
		else
			i = i + 1;
	}
	
	while (j <= mas.length())			//подсчет кол-ва триад b
	{
		if( mas[j] == 'b' && mas[j+1] == 'b' && mas[j+2] == 'b')
		{
			triada_b++;
			j = j + 3;
		}
		else
		{
			j = j + 1;
		}
	}
	
	while (k <= mas.length())			//подсчет кол-ва триад c
	{
		if( mas[k] == 'c' && mas[k+1] == 'c' && mas[k+2] == 'c')
		{
			triada_c++;
			k = k + 3;
		}
		else
			k = k + 1;
	}
	
	cout << "Количествово триад буквы a - " << triada_a << endl;
	cout << "Количествово триад буквы b - " << triada_b << endl;
	cout << "Количествово триад буквы c - " << triada_c << endl;
	system("pause");
	return 0;
}
