// Author : Steven Gentry
// Starting date:10/30/14
// Last Mod.date: 11/2/14
// recConvert.cpp

/* overview: demonstration of using recusive functions to convert
decimal to binary to decimal allowing user to repeat the calculation.
Also checks for valid input from user. */

//Input: Decimal or binary number to convert or quit the program from menu
//Output: resulting binary or decimal number



#include <iostream>
#include <math.h> //for pow function

using namespace std;




int DecBin(int); //decimal to bin function
int BinDec(int,int);//binary to decimal function
void Menu(void);   // menu function
int choice;       //menu choice
int sum=0;

int main()
{
do
{
  Menu();
  switch (choice)
  {
   case 1 :
       {

        int dec=0;
        int bin=0;
        int num=0;
        cout <<"Enter a decimal number to convert to binary: ";
        cin >> dec;
        bin = DecBin(dec);
        cout << "Decimal " << dec <<" = " << bin << endl;
        break;
       }

   case 2 :
       {
        int bWt=0;
        int bin2=0;
        sum=0;
        cout <<"Enter a binary number to convert to decimal: ";
        cin >> bin2;
        cout << endl;
        int sum=BinDec(bin2, bWt);
        cout << "Binary " << bin2 << " = "<< sum << endl;
        break;
       }
   default :
      cout << endl;

    }

}

while (choice != 3);
    return 0;
}
void Menu(void){

    cout << endl;
    cout << "1 - Convert Decimal\n";
    cout << "2 - Convert Binary\n";
    cout << "3 - Quit\n";
    cout << " Enter your choice and press return: ";
    cin >> choice;
    if ( choice < 1 || choice > 3)
    {



        cin.clear();
        cin.ignore(80, '\n'); //clear stream buffer
        cout << "Enter numbers 1-3 only" ;
        Menu ();
    }
    return;
}

int DecBin(int dec)
{
if (dec == 0) return 0;

    else return (dec % 2 + 10 * DecBin(dec / 2));
}

int BinDec( int bin, int wt ){
int bit;
    if ( bin> 0 )
        {
        bit = bin % 10;
        sum = sum + bit * pow(2, wt );
        bin = bin / 10;
        wt++;
        BinDec(bin, wt );
        }
return sum;
}

