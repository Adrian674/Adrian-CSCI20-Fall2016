//Creator: Adrian Gomez
//Date: 11/21/16

#include <iostream>
#include <cstring>                                                              //gives access to the cstring library
using namespace std;
 
int main()
{
                char firststr[11];                                              //creates a character array (11 will accomodate 10 characters + the null)
                int firstname = 0;                                              //integer is initialized
                char *head = firststr;                                          //pointers are created both pointing to firststr
                char *tail = firststr;
                cout << "Please enter a 10 letter word or less" << endl;
                cin >> firststr;                                                //user input
                strlen(firststr);                                               //length of the cstring is initialized
                firstname = strlen(firststr);                                   //firstname stores integer value # of characters in firststr
                cout << "Your word is " << firststr << endl;
                if (firstname<10)
                {
                                while (*head != '\0')                           //loop runs as long as it hasn't reached the null char
                                {
                                                cout << *head;                  //will display intended string of characters
                                                head++;
                                }
                }
                else
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
                }
                cout << endl;
                tail = &firststr[strlen(firststr) - 1];                         /*assigns the address of firststr to tail with  
                                                                                 *elements being the # of characters (excluding null) */
                
                if (firstname < 10)
                {
                                while (*tail>0)                                 //loop will cout characters as user input them
                                {
                                                cout << *tail;                  
                                                tail--;
                                }
                }
                cout << endl;
                head = firststr;                                                //head now takes on the string of characters from firststr
                tail = &firststr[strlen(firststr) - 1];                         //same line of code as 32 & 33
                head++;
                tail--;
                if (*head == *tail)                                             //checks to see if strings are the same (case doesn't matter here)
                {
                                cout << "It is an palindrome!" << endl;
                }
                else
                {
                                cout << "It is not an palindrome" << endl;
                }
 
                return 0;
}