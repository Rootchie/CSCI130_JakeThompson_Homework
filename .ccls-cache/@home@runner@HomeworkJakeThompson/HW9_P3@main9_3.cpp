// Programmer: Jake Thompson
// Description: Bronson Exercises Project 12
// Date: 10/27/2022
// With John Thompson
#include <iostream>
#include <iomanip>

using namespace std;

int testNum;
const int numQuestions = 5;
char answers[numQuestions] = {'T','T','F','F','T'};
void calcGrades(char tests[][numQuestions], int grade[]);

int main() {
  cout << "How many test cases: " << endl;
  cin >> testNum;

  int grade[testNum];
  char test_case[testNum][numQuestions];

  for (int i = 0; i < testNum; i++) {
    grade[i] = 0;
    cout << "Input all test question responses for test " << i + 1 << endl;
    for (int k = 0; k < numQuestions; k++) {
      cin >> test_case[i][k];
    }
  }
  calcGrades(test_case, grade);
  cout << "The grades are: " << endl;
  for (int i = 0; i < testNum; i++) {
    cout << grade[i] << endl;
  }
  cout << endl;
  return 0;
}

void calcGrades(char tests[][numQuestions], int grade[]) {
  
  for (int i = 0; i < testNum; i++) {
    for (int k = 0; k < numQuestions; k++) {
      // if test answer matches correct answer
      if(tests[i][k] == answers[k]) {
        grade[i] += 5;
      }
    }
  }
}