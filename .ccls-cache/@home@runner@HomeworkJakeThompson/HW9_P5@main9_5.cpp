// Programmer: Jake Thompson
// Description: HW9_P5
// Date: 10/27/2022
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int A[2][2], d, adjA[2][2];
    int i, j;
    float invA[2][2];
    cout << "Enter elements for 2 * 2 matrix " << endl;
    for (i = 0;i < 2; i++)
    {
        for (j = 0;j < 2; j++)
        {
            //Reading Matrix A
            cin >> A[i][j];
        }
    }
    /* Calculate determinant of matrix A */
    d = (A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
    if (d == 0)
    {
        cout << "Determinant cannot be ZERO" << endl;
        return 0;
    }
    /* Find adjoint of matrix A */
    adjA[0][0]=A[1][1];
    adjA[1][1]=A[0][0];
    adjA[0][1]=-A[0][1];
    adjA[1][0]=-A[1][0];
    cout << "Matrix A is: " << endl;
    for (i = 0;i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << setw(2) << A[i][j];
        }
        cout << endl;
    }
    /* Find Inverse of A */
    cout << "Inverse of Matrix A is: " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            invA[i][j]=(adjA[i][j])/(float)d;
            cout << fixed << showpoint << setprecision(1) 
                 << setw(5) << invA[i][j];
        }
        cout << endl;
    }
    return 0;
}