// Author : Steven Gentry
// Starting date:
// Last Mod.date:
//hailstone.cpp

/*File must be called: hailstone.cpp
A hailstone sequence starts with a given integer. If that integer is even, then you divide it by two to get the
next integer in the sequence, but if it is odd, then you multiply it by three and add one to get the next integer
in the sequence. Then you use the value you just generated to find out the next value, according to the same
rules. Your recursive function should take as input the starting integer and count how many steps it takes to
reach 1 (technically you could keep going 1, 4, 2, 1, 4, 2, etc. but we will stop when you first reach 1). If the
starting integer is 1, the output should be 0, since it takes no steps to reach one (we're already there). If the
starting integer is 3, then the sequence would go: 3, 10, 5, 16, 8, 4, 2, 1, and the output should be 7.
Discuss on Discussion Board: Why do you think writing recursive code initially feels more challenging than */

#include <iostream>

using namespace std;

void Hailstone(int);
int num,input;
int iter=1;

main(){

cout << "enter hailstone number: ";
cin >> input;

Hailstone (input);
cout << "Output is: " << iter;

return(0);
}

void Hailstone(int num){
    int wait;
    if (num%2 == 0)num/=2;
    else num=(num*3)+1;

cout << iter <<" " <<num << endl;

    if (num != 1)
    {
    iter++;
    Hailstone(num);
    }
   else return;





}






