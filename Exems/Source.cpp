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

int main() {
	setlocale(LC_ALL, "Ru");
	//Вопрос 74
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
	

	//Вопрос 75
	/*long num;
	long* pnum = &num;
	std::cout << "pnum = " << pnum << std::endl;
	long* pnum_ = pnum - 8;
	std::cout << "pnum_ = " << pnum_ << std::endl;
	std::cout << "Разница между адресами " << pnum << " и " << pnum_ 
		<< " равна -> " << pnum - pnum_ << " байт" << std::endl;*/

	// Вопрос 78
	/*int n{5};
	int m{ 4 };
	int* pn = &n;
	int* pm = &m;
	std::cout << pm << std::endl;
	std::cout << pn << std::endl;
	std::cout << *pm << std::endl;
	std::cout << *pn << std::endl;
	std::cout << "max: " << *max(&n, &m) << std::endl;*/
	
	char str[] = "Hello world!";
	for (int i = 0; i < str.length(); i++)
	{
		std::cout << str[i] << std::endl;
	}

	return 0;
}
int* max(int* a, int* b) 
{
	if (*a > *b)
		return a;
	else
		return b;

}