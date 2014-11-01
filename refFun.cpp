// Author : Steven Gentry
// Starting date: 10/28/14
// Last Mod.date:10/30/14
//refFun.cpp


/* simple string read function. inputs 2 strings  by reference and checks for matching chars
and outputs results to console. Checks for full, partial or no match. */

#include <iostream>
#include <string>


using namespace std;

void strComp (string &str1,string &str2);

string str1, str2; //input strings from user.
int sz; // size of smallest string
int bz; // size of largest string
int mch; // char match  flag
int sam = 0; // check for full string match


int main ()
{


cout << "Input First string...";
getline (cin,str1);
cout << "Input Second string...";
getline (cin,str2);
cout << "Here are the strings:";
cout << str1 << " " << str2 << endl;

strComp (str1,str2);

return 0;
}


void strComp (string &str1,string &str2) //function to compare strings **** compares lengths, sets smaller string (sz)  to max of loop.
{
    if(str1.length() < str2.length()) {sz = str1.length(); bz = str2.length();}
    else
        {sz=str2.length(); bz= str1.length();}
cout << " " << "str1   str2   " << endl;
for(int i=0;i<sz;i++)
{


    mch=0;
    if(str1.at(i) == str2.at(i)) {mch=1;sam++;}
    cout << "  " << str1.at(i) << "      " << str2.at(i) << endl;

}
// output results...checks for partial,complete and no matching characters

if(sam == 0) cout << "sorry, there are no matches.";
if(sam > 1 && sam != bz) {cout << "you have a partial match!";}
if(sam == bz){cout << "both strings match!";}




}
