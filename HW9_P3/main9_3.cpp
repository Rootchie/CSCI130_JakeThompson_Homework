// Programmer: Jake Thompson
// Description: Bronson Exercises Project 12
// Date: 10/27/2022
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const int numQuestions = 5;
char answers[numQuestions] = {'T','T','F','F','T'};
vector<int> calcGrades(char tests[][numQuestions], int numTests);

int main() {
  const int numTests = 6;
  char tests[numTests][numQuestions];
  for (int i = 0; i < numTests; i++) {
    for (int k = 0; k < numQuestions; k++) {
      cin >> tests[i][k];
    }
  }
  vector<int> grades = calcGrades(tests, numTests);
  cout << "Grades: ";
  for (int i = 0; i < numTests; i++){
    cout << grades[i] << " ";
  }
  cout << endl;
  return 0;
}

vector<int> calcGrades(char tests[][numQuestions], int numTests) {
  vector<int> grades(numTests);
  for (int i = 0; i < numTests; i++) {
    int grade = 0;
    for (int k = 0; k < numQuestions; k++) {
      // if test answer matches correct answer
      if(tests[i][k] == answers[k]) {
        grade += 5;
      }
    }
    grades[i] = grade;
  }
  return grades;
}