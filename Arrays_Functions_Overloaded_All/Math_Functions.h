#pragma once
#include "constants.h"


template <typename T> T Sum(const T arr[], const int n);
template <typename T> T Sum(const T arr[ROWS][COLS], const int  ROWS, const int COLS);


template <typename T> double Avg(const T arr[], const int n);
template <typename T> double Avg(const T arr[ROWS][COLS], const int  ROWS, const int COLS);





template <typename T> T Sum(const T arr[], const int n)
{
	//Вычисление суммы элементов массива:
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template <typename T> T Sum(const T arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	T Sum_arr = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum_arr += arr[i][j];

		}
		//cout << endl;
	}
	return Sum_arr;

}


template <typename T> double Avg(const T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template <typename T> double Avg(const T arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);

}
