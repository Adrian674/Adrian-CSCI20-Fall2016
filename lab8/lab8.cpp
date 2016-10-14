//Creator: Adrian Gomez
//Date: 9-12-2016
//Create a program that converts pounds to kilograms and kilograms to pounds.  User should first enter Kilograms and then pounds. 

#include <iostream>
using namespace std;

double ToKilos (double pounds)          //function set up to calculate kilos from pounds
{
    double amountKilos;
    amountKilos= (pounds * 2.20462);
    return amountKilos;
}

double ToPounds (double kilos)
{
    double amountPounds;
    amountPounds= (kilos * .453592);
    return amountPounds;
}

int main(){
  // double pounds= 0;
  // double kilos= 0;
   
    cout<<"Please input an amount of pounds: ";
    cin>>;
    
    cout<<"Please input an amount of kilos";
    cin>>kilos;
    
}