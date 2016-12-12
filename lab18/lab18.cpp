//Creator: Adrian Gomez
//Date: 11/7/16
/*This program is responsible for creating user names for a new website.  
    *It accepts a first name of up to 10 characters and a last name of up to 20 characters.  
    *It tells the user if the name is larger than the max size. 
    *It also determines if the names are the same and outputs a warning. Gives 3 username options.
    */
    
#include <iostream>
#include <string>
using namespace std;


int main(){
    string firstName;
    string lastName;
    
    cout<<"Please enter a first name (up to 10 characters). ";
    cin>>firstName;

    if (firstName.length() < 10){
        cout<<firstName<<endl;
    }
    else{
        cout<<"Error. Name too large."<<endl;
    }
    
    cout<<"Please enter a last name (up to 20 characters). ";
    cin>>lastName;
    
    if (lastName.length() < 20){
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
    cout<<"2. "<< firstName.substr(0,2)<<lastName<<endl;
    cout<<"3. "<< lastName<<firstName.at(0)<<endl;

    
}