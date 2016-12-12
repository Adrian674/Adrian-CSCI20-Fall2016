//Creator: Adrian Gomez
//Date: Oct 25

#include <iostream>
#include <string>
using namespace std;

int main(){
    
int i = 0;
int count = 0;
int tools = 20;

string item[10];                                    //An array for items

item[0]= "pencil";
item[1]= "pen";
item[2]= "eraser";
item[3]= "sharpener";
item[4]= "ruler";
item[5]= "protractor";
item[6]= "paper";
item[7]= "calculator";
item[8]= "backpack";
item[9]= "laptop";

cout<<"---Menu---"<<endl;
for (i=0; i<=9; ++i){                               //Loop to display items available
    cout<<item[i]<<endl;
}

while (i <= 10){                                    //Loop to have user chose items

cout<<"Choose a number (1-10) to pick an item from the store or any number "
        "bigger than 10 to quit: ";
cin>>i;
    if (i<=0){
    cout<<"Please chose a number bigger than 0: ";
    cin>>i;
    cout<<"You have chosen item: ";
    cout<<item[i-1]<<endl<<endl;
    count ++;
    }
    else if (i<=10){
        cout<<"You have chosen item: ";
        cout<<item[i-1]<<endl<<endl;
        count ++;
    }
    else{
        cout<<"Thank you for playing!"<<endl;
    }
}
cout<<"Your cart has ";                 //display items in cart
cout<<count<<" items. Thanks for playing."<<endl;

}