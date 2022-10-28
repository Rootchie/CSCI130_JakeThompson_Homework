/******************************************************************************
Programmer: Jake Thompson
CSCI 130: Matrix Example (Manipulating Matrices)
Date: 10/19/2022
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
int CountUnhealthySensitive(int matrix[][3], int N_ROWS, int city_col);
void printMatrix_3col(int matrix[][3], int N_ROWS, int N_COLUMNS);
int meanAirQualityIndex(int matrix[][3], int N_ROWS, int city_col);

////////////////////// MAIN ///////////////////////////////////////
int main()
{   int city_col;
    const int N_ROWS = 10; 
    const int N_COLUMNS = 3;
    int AirQuality_Index[N_ROWS][N_COLUMNS] =  {{50, 68, 58},
                                                {58, 115, 78},
                                                {62, 110, 81},
                                                {66, 124, 110},
                                                {64, 152, 121},
                                                {46, 143, 90},
                                                {46, 143, 90},
                                                {25, 91, 91},
                                                {27, 19, 59},
                                                {17, 13, 27}};
    // display values in MyMatrix
    cout << "MyMatrix contains: " << endl;
    printMatrix_3col(AirQuality_Index, N_ROWS, N_COLUMNS);

  cout << "From 10/4/2020 to 10/13/2020 the air quality was unhealthy"                      " for sensitive groups in: " << endl;
  for (city_col = 0; city_col < N_COLUMNS; city_col++) {
    if (city_col == 0)
          cout << "Grand Junction: " 
               << CountUnhealthySensitive(AirQuality_Index, N_ROWS, city_col) 
               << " times." << endl;
  
    if (city_col == 1)
          cout << "Fort Collins: " 
               << CountUnhealthySensitive(AirQuality_Index, N_ROWS, city_col) 
               << " times." << endl;
  
    if (city_col == 2)
          cout << "Denver/Boulder: " 
               << CountUnhealthySensitive(AirQuality_Index, N_ROWS, city_col) 
               << " times." << endl << endl;
    } 

  cout << "From 10/4/2020 to 10/13/2020 the average air quality in: "                   << endl;
  for (city_col = 0; city_col < N_COLUMNS; city_col++) {
    if (city_col == 0)
          cout << "Grand Junction was " 
               << meanAirQualityIndex(AirQuality_Index, N_ROWS, city_col)
               << "." << endl;
  
    if (city_col == 1)
          cout << "Fort Collins was " 
               << meanAirQualityIndex(AirQuality_Index, N_ROWS, city_col)
               << "." << endl;
  
    if (city_col == 2)
          cout << "Denver/Boulder was " 
               << meanAirQualityIndex(AirQuality_Index, N_ROWS, city_col)
               << "." << endl;
  }
  return 0;
}


//////////////// USER-DEFINED MATRIX FUNCTIONS ////////////////////////////
// Recall: you can omit the size of the first dimension, but not the second

// function to print the matrix in a matrix with 3 columns
void printMatrix_3col(int matrix[][3], int N_ROWS, int N_COLUMNS) {
    int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << setw(6) << matrix[row][col] << " ";
        
        cout << endl;    
    }
}

int CountUnhealthySensitive(int matrix[][3], int N_ROWS, int city_col) {
  int count = 0;
  int unhealthy_level = 101;
  int row;

  for (row = 0; row < N_ROWS; row++) {
    if (matrix[row][city_col] >= unhealthy_level) {
    count++; 
    }
  }
  return count;
}

int meanAirQualityIndex(int matrix[][3], int N_ROWS, int city_col) {
  int sum = 0;
  int row, avg;

  for (row = 0; row < N_ROWS; row++)
    sum = sum + matrix[row][city_col];

  avg = sum / N_ROWS;

  return avg;
}