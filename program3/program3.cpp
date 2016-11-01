//Creator: Adrian Gomez
//Date: 10/19/16
/*The computer will choose a random number between two numbers chosen by the user. 
    *The user enters a number and is told “higher”, “lower”, or “winner” based on their guess and the computer’s number.  
    *The game should continue until the user guesses the correct number.  
    *The program should score the game based on how many guesses it takes to get the number. */
    
#include <iostream>
#include <cstdlib>
using namespace std;
    
class RandomNumber{                                 //Class generates a random number
    private:
    int randNumber_;
    int max_;
    int min_;
    bool check_;
    
    public:
    
    RandomNumber(int y, int z){
        
        check_ = false;
        min_= y;
        max_= z;
        randNumber_ = (rand()%max_)+min_;           //Equation makes random # generated between two user values
        };
    
    void compare(int x){                            //Comparison is done to see if guess is correct
        if (x>randNumber_){
            cout<<"Guess lower: ";
        }
        else if (x<randNumber_){
            cout<<"Guess higher: ";
        }
        else{
            cout<<"You guessed correctly! ";
            check_ = true;
        }
    }
    
    bool did_win() {                                //Function will return the check for the winning condition
        return check_;
    }
    void set_did_win(bool x) {                      //Correct guess will set check_ to true
        check_ = x;   
    }
    
    int GetRandomNumber(){                          //Function to return the random # generated
         return randNumber_;  
    }
    
};

    
int main(){
    int minNum;                                     //Variables are created for user input
    int maxNum;
    int userGuess;
    int score1= 100;
    
    cout<<"Please enter your low number: ";
    cin>> minNum;
    
    cout<<"Please enter your high number: ";
    cin>> maxNum;
    
    RandomNumber my_Class= RandomNumber(minNum,maxNum); //User input is passed into class
    
    cout<<"Please enter your guess: ";
    cin>>userGuess;
    
    my_Class.compare(userGuess);
    
    while (!my_Class.did_win()){                        //Loop checks if user guess is correct
        if (userGuess>my_Class.GetRandomNumber()){
            cout<<"Guess lower: ";
            cin>>userGuess;
            score1= score1 - 10;                        //Points are accounted for in loop
        }
        else if (userGuess<my_Class.GetRandomNumber()){
            cout<<"Guess higher: ";
            cin>>userGuess;
            score1= score1 - 10;
        }
        else{
            cout<<"You guessed correctly! ";
            my_Class.set_did_win(true);
        }
    }
    
cout<<"Your score is "<<score1<<" out of 100.";         //Points are displayed
}