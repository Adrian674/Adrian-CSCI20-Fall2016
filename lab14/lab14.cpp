//Creator: Adrian Gomez
//Date: 10/17/16

#include <iostream>
using namespace std;

int main() {        
    // Read a character in        
    char ch;
    cout << "Please enter a character: ";        
    cin  >> ch;         // check -- is it a letter??        
    if (ch >= 'A' && ch <= 'Z') {                                   //Included && rational operator to meet both criteria
      //  if (ch <= 'Z') {                                          //Took this out
            cout << "Yes, that is a uppercase letter." << endl;            
        }        
        
          
    else if (ch >= 'a' && ch <= 'z') {                              // Also included && rational operator to meet both criteria
       // if (ch <= 'z') {                                          //Took this out
            cout << "Yes, that is a lowercase letter" << endl;            
        }        
        
       
    else {            cout << "Not a letter" << endl;               //This statement is fine
        
    }          
    return 0; 
}