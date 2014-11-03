// Author : Steven Gentry
// Starting date:
// Last Mod.date:
// finalist.cpp

/*You have four identical prizes to give away and a pool of 25 finalists. The finalists are assigned numbers
from 1 to 25. Write a program to randomly select the numbers of 4 finalists to receive a prize. Make sure
not to pick the same number twice. For example, picking finalists 3, 15, 22, and 14 would be valid but
picking 3, 3, 31, and 17 would be invalid, because finalist number 3 is listed twice and 31 is not a valid
finalist number.”
*/


#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int Getrand (void); // pick rand number
int result;         // result variable
int win [3];        // array of winners


int main () {
    srand (time(NULL)); // random seed
    cout << "Picking 4 winners out of 25..." <<endl;
    for (int i=0;i<4;i++){

        Getrand();
        win[i]=result;

    }
    cout <<"The winners are:" << endl;
    cout << win[0] << "," << win[1] << "," << win[2] << "," << win [3];

    return 0;



}

int Getrand (void) {

 result=rand()%25+1;


for(int j=0;j<4;j++){if (result == win[j]) Getrand ();}

return result;

}
