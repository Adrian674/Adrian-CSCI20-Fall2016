//Creator: Adrian Gomez
//Date: 10/17/16

#include <iostream>
#include <string>
using namespace std;

int main(){
    int startTimeHrs;
    int startTimeMin;
    int endTimeHrs;
    int endTimeMin;
    string colon = ":";
    
    int startHour;
    int endHour;
    int minutes=0;
    
    cout<<"Input start time for hours (military time): "; //Have user enter start and end times
    cin>>startTimeHrs;
    
    cout<<"Input start time for minutes: ";
    cin>>startTimeMin;
    
    
    cout<<"Input end time for hours (military time): ";
    cin>>endTimeHrs;
    
    cout<<"Input end time for minutes: ";
    cin>>endTimeMin;
    
    if (startTimeMin > 59){                     //This will make any minutes entered passed 59min into an hour
            int x = 0;
            x = startTimeMin / 60;
            startTimeMin = startTimeMin % 60;
            startTimeHrs = startTimeHrs + x;
        }
    if (startTimeHrs > 23){                     //If user enters more than 23 hours,it will give message
            cout<<"You have passed 24 hrs.";
        }
        
    for (;startTimeHrs < endTimeHrs || startTimeMin <= endTimeMin;startTimeMin++){ //Loop that will add one minute
        
        if (startTimeMin % 60 == 0){
            startTimeMin = 0;
            startTimeHrs = startTimeHrs + 1;
        }
        if (startTimeMin < 10){                 //Ensures there is a zero before one digit minutes
                colon = ":0";
        }
        if (startTimeMin > 9){                  //Ensures there isn't a zero before 2 digit minutes
                colon = ":";
        }
        
        cout<<startTimeHrs<<colon<<startTimeMin<<endl; //Displays info
    }
    
   cout<<endl<<"Now 15 minute intervals will be given to you between two times."<<endl;
   
   cout<<"Enter a start hour: ";
   cin>>startHour;
   
   cout<<"Enter an end hour: ";
   cin>>endHour;
   
   for (startHour--;startHour < endHour ; minutes+=15){             //Loop will add 15 min intervals
       
       if (minutes % 60 == 0){
            minutes = 0;
            startHour = startHour + 1;
       }
       if (minutes < 10){                 //Ensures there is a zero before one digit minutes
                colon = ":0";
        }
        if (minutes > 9){                  //Ensures there isn't a zero before 2 digit minutes
                colon = ":";
        }
       
       cout<<startHour<<colon<<minutes<<endl; //Displays info
   }
    

}