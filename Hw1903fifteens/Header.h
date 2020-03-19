#pragma once
#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

int RowPos = 2;
int ColPos = 1;

void MoveUp(char arr[ROWS][COLS], const int ROWS, const int COLS);
void MoveDown(char arr[ROWS][COLS], const int ROWS, const int COLS);
void MoveRight(char arr[ROWS][COLS], const int ROWS, const int COLS);
void MoveLeft(char arr[ROWS][COLS], const int ROWS, const int COLS);
int WinCondition(char arr[ROWS][COLS], char win[ROWS][COLS], const int ROWS, const int COLS);
void Randomise1(char arr[ROWS][COLS], const int ROWS, const int COLS);
void Randomise2(char arr[ROWS][COLS], const int ROWS, const int COLS);
void Randomise3(char arr[ROWS][COLS], const int ROWS, const int COLS);
