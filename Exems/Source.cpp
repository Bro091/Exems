#include <iostream>
#include <string>


void act1(char* name) {
	std::cout << " Create file..." << name;
}
void act2(char* name) {
	std::cout << " Delete file..." << name;
}
void act3(char* name) {
	std::cout << " Read file..." << name;
}
void act4(char* name) {
	std::cout << " Mode file..." << name;
}
void act5(char* name) {
	std::cout << " Close file..." << name;
}

int* max(int* a, int* b);

template <typename T>
void order(T& a, T& b);

int x;
int& setx();

int main() {
	setlocale(LC_ALL, "Ru");
	//������ 74
	/*void (*MenuAct[5])(char*) = {act1, act2, act3, act4, act5};
	int number;
	char FileName[30];
	std::cout << "\n 1 - Create";
	std::cout << "\n 2 - Delete";
	std::cout << "\n 3 - Read";
	std::cout << "\n 4 - Mode";
	std::cout << "\n 5 - Close";
	while (1)
	{
		std::cout << "\n\nSelect action: ";
		std::cin >> number;
		if ((number >= 1) && (number <= 5))
		{
			break;
		}
		else
		{
			std::cout << "\nWrong number!";
		}
	}
	if (number != 5)
	{
		std::cout << "Enter file name: ";
		std::cin >> FileName;
		(*(MenuAct + number - 1))(FileName);
	}
	else
		std::cout << "End of programm";*/
	

	//������ 75
	/*long num;
	long* pnum = &num;
	std::cout << "pnum = " << pnum << std::endl;
	long* pnum_ = pnum - 8;
	std::cout << "pnum_ = " << pnum_ << std::endl;
	std::cout << "������� ����� �������� " << pnum << " � " << pnum_ 
		<< " ����� -> " << pnum - pnum_ << " ����" << std::endl;*/

	// ������ 78
	/*int n{5};
	int m{ 4 };
	int* pn = &n;
	int* pm = &m;
	std::cout << pm << std::endl;
	std::cout << pn << std::endl;
	std::cout << *pm << std::endl;
	std::cout << *pn << std::endl;
	std::cout << "max: " << *max(&n, &m) << std::endl;*/
	
	//  ������ 124
	/*char str[] = "Hello world!";
	for (int i = 0; i < str.length(); i++)
	{
		std::cout << str[i] << std::endl;
	}*/


	//������ 94
	/*int num1 = 1, num2 = 2;
	
	order(num1, num2);
	std::cout << "num1 = " << num1 << " num2 = " << num2 << std::endl;
	num1 = 4, num2 = 3;
	order(num1, num2);
	std::cout << "num1 = " << num1 << " num2 = " << num2 << std::endl;

	setx() = 92;
	std::cout << "x =  " << x << std::endl;*/


	// ������ 31

	/*const int n = 5;
		int a[n], i, j, k, tmp;

		// ���� �������
		for (i = 0; i < n; i++)
		{
			std::cout << "������� " << i << " �������: ";
			std::cin >> a[i];
		}

		std::cout << "������� k: ";
		std::cin >> k;

		// ������������
		for (i = 0; i < k; i++)
		{
			for (j = n - 1; j >= 0; j--)
			{
				if (j == n - 1)
					tmp = a[n - 1];
				else
					a[j + 1] = a[j];
			}
			a[0] = tmp;
		}

		// ����� ���-��
		std::cout << "���������: " << std::endl;
		for (i = 0; i < n; i++)
		{
			std::cout << a[i] << ' ';
		}

		std::cout << std::endl;*/

	// ������ 133

	/*struct str {
		int a = 1;
		int b = 2;
	};
	str s;
	std::cout << s.a << std::endl;
	std::cout << s.b << std::endl;
	str* p_s = &s;
	std::cout << p_s->a << std::endl;
	std::cout << p_s->b << std::endl;*/

	// ������ 139
	
	/*struct str {
		int a = 1;
		int b = 2;
	};

	str s;
	struct str1 {
		int z = 0;
		str* p_s;
	};
	str1 s1;
	s1.p_s = &s;
	std::cout << s1.z << ' ' << s1.p_s->a << ' ' << s1.p_s->b << std::endl;*/





	return 0;
}


int& setx() 
{
	return x;

}


template <typename T>
void order(T& a, T& b) 
{
	if(a > b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
}


int* max(int* a, int* b) 
{
	if (*a > *b)
		return a;
	else
		return b;

}