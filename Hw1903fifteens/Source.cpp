#include "Header.h"

void main()
{
	cout << "You are playing fifteens!!!\n"
		<< "Press  w/a/s/d  for making some turns\n";
	srand(time(0));
	char arr[ROWS][COLS] =
	{
	{ '1','2' ,'3' },
	{ '4', '5', '6'},
	{ '7',' ','8' },
	};
	char win[ROWS][COLS] =
	{
	{ '1','2' ,'3' },
	{ '4', '5', '6'},
	{ '7','8',' ' },
	};
	int answer4 = 0;
	cout << "\n choose difficulty 1-ULTRA EASY(TEST),2-CASUAL,3-200iqDonbassPlayer";
	cin >> answer4;
	switch (answer4)
	{
	default:cout << "Wrong symbol!";
	case 1:Randomise1(arr, ROWS, COLS); break;
	case 2:Randomise2(arr, ROWS, COLS); break;
	case 3:Randomise3(arr, ROWS, COLS); break;
	}
	int RowPos = 2;
	int ColPos = 1;
	srand(time(0));
	bool end = false;
	do
	{
		for (int i = 0; i < ROWS; i++)
		{
			cout << "|";
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << "|";
			}
			cout << endl;
		}
		char answer = _getch();
		switch (answer)
		{
		case 'W':case 'w':MoveUp(arr, ROWS, COLS); break;
		case 'S':case 's':MoveDown(arr, ROWS, COLS); break;
		case 'D':case 'd':MoveRight(arr, ROWS, COLS); break;
		case 'A':case 'a':MoveLeft(arr, ROWS, COLS); break;
		default:cout << "Wrong symbol!" << endl; break;
		}
		int answer2 = WinCondition(arr, win, ROWS, COLS);
		system("cls");
		if (answer2 == 1)
		{
			cout << "You won! ty for game" << endl;
			end = true;
		}
	} while (end == false);
}
void Randomise1(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < 5; i++)
	{
		int a = 1 + rand() % 4;
		switch (a)
		{
		case 1:MoveUp(arr, ROWS, COLS); break;
		case 2:MoveDown(arr, ROWS, COLS); break;
		case 3:MoveRight(arr, ROWS, COLS); break;
		case 4:MoveLeft(arr, ROWS, COLS); break;
		}
	}
}
void Randomise2(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < 50; i++)
	{
		int a = 1 + rand() % 4;
		switch (a)
		{
		case 1:MoveUp(arr, ROWS, COLS); break;
		case 2:MoveDown(arr, ROWS, COLS); break;
		case 3:MoveRight(arr, ROWS, COLS); break;
		case 4:MoveLeft(arr, ROWS, COLS); break;
		}
	}
}
void Randomise3(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < 5000; i++)
	{
		int a = 1 + rand() % 4;
		switch (a)
		{
		case 1:MoveUp(arr, ROWS, COLS); break;
		case 2:MoveDown(arr, ROWS, COLS); break;
		case 3:MoveRight(arr, ROWS, COLS); break;
		case 4:MoveLeft(arr, ROWS, COLS); break;
		}
	}
}
void MoveUp(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int vP = RowPos;
	if (vP + 1 < 3 && vP >= 0)
	{
		arr[RowPos][ColPos] = arr[RowPos + 1][ColPos];
		arr[RowPos + 1][ColPos] = ' ';
		RowPos += 1;
	}
}
void MoveDown(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int vP = RowPos;
	if (vP + 1 <= 3 && vP > 0)
	{
		arr[RowPos][ColPos] = arr[RowPos - 1][ColPos];
		arr[RowPos - 1][ColPos] = ' ';
		RowPos -= 1;
	}
}
void MoveRight(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int hP = ColPos;
	if (hP + 1 <= 3 && hP > 0)
	{
		arr[RowPos][ColPos] = arr[RowPos][ColPos - 1];
		arr[RowPos][ColPos - 1] = ' ';
		ColPos -= 1;
	}
}
void MoveLeft(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int hP = ColPos;
	if (hP + 1 < 3 && hP >= 0)
	{
		arr[RowPos][ColPos] = arr[RowPos][ColPos + 1];
		arr[RowPos][ColPos + 1] = ' ';
		ColPos += 1;
	}
}
int WinCondition(char arr[ROWS][COLS], char win[ROWS][COLS], const int ROWS, const int COLS)
{
	int answer3;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] == win[i][j])
				answer3 = 1;
			else
				return -1;
		}
	}
	return 1;
}
