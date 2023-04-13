#pragma once
#include "constants.h"
#include "stdafx.h"

template <typename T> void Search(T arr[], const int n);
template <typename T> void Search(T arr[ROWS][COLS], const int  ROWS, const int COLS);



template <typename T> void Search(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;// �����������, ��� ������� ����� �� ����������� �����, �� ����� ���������
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; // ���������� ��, ��� ����� ��� �����������
				break;
			}
		}
		if (met_before) continue;
		int repeat_qty = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				repeat_qty++;
			}

		}
		if (repeat_qty)printf("�������� %i ����������� %i ���\n", arr[i], repeat_qty);
		//if (repeat_qty) cout << "����� " << arr[i] << " ����������� " << repeat_qty << " ���(�)" << endl;

	}
}
template <typename T> void Search(T arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			// ��������� ���������� �� ������� �����
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before) break;
			}
			// ���� ������� ���������� �����, �� �� ��� ������ ��� �� ����� � ������ ��� ����� ������ �� �����, ������� ���������� ���� ���
			if (met_before) continue;
			//���� �� ������� ����� �� ����������, �� ����� �������� ������� ��� �� ����������� � ������� ��� �� �����
			int count = 0; // ������� ���������� 
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;

					}
				}
			}
			if (count)printf("�������� %i ����������� %i ���\n", arr[i][j], count);
		}
	}


}
