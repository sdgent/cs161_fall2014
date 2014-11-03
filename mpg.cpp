// Author : Steven Gentry
// Starting date:10/24/14
// Last Mod.date:10/25/14
// mpg.cpp
/*
“A liter is 0.264179 gallons. Write a program that will read in the number of liters of gasoline consumed by
the user’s car and the number of miles traveled by the car and will then output the number of miles per
gallon the car delivered. Your program should allow the user to repeat this calculation as often as the
user wishes. Define a function to compute the number of miles per gallon. Your program should use a
globally defined constant for the number of liters per gallon.”*/


#include<iostream>

using namespace std;

float Getmpg (float a, float b); // calculates mpg
bool Answer (void);

const float LITER = 0.264179; // liters to gallons
float litr; // input for liters
float miles; // miles input
float result;// calculation result
bool stop; //continue flag


int main () {

do
{ cout <<"Enter liters used:";
cin  >> litr;
cout <<"Enter miles traveled:";
cin  >> miles;
Getmpg (litr,miles);
cout << "Result is:" << result << "  miles per gallon" << endl;
Answer ();

}

while (stop == false);
return 0;
}

float Getmpg (float a, float b){
    litr*=LITER;
    result=miles/litr;
    return result;
}
bool Answer(){

char Ans;

	cout << "Calculate again (y/n)? ";
	cin >> Ans;

	if( Ans == 'y' ) // First Condition
	{
		stop=false;
	}

	if( Ans == 'n' ) // Second Condition
		stop=true;

return stop;}
