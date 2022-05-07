// Lab4Part2.cpp
/** \file Lab4Part2.cpp
* \brief matrix program
* \author Ching Lam Lee
* date 5.6.2022
*/

#include <iostream>
#include <cstdlib>
using namespace std;

//global constants
const int MAX_COL = 120;

//function prototype
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow); 
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);

//cm todo
int main()
{
	const int MAX_ROW = 5;
	double matrix[MAX_ROW][MAX_COL];
	
	int choice;
	do {
		cout << "";
		cout << "\n1) Print Matrix";
		cout << "\n2) Sum of column";
		cout << "\n3) Sum of a row";
		cout << "\n4) Quit";
		cout << "\nEnter your Options: ";
		cin >> choice;
		if (1 == choice) {
			printMatrix(matrix,MAX_ROW);
		}
	} while (5 != choice);
	
	return 0;
}

/**
* print the matrix generated from the function fillWithRandomMum
* @param mat The matrix generated from the function fillWithRandomNum
* @param maxRow row of the matrix
*/
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow) {
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			mat[i][j]=1;	//todo
		}
	}
}

/**
* print the matrix generated from the function fillWithRandomMum
* @param mat The matrix generated from the function fillWithRandomNum
* @param maxRow row of the matrix 
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow) {
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			cout << i<<'\t';
		}
		cout << endl;
	}
}



