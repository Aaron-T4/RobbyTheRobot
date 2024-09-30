#include <iostream>


int main()
{
	for (int i = 1; i < 5; i++)
	{
		std::cout << "Table for " << i << std::endl;
		for (int j = 1; j < 21; j++)
		{
			
			std::cout << i << "x" << j << " = " << i * j << std::endl;
		}

	}

	system("Pause");
}


	/*for (int i = 99; i > 0; i--)
	{


		std::cout << i << "bottles of beer on the wall, " << i << "bottles of beer\n";
		std::cout << "take one down, pass it around," << i  << "bottles of beer on the wall\n";

		if (i-1 < 1)
		{
			std::cout << "no more bottle of beer on the wall, no more bottles of beer. go to the store and buy some more, 99 bottles of beer on the wall";
		}

	}
	system("pause");
	*/

