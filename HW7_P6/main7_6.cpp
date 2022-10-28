/******************************************************************************
Description: Rock, Paper, Scissors, Lizard, Spock Game
             This game is unfinished but now uses arrays.
Last Modified by: Dr. M
Last Modified on: 9/2022
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//////////////////// Prototype Functions /////////////////////////////////////
void TranslatePick (int flag_who, char& selection, const char options[]);
char ComputerSelectRPSLK (const char options[]);
int DetermineWinner(char computerPick, char userPick, const char game_options[], const char win1[], const char win2[]);
void giveFeedback(int r);

//////////////////// MAIN ////////////////////////////////////////////////////
int main ()
{
  // declare vars & initialize some of them
  char userPick;		    // user's selection for game
  bool valid_pick = false;	// flag controlled while loop for obtaining user input
  char computerPick;		// randomly selected computer selection for game
  int result;
  string temp;
  
  char game_options[5] =  { 'R', 'P', 'S', 'L', 'K' };
  char win_scenario1[5] = { 'S', 'K', 'L', 'P', 'R' }; // a parallel array with game_options of the computer's pick
  char win_scenario2[5] = { 'L', 'R', 'P', 'K', 'S' }; // a parallel array with game_options of the computer's pick
  char acceptable_inputs[10] = { 'r', 'R', 'p', 'P', 's', 'S', 'l', 'L', 'k', 'K' };
  

  // Display rules of the game.
  cout << "It's time to play Rock, Paper, Scissors, Lizard, Spock!" << endl;
  cout << "Use R (for Rock), P (for Paper), S (for Scissors), ";
  cout << "L (for Lizard), and K (for Spock)." << endl;

  // Obtain userPick. Prompt until a valid selection is made.
  while (valid_pick == false)
    {
      cout << "You pick: ";
      cin >> userPick;

      for (int i = 0; i < 10; i++)
	     if (userPick == acceptable_inputs[i])
	        valid_pick = true;

      if (valid_pick == false)
	     cout << "Invalid Selection. Try again. " << endl;
	  
	  getline(cin, temp); //clear any line of garabage text (in the event they entered a string)
    }

  // Repeat selection back to user.
  cout << endl;
  TranslatePick(0, userPick, acceptable_inputs);

  // Obtain computer selection.
  computerPick = ComputerSelectRPSLK (game_options);
  TranslatePick(1, computerPick, acceptable_inputs);	// Inform user of computer selection

  // Determine the winner.
  cout << endl;
  result = DetermineWinner(computerPick, userPick, game_options, win_scenario1, win_scenario2);	// return 1 for win, 0 for lose, and 2 for tie

  // Inform the user who won & display random messages
  giveFeedback(result);



  return 0;
}

/////////////// User-Created Functions ////////////////////////////////////////

/* Descprition: This function is used to translate the character selection to a 
        statement which is displayed to the user.
   Parameters:  flag_who is an integer which is used to indicate if the computer
                         or the user made the choice.
                selection is one of the 5 valid character selections and this program
                         will updated it to be the uppercase version 
                options is the char array of the allowable list of options (including lowercase) */
void TranslatePick (int flag_who, char& selection, const char options[])
{
  // declare local function variables
  string who_text;

  // identify which statements to insert into the output below
  if (flag_who == 0)
    who_text = "You";
  else
    who_text = "The Computer";

  // display output where the char selection is translated into words
  if ((selection == options[0]) || (selection == options[1]))	// r or R
    {
      selection = 'R';		
      cout << who_text << " selected Rock." << endl;
    }
  else if ((selection == options[2]) || (selection == options[3]))	// p or P
    {
      selection = 'P';		
      cout << who_text << " selected Paper." << endl;
    }
  else if ((selection == options[4]) || (selection == options[5]))	// s or S
    {
      selection = 'S';		
      cout << who_text << " selected Scissors." << endl;
    }
  else if ((selection == options[6]) || (selection == options[7]))	// l or L
    {
      selection = 'L';		
      cout << who_text << " selected Lizard." << endl;
    }
  else if ((selection == options[8]) || (selection == options[9]))	// k or K
    {
      selection = 'K'; 
      cout << who_text <<" selected Spock." << endl;
    }
  else				// something is wrong
      cout << "Check code for errors. Message from TranslatePick fcn." << endl;

  return;

}

/* Descprition: This function is used to make a random character selection in the 
        game Rock, Paper, Scissors, Lizard, Spock */
char ComputerSelectRPSLK (const char options[])
{
  // declare local variables
  int randPick;

  // pick a random number from 0 to 4
  srand (time (NULL));		// initialize random seed.
  randPick = rand () % 5;	// gives us 0 to 4

  return options[randPick];
}

/* Descprition: This function determines the winner  */
int DetermineWinner(char computerPick, char userPick, const char game_options[], const char win1[], const char win2[])
{
    // find game option index to take advantage of parallel arrays
    for (int i = 0; i<5; i++)
    {
        if (game_options[i] == userPick) 
        {
            if ( (computerPick == win1[i]) || (computerPick == win2[i]) ) // you win
                return 1;
            else if (computerPick == userPick) // tie
                return 2;
            else // you lost
                return 0;
        }
        // else do nothing
    }
}

/* Descprition: This function displays the celebratory message */
void giveFeedback(int r)
{
    int randPick;
    
    // pick a random number from 0 to 2
    srand (time(NULL)); // initialize random seed.
    randPick = rand() % 3; // gives us 0 to 2

    switch(randPick)
    {
        case 0:
        {
            if (r == 1)         // win
                cout << "Who's a winner?! YOU ARE!!" << endl;
            else if (r == 0 )   // lose
                cout << "Too bad. You lost. Try again?" << endl;
            else                // tie 
                cout << "What luck! It's a tie!" << endl;
            
            break;
        }
        case 1:
        {
            if (r == 1)         // win
                cout << "Nice job. You won!" << endl;
            else if (r == 0 )   // lose
                cout << "L for love? Not this time! You lost." << endl;
            else                // tie 
                cout << "You tie." << endl;
            
            break;
        }
        case 2:
        {
            if (r == 1)         // win
                cout << "HURRAY!!! You defeated the computer." << endl;
            else if (r == 0 )   // lose
                cout << "The computer defeated you! *sadness*" << endl;
            else                // tie 
                cout << "You and the computer made the same selection... It's a TIE." << endl;
            
            break;
        }
    }
    
    return;
    
}