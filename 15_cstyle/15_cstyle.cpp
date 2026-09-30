#include <iostream>
using namespace std;

int main()
{
	char text[100];

	cout << "Введіть рядок: ";
	cin.getline(text, 100);

	int a = 0;
	int o = 0;

	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == 'a')
			a++;

		if (text[i] == 'o')
			o++;
	}

	if (a > o)
		cout << "Букв a більше" << endl;
	else if (o > a)
		cout << "Букв o більше" << endl;
	else
		cout << "Кількість однакова" << endl;
}







int main()
{
	char text[100];

	cout << "Введіть рядок: ";
	cin.getline(text, 100);

	int letters = 0;
	int digits = 0;
	int spaces = 0;

	for (int i = 0; text[i] != '\0'; i++)
	{
		if ((text[i] >= 'A' && text[i] <= 'Z') ||
			(text[i] >= 'a' && text[i] <= 'z'))
		{
			letters++;
		}

		if (text[i] >= '0' && text[i] <= '9')
		{
			digits++;
		}

		if (text[i] == ' ')
		{
			spaces++;
		}
	}

	cout << "Латинських букв: " << letters << endl;
	cout << "Цифр: " << digits << endl;
	cout << "Пробілів: " << spaces << endl;
}








int main()
{
	char text[100];

	cout << "Введіть рядок: ";
	cin.getline(text, 100);

	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] >= 'A' && text[i] <= 'Z')
		{
			text[i] = text[i] + 32;
		}
		else if (text[i] >= 'a' && text[i] <= 'z')
		{
			text[i] = text[i] - 32;
		}
	}

	cout << "Результат: " << text << endl;
}








int Length(char text[])
{
	int length = 0;

	for (int i = 0; text[i] != '\0'; i++)
	{
		length++;
	}

	return length;
}

int main()
{
	char text[100];

	cout << "Введіть рядок: ";
	cin.getline(text, 100);

	cout << "Довжина рядка: " << Length(text) << endl;
}