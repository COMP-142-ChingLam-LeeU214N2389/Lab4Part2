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
const int MAX_COL = 2;	

//function prototype
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow); 
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);

/** 
* Present to the user with the valid options
* return Returns 0
*/
int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	const int MAX_ROW = 3;

	double matrix[MAX_ROW][MAX_COL]={0};
	int choice,column,row;

	do {
		cout << "\n1. Sum of row"
			<< "\n2. Sum of column"
			<< "\n3. Fill with random numbers"
			<< "\n4. Print the matrix"
			<< "\n5. Fill matrix"
			<< "\n6. Fill maximum element"
			<< "\n7. Find minimum element"
			<< "\n8. Is it a square matrix?"
			<< "\n9. Exit"
			<< "\nEnter your choice: ";
		cin >> choice;
		if (1 == choice) {
			cout << "\nWhich row are you looking for?";
			cin >> row;
			cout << "\nSum of row " << row << " is "
				<< sumOfRow(matrix, row, MAX_ROW);
		}
		if (2 == choice) {
			cout << "\nWhich column are you looking for?";
			cin >> column;
			cout << "\nSum of column " << column << " is "
				<< sumOfCol(matrix, column, MAX_ROW);
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
* Print the matrix generated from the function fillWithRandomMum
* @param mat The matrix generated from the function fillWithRandomNum
* @param maxRow The number of rows is in the matrix 
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow) {
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			cout << i<<" ";
		}
		cout << endl;
	}
}

/**
* sum of the columns
* @param mat The matix
* @param column The column chosen by the user
* @param maxRow The number of rows is in the matrix
* @return Retuns sum of the column cosen by the user
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
	double total = 0;
	for (int i = 1; i < maxRow; i++) {
		total += mat[i][column];
	}
	return total;
}

/**
* sum of the rows
* @param mat The matix 
* @param row The row chosen by the user
* @param maxRow The number of rows in the matrix
* @return Retuns sum of the row chosen by the user
*/
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
	double total = 0;
	for (int i = 1; i < maxRow; i++) {
		total += mat[i][row];
	}
	return total;
}