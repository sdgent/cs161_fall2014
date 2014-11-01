// Author : Steven Gentry
// Starting date: 10/28/14
// Last Mod.date: 10/30/14
//randFun.cpp

/* takes input range of integers between 1-100. checks for proper range.
uses time.h library to set random seed. Passes values to function by reference
*/


#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void rand_int(const int &mn, const int &mx, int &val); // random gen. function

const int mx=100;  // max of range
const int mn=1; // min of range
int val=0; // random output

int main () {
   srand (time(NULL)); // random se
cout << "generates random integer between 1-100" << endl;
cout << "val=" << val << endl; //proves that val is being referenced.
rand_int(mn,mx,val);
cout << "your random number is:" << val;
return 0;

}

void rand_int(const int &mn,const int &mx, int &val) {

    int range = mx-mn+1 ;
    val= rand()%range + mn ;
    return ;
}









