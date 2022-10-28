// Programmer: Jake Thompson
// Description:  Bronson Exercises Project 12
// Date: 10/27/2022\
#include <iostream>
#include <iomanip>

using namespace std;

const int numQuestions = 5;
char answers[numQuestions] = {'T','T','F','F','T'};
int calcGrades(char tests[][numQuestions], int numTests);

int main() {
  const int numTests = 6;
  char tests[numTests][numQuestions];
  for (int test = 0; test < numTests; test++) {
    for (int question = 0; question < numQuestions; question++) {
      cin >> tests[test][question];
    }
  }
  int grades = calcGrades(tests, numTests);
  cout << "Grades: ";
  
}

int calcGrades(char tests[][numQuestions], int numTests) {
  int grades[numTests];
  for (int test = 0; test < numTests; test++) {
    int grade = 0;
    for (int question = 0; question < numQuestions; question++) {
      // if test answer matches correct answer
      if(tests[test][question] == answers[question]) {
        grade += 5;
      }
    }
    grades[test] = grade;
  }
  return grades;
}