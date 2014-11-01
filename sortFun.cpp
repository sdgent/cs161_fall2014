// Author : Steven Gentry
// Starting date:10/29/14
// Last Mod.date:10/30/14
// sortFun.cpp

//Overview:  accepts 3 ints from user, and will order them from lowest to highest. ints are
//passed to function by reference.
//Input: 3 integers from user through cin
//Output: Integers entered ordered from lowest to highest.



#include <iostream>

using namespace std;

void MySort(int &first,int &second,int &third); //variables to be sorted
void Flip (int &num1,int &num2);
int first,second,third;

main (){

cout << "Input 3 integers with a space between them"<<endl;
cin  >> first >> second >> third;
MySort (first,second,third);
cout << "Your numbers have been sorted" << endl;
cout << first <<" "<< second << " " << third;

return(0);
}

void MySort(int &first,int &second,int &third){
    if (first > second) Flip(first,second);
    if (first > third) Flip(first,third);
    if (second> third) Flip(second,third);
    return;
}

void Flip(int &num1,int &num2){
       int temp=num1;
       num1=num2;
       num2=temp;



return;
}

