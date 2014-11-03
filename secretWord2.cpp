// Author : Steven Gentry
// Starting date: 10/22/14
// Last Mod.date: 10/26/14
// secretword.cpp


/* File must be called: secretWord.cpp
1. (3) stores player one's “secret word”
2. (3) the “secret word” will only be allowed to contain letters
3. (3) the program repeatedly asks for single letters from player 2
4. (6) the program displays correct letter guesses and the word so far based on those correct guesses
5. (6) the program displays the letters that have been guessed, but which aren't in the word
6. (3) player two will only get so many guesses (how will you decide this?)
7. (10) when done, the program will need to show the secret word, tell the user whether they won or lost, and if
they won display how many guesses they used
8. (6) asks the user if they want to play again (and correctly allows them to do so)
Discussion ideas: when implementing this based on your design how have your design considerations
changed for each of the above requirements? Do you now see new major requirements? Do you see new
minor requirements that you did not consider before? */

#include <iostream>
#include <string>

using namespace std;
bool GuessWord(void); // word guessing function
bool LetterChk (char chk); // check for valid input
bool DupeChk (char chk1);
void Output (void); // output function
void Init(void); // Intialize function
bool Replay(void); // allow replays

int wordsz;
int correct;
int wrong;
int tries; // tries = secret word length +5

string guesschk; //
char guess [20]; // maximum word size
char secret [20];
char trylist [25];// list of guesses
char ch;
bool stop=false; // replay flag
bool gameover; //gameover flag
bool goodinput; // flag for char input chks
bool dupe; // duplicate guess  flag



int main (){

     do{
        Init();
              do // main game loop
            {

                 GuessWord();
                 Output();
                    if (correct > 0 && correct == wordsz){ gameover = true; cout <<" Congratulations! You won. Good game." << endl;}
                    if (tries == (wordsz+5) && correct != wordsz){ gameover =true;cout<< "Sorry, you have no more guesses."<< endl;}
            }

              while (gameover == false);

        Replay();
        }     while (stop == false);
return 0; // end of main
}

 bool GuessWord (void){
     char c;
    do
                {
                cout << endl;
                cout << "              Player 2, make a guess:";
                cin >> c;

                LetterChk(c);
                DupeChk(c);

                }
                while (goodinput == false);

     int i=-1;
     bool valid =false;

     do{
        i++;
        trylist[tries]=c;

        if(c == secret[i] && guess[i] == '_')
                {
                  guess[i]=c;
                  correct++;
                  valid=true;
                }
     }
       while (i<wordsz);
          if (valid == false)
            wrong++;
            tries++;

            return gameover ==false;
}

void Output (void){



    int k;
    int j;
        cout << string( 100, '\n' );
        cout <<"known letters:   ";
   for ( k=0;k< wordsz;k++){cout << guess [k];}
        cout << endl<<endl;
        cout << "Current Score"<< endl;
        cout << tries <<"  guesses"<< endl;
        cout << correct << "  correct" << endl;
        cout << wrong   << "  wrong"   << endl<<endl;
        cout <<" letters guessed:";
    for (j=0; j< tries;j++){cout << trylist[j]<<",";}
        cout <<endl;
return;
}


bool LetterChk (char chk){   // check for valid input

if (chk >='A' && chk <='Z' )
    goodinput = true;
else if (chk >='a' && chk <='z')
    goodinput = true;
else
   goodinput = false;

return goodinput;
}

bool DupeChk(char chk1){

    int i;
     if (tries == 0) return goodinput=true;

    for ( i=0;i<tries;i++)

       if (chk1 == trylist[i])
       {

         cout<<" You have already guessed that letter. Try again."<<endl;
         goodinput=false;
       }

         else
            goodinput=true;
    return goodinput;
}



bool Replay(){

char Ans;

    cout << "The secret word is:" << secret<<endl;
    cout << "Game over"<< endl;
	cout << "Would you like to play again (y/n)? ";
	cin >> Ans;

	if( Ans == 'y' ) // First Condition
	{
		stop=false;
		Init();


	}

	if( Ans == 'n' ) // Second Condition
		stop=true;

return stop;}
void Init(void){
gameover=false;
 correct=0;
    wrong=0;
    tries=0;
 string temp;
  do {
    cout << "Player 1: enter secret word. 20 chars. max.  ";
    getline (cin,temp);
    wordsz=temp.length();
    if (wordsz >= 20){goodinput=false;cout<< "Word is too long!" << endl;}

    int i;
    char c;
    for (i=0;i<wordsz;i++)
    {
        c = temp.at(i);
        secret[i]=c;
        guess[i]= '_';
        LetterChk(c);
    }
  }
    while (goodinput == false);


    Output();
return;



}
