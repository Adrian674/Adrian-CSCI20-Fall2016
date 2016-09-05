//Creator: Adrian Gomez
//Date: 8/29/16
//Citation: madglibs.com

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string adjective1 = "";
    string noun1 = "";
    int number = 0;
    string noun2 = "";
    string adjective2 = "";
    string verb = "";
    string noun3 = "";
    string bodypart = "";
    string adjective3 = "_";
    
    double number2 = 0;
    char letter = '-';
    
    cout<<"enter adjective1: ";
    cin>> adjective1;
    cout<<"enter noun1: ";
    cin>> noun1;
    cout<<"enter any number: ";
    cin>> number;
    cout<<"enter noun2: ";
    cin>> noun2;
    cout<<"adjective2: ";
    cin>> adjective2;
    cout<<"verb: ";
    cin>> verb;
    cout<<"noun3: ";
    cin>> noun3;
    cout<<"bodypart: ";
    cin>> bodypart;
    cout<<"adjective3: ";
    cin>> adjective3;
    cout<<"enter number2: ";
    cin>> number2;
    cout<<"enter any character key: ";
    cin>> letter;
    
    cout<<"Look, I guarantee there`ll be " <<adjective1<<" times. "<<endl;
    cout<<"I guarantee that at some " <<noun1;
    cout<<", " <<number<< " or both of us are gonna want to get out of this ";
    cout<<noun2<<". But I also guarantee that if I don't ask you to be ";
    cout<<adjective2<<", I'll " <<verb<< " it for the rest of my ";
    cout<<noun3<<", because I know, in my "<<bodypart;
    cout<<", you're the " <<adjective3;
    cout<<" one for me."<<endl;
    
    cout<<letter <<"Thanks for playing. Now go do "  << number2<< " pushups!"<<endl;
}