#include <iostream>
#include <ctime>
using namespace std;

int rows = 2;
int columns = 10;
int maxMines = 10;
int matrix[10][10];

void Clear(int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

void Draw(int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int NumberOfMines(int r, int c)
{
	int counter = 0;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (matrix[i][j] == 1);
			counter++;
		}
	}
}

void SetMines(int r, int c)
{
	int m = 0;
	while (m < maxMines)
	{
		int x = rand() % c;
		int y = rand() % r;
		if (matrix[x][y] != 1)
		{
			m++;
			matrix[x][y] = 1;
		}
	}
}

bool Attack(int x, int y)
{
	if (matrix[x][y] == 1)
	{
		matrix[x][y] = 2;
		return true;
	}
	return false;
}

int main()
{
	cout << "Enter the number of rows..." << endl;
	cin >> rows;
	cout << "Enter the number of columns..." << endl;
	cin >> columns;
	Clear(rows, columns);
	Draw(rows, columns);
	cout << "----------------------------------------------------------" << endl;
	SetMines(rows, columns);
	Draw(rows, columns);
	Attack(1, 1);
	Draw(rows, columns);
	cout << "Number of left mines is: " << NumberOfMines(rows, columns) << endl;
	system("pause");
	return 0;
}