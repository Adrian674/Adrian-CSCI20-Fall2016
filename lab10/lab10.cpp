//Creator: Adrian Gomez-Mora
//Date: 10/3/16

#include <iostream>
using namespace std;


int main()  {

// 1.
cout<<"Is Suzy's age less than John's age?"<<endl;
int suzyAge = 25;
int johnAge = 21;
cout<<(suzyAge < johnAge)<<endl;

// 2.
cout<<"Is x greater than or equal to y?"<<endl;
int x =7;
int y = 7;
cout<<(x >= y)<<endl;

//3.
cout<<"is a equal to b?"<<endl;
int a = 1;
int b = 9;
cout<<(a == b)<<endl;

//4.
cout<<"is limit times count divided by two greater than zero?"<<endl;
int limit = 20;
int count = 10;
cout<<((limit*count)/2 > 0)<<endl;

//5.
cout<<"Is t greater than z or is z less than 2?"<<endl;
int t = -4;
int z = 0;
cout<<(t > 5 || z < 2)<<endl;

//6. 
cout<<"Is not variable greater than zero?"<<endl;
int variable = -5;
cout<<(!(variable >0))<<endl;

//7. 
cout<<"Is 'a' divided by four less than eight and is a greater than or equal to four?"<<endl;
a = 16;
cout<<(a/4 < 8 && a >= 4)<<endl;

//8.
cout<<"Is x times y less than 10 or is y times z less than 10?"<<endl;
x = -2;
y = 5;
cout<<(x*y < 10 || y*z < 10)<<endl;

//9.
cout<<"is not j times l less than 10 or y divided by x times 4 less than y times two?"<<endl;
int j = -2;
int k = 5;
int l = 4;
cout<<(!(j*l < 10) || y/x * 4 < y *2)<<endl;

}