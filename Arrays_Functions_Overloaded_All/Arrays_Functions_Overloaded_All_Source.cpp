#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Math_Functions.h"
#include "Min_Max.h"
#include "Sort.h"
#include "Search.h"
#include "Shifts.h"


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl << endl;
	Sort(arr, n);
	Print(arr, n);
	int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);

	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);

	cout << "Сумма элементов массива: " << Sum(d_arr, SIZE) << endl;
	cout << "Средне-арифметическое значение элементов массива: " << Avg(d_arr, SIZE) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(d_arr, SIZE) << endl << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, SIZE) << endl << endl;
	Sort(d_arr, SIZE);
	Print(d_arr, SIZE);
	cout << endl;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(d_arr, SIZE, number_of_shifts);
	//Print(d_arr, SIZE);
	//shiftRight(d_arr, SIZE, number_of_shifts);
	//Print(d_arr, SIZE);

	int i_arr_2[ROWS][COLS];


	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов двумерного массива: " << Avg(i_arr_2, ROWS, COLS) << endl << endl;
	cout << "Минимальное значение в двумерном массиве:  " << minValueIn(i_arr_2, ROWS, COLS) << endl << endl;
	cout << "Максимальное значение в двумерном массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}













