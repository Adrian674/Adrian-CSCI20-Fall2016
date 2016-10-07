//Creator: Adrian Gomez
//Date: 10/5/16

#include <iostream>
#include <string>
using namespace std;

string userName = " ";
int status = 0;
double grossIncome= 0;
double withheld = 0;
double tax=0;
double wages=0;
double tips=0, unemployment=0, taxOwed=0;

int main(){
    
    cout<<"What is your name?"<<endl;                   //Ask user for name
    getline(cin,userName);
    
    cout<<"Enter 1 for single or 2 for married: "<<endl;// Ask for marriage status
    cin>>status;
    
    if (status==2){
        tax= (3900 + 6100);
    }
    else if (status==1){
       tax= (2*(3900 + 6100));
    }
    else{
        cout<<"Must be 1 or 2!"<<endl;
    }

    cout<<"What are your wages"<<endl;                  //Input on income sources
    cin>>wages;
    
    cout<<"What are your tips? "<<endl;
    cin>>tips;
    
    cout<<"What is your unemployment income?"<<endl;
    cin>>unemployment;
    
    grossIncome= wages + tips + unemployment;
    
    if ((grossIncome-tax)<0){                           //Set up series of if/else statements for taxOwed
        taxOwed=0;
        
    }else if (grossIncome<=8925&& status==1){
       taxOwed= grossIncome * .10;
    }
    else if (grossIncome<=36250&& status==1){
       taxOwed= 892.5 + ((grossIncome - 892.5) * .15);
    }
    else if (grossIncome<= 87850&& status==1){
        taxOwed= 4991.25 + ((grossIncome - 4991.25) * .25);
    }
    else if (status==1){
     taxOwed= 17891.25 + ((grossIncome - 87850) * .28);
    }
    else if (grossIncome<=17850){
        taxOwed= grossIncome * .10;
    }
    else if (grossIncome<= 72500){
        taxOwed= 1785 + ((grossIncome - 17850) * .15);
    }
    else {
        taxOwed= 9982.5 + ((grossIncome - 72500) * .28);
    }
    
    cout<<"What is the amount of money withheld? "<<endl;//Asks for money withheld
    cin>>withheld;
    
    cout<<" "<<endl;                                    //Output for name, tax owed, and refund/pay
    cout<< "Name: "<<userName<<endl
        << "Total Adjusted Gross: "<< grossIncome<<endl
        << userName<< " is ";
    
    if (taxOwed<= withheld)
       cout<<"entitled to a refund of: $"<<(withheld - taxOwed);
    else {
        cout<<"required to pay: $"<<(taxOwed - withheld);
    }
    
}