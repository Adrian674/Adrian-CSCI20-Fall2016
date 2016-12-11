//Creator: Adrian Gomez
//Date: 9-12-2016
//Create a program that converts pounds to kilograms and kilograms to pounds.  User should first enter Kilograms and then pounds. 

#include <iostream>
using namespace std;


class weightConv {
    private:
    double kilos_;                  //These are local variables to the class
    double pounds_;

    public:
    weightConv(){
        kilos_  = 0;
        pounds_ = 0;
    }
    
void SetKilos (double kilos) {      //kilos is local to function
    kilos_ = kilos;
}

double GetKilos () {          
    return kilos_;
}

void SetPounds (double pounds){     //pounds is local to function
    pounds_ = pounds;
}

double GetPounds (){
    return pounds_;
}

double ptok() {
 return pounds_ * .453592;    
}

double ktop() {
    return kilos_ * 2.20462;
    
}

};

int main(){                             
    weightConv weight;
    double pounds;                      //Global variables
    double kilos;
    
    cout<<"Please input an amount of kilos: ";
    cin>>kilos;
    weight.SetKilos(kilos);
    
    cout<<"Please input an amount of pounds: ";
    cin>>pounds;
    weight.SetPounds(pounds);
    
    cout<<"Here is the conversion from kilos to pounds: " <<weight.ktop()<<endl;
    cout<<"Here is the conversion from lbs to kilos: " <<weight.ptok()<<endl;
   
}