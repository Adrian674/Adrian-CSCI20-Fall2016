//Creator: Adrian Gomez
//Date: 9-12-2016
//Create a program that converts pounds to kilograms and kilograms to pounds.  User should first enter Kilograms and then pounds. 

#include <iostream>
using namespace std;
class weightConv {
    private:
    int kilos_;
    int pounds_;
}
double ToKilos (double pounds)          //function set up to calculate kilos from pounds
{
    double amountKilos;
    amountKilos= (pounds * .453592);
    return amountKilos;
}

double ToPounds (double kilos)
{
    double amountPounds;
    amountPounds= (kilos * 2.20462);
    return amountPounds;
}

int main(){
   double pounds= 0;
   double kilos= 0;
   
    cout<<"Please input an amount of pounds: ";
    cin>>pounds;
    
    cout<<"Please input an amount of kilos: ";
    cin>>kilos;
    
    cout<<"Here is the conversion from "<<pounds<<" lbs to kilos: "<<ToKilos(pounds)<<endl;
    cout<<"Here is the conversion from "<<kilos<<" kilos to pounds: "<<ToPounds(kilos)<<endl;
    
}