// Author : Steven Gentry
// Starting date:10/30/14
// Last Mod.date:10/30/14
// recFun.cpp

//Overview: Designed to ouput numonacci sequence based on
// input of an integer using a recursive function.

#include <iostream>

using namespace std;
int fibonacci(int);

int main(void)
{
 int num;

 cout << "Enter end of fibonacci sequence:";
 cin >> num;

 for (int i = 0; i < num; i++)

  cout << " " << fibonacci(i) << " ";

 return 0;
}

int fibonacci(int num){
 if (num == 1 || num ==0) return num;

 else
 return fibonacci(num - 1) + fibonacci(num - 2);

}



