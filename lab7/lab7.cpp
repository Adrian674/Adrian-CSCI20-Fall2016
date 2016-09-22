///Creator: Adrian Gomez-Mora
//Date: 9/19/2016

#include <iostream>
#include <string>
using namespace std;

void chorus (){
   cout<<"Strangers waiting \n"
"Up & down the boulevard\n"
"Their shadows searching in the night\n"
"Streetlights, people\n"
"Livin' just to find emotion\n"
"Hidin' somewhere in the night"<<endl;

}
void verse (string on){
    cout<<"A singer in a smoky room\n"
"For a smile they can share the night\n"
"It goes on and "<<on<<", and "<<on<<", and "<<on<<endl;
}

void outro (string line){
    cout<<line<<endl;
cout<<"Hold on to the feelin'\n"
"Streetlights, people"<<endl;
}

int main()
{
  cout<<  "Just a small town girl\n"
"Livin' in a lonely world\n"
"She took the midnight train goin' anywhere\n"
"Just a city boy\n"
"Born and raised in south Detroit\n"
"He took the midnight train goin' anywhere"<<endl;

cout<<" "<<endl;
 verse("on");
 
 cout<<" "<<endl;
 chorus();
 
 cout<<"Working hard to get my fill\n"
"Everybody wants a thrill\n"
"Payin' anything to roll the dice\n"
"Just one more time\n"
"Some will win, some will lose\n"
"Some were born to sing the blues\n"
"Oh, the movie never ends\n"
"It goes on and on, and on, and on"<<endl;
 
 cout<<" "<<endl;
 chorus();
 
 cout<<" "<<endl;
 outro("Don't stop believin'");
 
 cout<<" "<<endl;
 outro("Don't stop believin'");
 
 cout<<" "<<endl;
 outro("Don't stop believin'");
}