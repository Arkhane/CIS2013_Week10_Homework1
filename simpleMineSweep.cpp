#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;


const int rows = 10;
const int elements = 10;
int matrix[rows][elements];


void Clear()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < elements; j++)
		{
			matrix[i][j] = 0;
		}

	}
}

void Show()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < elements; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;

	}
}


int main()
{
	//ifstream theFile("players.txt");

	Clear();
	Show();

	systeam("pause");
	return 0;
}