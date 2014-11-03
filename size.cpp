// Author : Steven Gentry
// Starting date:10/25/14
// Last Mod.date:10/26/14
// size.cpp


#include <iostream>

using namespace std;

float Jacket (int w, float h, int a); // pass weight, height, and age.
float Waist (int w, int a); // pass weight and age
float Hat (int w, float h); // pass weight and height
bool Answer(void); // allow multiple calcs

float height;
float chest;
float waist;
float hat;
int weight;
int age;
bool stop;



int main (){
    do {
    cout <<"Enter your height in inches:";
    cin  >> height;
    cout << "Enter your weight in pounds:";
    cin  >> weight;
    cout << "Enter your age;";
    cin  >> age;
    Jacket (weight,height,age);
    Waist (weight,age);
    Hat  (weight,height);
    cout << "chest size:"<< chest << endl;
    cout << "waist size:"<< waist << endl;
    cout << "hat size:" << hat << endl;
    Answer();
    }
    while (stop == false);
        return 0;


}


float Jacket (int w, float h,int a){
float adj;
    if (a >= 40){adj = ((a % 10-3)*.125);}
    chest=(w*h)/288+adj;
    return chest;
}

float Waist (int w, int a) {
    float adj;
    if (a >= 30) adj=(age/2-29)*.1;

    waist=w/5.7+adj;
    return waist;

}// pass weight and age
float Hat (int w, float h) {
    hat=( w/h)*2.9;
    return hat;

}// pass weight and height


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




