//Creator: Adrian Gomez-Mora
//Date: 8/31/16

#include <iostream>
using namespace std;

int main() {
    int money= 0;
    double moneyTotal = 0.00;
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;
    int pennies = 0;
    int afterFee = 0.00;
    
    cout<<"enter amount of cents: ";
    cin>>money;
    
    cout<<"You have entered " <<money<< " cents."<<endl;
    
    quarters = money / 25;
    dimes = (money % 25)/ 10;
    nickles = ((money % 25)% 10)/ 5;
    pennies = ((money % 25)% 10)% 5;
    
    cout<<"That was "<<quarters<<" quarters, ";
    cout<<dimes<<" dimes, "<<nickles<<" nickles " <<pennies<< " pennies."<<endl;
    
    moneyTotal= money / 100.00;
     cout<<"The total is $"<< moneyTotal<<endl;
     
     afterFee= money - (money * 0.109);
     moneyTotal= afterFee / 100.00;
     
     cout<<"After the fee you get $"<< moneyTotal<< " in cash.";
}