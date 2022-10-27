// Programmer: Jake Thompson
// Description: Bronson Exercises Project 9 
// Date: 10/11/2022
#include <iostream>
#include <iomanip>
using namespace std;

void printMatrix(int matrix[][5], int N_ROWS, int N_COLUMNS);
void printFinalGradeCalc(int matrix [][5], int N_ROWS, int N_COLUMNS);

int main() {
  const int N_ROWS = 5;
  const int N_COLUMNS = 5;
  int grade[N_ROWS][N_COLUMNS] =  {{1, 100, 100, 100, 100},
                                   {2, 100, 0, 100, 0},
                                   {3, 82, 94, 73, 86},
                                   {4, 64, 74, 84, 94},
                                   {5, 94, 84, 74, 64}};

  printMatrix(grade, N_ROWS, N_COLUMNS);
  printFinalGradeCalc(grade, N_ROWS, N_COLUMNS);
  
}

void printMatrix(int matrix[][5], int N_ROWS, int N_COLUMNS) {
  int row, col;
  for (row = 0; row < N_ROWS; row++) {
    for (col = 0; col < N_COLUMNS; col++) 
      cout << setw(6) << matrix[row][col] << " ";
    cout << endl;
  }
}

