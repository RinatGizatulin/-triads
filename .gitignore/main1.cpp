#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;  

int randomRange(int low, int high)
{
    return rand() % (high - low + 1) + low;
}

int main()
{
	setlocale (LC_ALL,"Russian");
	int i=0, j = 0, k = 0, triada_a = 0, triada_b = 0, triada_c = 0;
    string mas;					 
    ifstream file("txt.txt"); 					// ���� �� �������� ������ 
    while(getline(file, mas))  				// ���� �� ��������� ����� ����� ������ ��������� ������ � ����������
    file.close(); 						// ��������� ����


	while (i <= mas.length())			//������� ���-�� ����� a
	{
		if( mas[i] == 'a' && mas[i+1] == 'a' && mas[i+2] == 'a')
		{
			triada_a++;
			i = i + 3;
		}
		else
			i = i + 1;
	}
	
	while (j <= mas.length())			//������� ���-�� ����� b
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
	
	while (k <= mas.length())			//������� ���-�� ����� c
	{
		if( mas[k] == 'c' && mas[k+1] == 'c' && mas[k+2] == 'c')
		{
			triada_c++;
			k = k + 3;
		}
		else
			k = k + 1;
	}
	
	cout << "���������� � ����� - " << triada_a << endl;
	cout << "���������� b ����� - " << triada_b << endl;
	cout << "���������� � ����� - " << triada_c << endl;
	system("pause");
	return 0;
}
