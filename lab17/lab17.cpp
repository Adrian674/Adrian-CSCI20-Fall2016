//Creator: Adrian Gomez
//Date: 11/1/16

#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main(){
    char firstName[11];
    char lastName[21];
    
    cout<<"Please enter a first name (up to 10 characters). ";
    cin>>firstName;

    if (firstName < 10){
        cout<<firstName<<endl;
    }
    else{
        cout<<"Error. Name too large."<<endl;
    }
    
    cout<<"Please enter a last name (up to 20 characters). ";
    cin>>lastName;
    
    if (lastName < 20){
        cout<<lastName<<endl;
    }
    else{
        cout<<"Error. Last name too large."<<endl;
    }
    if (firstName == lastName){
    cout<<"WARNING! Your first and last name are the same..."<<endl;
}
    cout<<"Here are three username options:"<<endl;

    cout<<"1. "<<lastName<<firstName<<endl;
    cout<<"2. "<< firstName[2]<<lastName<<endl;
    cout<<"3. "<< lastName<<firstName[1]<<endl;

    
}