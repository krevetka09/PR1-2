#include <iostream>

int main()
{

	system("chcp 1251");
	system("title Foot to Metr Table");
	system("cls");
	
	double foot, metr;
	int counter = 0;
	std::cout << "Таблица футы-метры\n";
	std::cout << "Футы\tМетры\n";
	foot = 1.0;
	int i = 0;
	for(foot; foot <= 100; foot++)
	{
		
		if(i == 25) 
		{
			std::cout << "\n";
			i = 0;
		}
		metr =  foot / 3.28;
		std::cout << foot << "\t" << metr << "\n";
		i++;
	}
	system("pause");
	return 0;
}