/******************************************************************************
Description: Rock, Paper, Scissors, Lizard, Spock Game
CSCI130_RockPaperScissors2.pdf Last Modified by: Jake Thompson Last Modified on:
9/27/2022
*******************************************************************************/
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

//////////////////// Prototype Functions /////////////////////////////////////
void TranslatePick(int flag_who, char selection);
char ComputerSelectRPSLK();
void DetermineWinner(char userPick, char computerPick);
//////////////////// MAIN ////////////////////////////////////////////////////
int main() {
  // declare vars
  char userPick; // user's selection for game
  bool valid_pick =
      false;         // flag controlled while loop for obtaining user input
  char computerPick; // randomly selected computer selection for game

  // Display rules of the game.
  cout << "It's time to play Rock, Paper, Scissors, Lizard, Spock!" << endl;
  cout << "Use R (for Rock), P (for Paper), S (for Scissors), ";
  cout << "L (for Lizard), and K (for Spock)." << endl;

  // Obtain userPick. Prompt until a valid selection is made.
  while (valid_pick == false) {
    cout << "You pick: ";
    cin >> userPick;

    if ((userPick == 'R') || (userPick == 'P') || (userPick == 'S') ||
        (userPick == 'L') || (userPick == 'K')) {
      valid_pick = true;
    } else
      cout << "Invalid Selection. Try again. " << endl;
  }

  // Repeat selection back to user.
  TranslatePick(0, userPick);

  // Obtain computer selection.
  computerPick = ComputerSelectRPSLK();
  TranslatePick(1, computerPick); // Inform user of computer selection

  // HANDOUT (PART A): Determine the winner of the game.
  // HANDOUT (PART B): Inform the user who won.
  DetermineWinner(userPick, computerPick);

  // HANDOUT (PART C): Randomly display celebratory messages if user won.
  int MessagePick;
  string RandMessage;
  srand(time(NULL));
  if (userPick == 'R') // When user picks Rock
  {
    if (computerPick == 'R'){
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Dang, it's ok try again!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "It's alright, don't give up!";
    cout << RandMessage << endl;
    break;
  }
    }
      
    else if ((computerPick == 'K') || (computerPick == 'P')){
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Dang, it's ok try again!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "It's alright, don't give up!";
    cout << RandMessage << endl;
    break;
  }
    }
     
    else{
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Wow you are amazing!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "Holy moly you beat the computer!";
    cout << RandMessage << endl;
    break;
  }
    }
      
  }

  if (userPick == 'P') // When user picks Paper
  {
    if (computerPick == 'P'){
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Dang, it's ok try again!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "It's alright, don't give up!";
    cout << RandMessage << endl;
    break;
  }
    }
      
    else if ((computerPick == 'S') || (computerPick == 'L')){
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Dang, it's ok try again!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "It's alright, don't give up!";
    cout << RandMessage << endl;
    break;
  }
    }
      
    else{
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Wow you are amazing!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "Holy moly you beat the computer!";
    cout << RandMessage << endl;
    break;
  }
    }
      
  }

  if (userPick == 'S') // When user picks Scissors
  {
    if (computerPick == 'S'){
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Dang, it's ok try again!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "It's alright, don't give up!";
    cout << RandMessage << endl;
    break;
  }
    }
      
    else if ((computerPick == 'R') || (computerPick == 'K')){
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Dang, it's ok try again!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "It's alright, don't give up!";
    cout << RandMessage << endl;
    break;
  }
    }
      
    else{
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Wow you are amazing!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "Holy moly you beat the computer!";
    cout << RandMessage << endl;
    break;
  }
    }
      
  }

  if (userPick == 'L') // When user picks Lizard
  {
    if (computerPick == 'L'){
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Dang, it's ok try again!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "It's alright, don't give up!";
    cout << RandMessage << endl;
    break;
  }
    }
      
    else if ((computerPick == 'R') || (computerPick == 'S')){
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Dang, it's ok try again!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "It's alright, don't give up!";
    cout << RandMessage << endl;
    break;
  }
    }
      
    else{
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Wow you are amazing!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "Holy moly you beat the computer!";
    cout << RandMessage << endl;
    break;
  }
    }
      
  }

  if (userPick == 'K') {
    if (computerPick == 'K'){
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Dang, it's ok try again!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "It's alright, don't give up!";
    cout << RandMessage << endl;
    break;
  }
    }
      
    else if ((computerPick == 'P') || (computerPick == 'L')){
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Dang, it's ok try again!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "It's alright, don't give up!";
    cout << RandMessage << endl;
    break;
  }
    }
      
    else{
      MessagePick = rand() % 2;
  switch (MessagePick)
  {
  case 0:
    RandMessage = "Wow you are amazing!";
    cout << RandMessage << endl;
    break;
  case 1:
    RandMessage = "Holy moly you beat the computer!";
    cout << RandMessage << endl;
    break;
  }
    }
      
  }  
  return 0;
}

/////////////// User-Created Functions ////////////////////////////////////////

/* Descprition: This function is used to translate the character selection to a
        statement which is displayed to the user.
   Parameters:  flag_who is an integer which is used to indicate if the computer
                         or the user made the choice.
                selection is one of the 5 valid character selections  */
void TranslatePick(int flag_who, char selection) {
  // declare local function variables
  string who_text;

  // identify which statements to insert into the output below
  if (flag_who == 0)
    who_text = "You";
  else
    who_text = "The Computer";

  // display output where the char selection is translated into words
  if (selection == 'R')
    cout << who_text << " selected Rock." << endl;
  else if (selection == 'P')
    cout << who_text << " selected Paper." << endl;
  else if (selection == 'S')
    cout << who_text << " selected Scissors." << endl;
  else if (selection == 'L')
    cout << who_text << " selected Lizard." << endl;
  else if (selection == 'K')
    cout << who_text << " selected Spock." << endl;
  else // something is wrong
    cout << "Check code for errors. Message from TranslatePick fcn." << endl;

  return;
}

/* Descprition: This function is used to make a random character selection in
   the game Rock, Paper, Scissors, Lizard, Spock Parameters:  there are no
   inputs */
char ComputerSelectRPSLK() {
  // declare local function variables
  char randPickChar;
  int randPick;

  // pick a random number from 0 to 4
  srand(time(NULL));     // initialize random seed.
  randPick = rand() % 5; // gives us 0 to 4
  // cout << randPick;   // uncomment to debug

  // assign random number to letter
  switch (randPick) {
  case 0:
    randPickChar = 'R';
    break;
  case 1:
    randPickChar = 'P';
    break;
  case 2:
    randPickChar = 'S';
    break;
  case 3:
    randPickChar = 'L';
    break;
  case 4:
    randPickChar = 'K';
    break;
  default:
    cout << "Error in the function ComputerSelectRPSLK. " << endl;
  }

  return randPickChar;
}
 void DetermineWinner(char userPick, char computerPick)
{
if (userPick == 'R') // When user picks Rock
  {
    if (computerPick == 'R')
      cout << "Tie." << endl;
    else if ((computerPick == 'K') || (computerPick == 'P'))
      cout << "You Lose." << endl;
    else
      cout << "You Win." << endl;
  }

  if (userPick == 'P') // When user picks Paper
  {
    if (computerPick == 'P')
      cout << "Tie." << endl;
    else if ((computerPick == 'S') || (computerPick == 'L'))
      cout << "You Lose." << endl;
    else
      cout << "You Win." << endl;
  }

  if (userPick == 'S') // When user picks Scissors
  {
    if (computerPick == 'S')
      cout << "Tie." << endl;
    else if ((computerPick == 'R') || (computerPick == 'K'))
      cout << "You Lose." << endl;
    else
      cout << "You Win." << endl;
  }

  if (userPick == 'L') // When user picks Lizard
  {
    if (computerPick == 'L')
      cout << "Tie." << endl;
    else if ((computerPick == 'R') || (computerPick == 'S'))
      cout << "You Lose." << endl;
    else
      cout << "You Win." << endl;
  }

  if (userPick == 'K') {
    if (computerPick == 'K')
      cout << "Tie." << endl;
    else if ((computerPick == 'P') || (computerPick == 'L'))
      cout << "You Lose." << endl;
    else
      cout << "You Win." << endl;
  }
}
