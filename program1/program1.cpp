//Creator: Adrian Gomez-Mora
//Date: 9/12/16
/*Program will Calculate a person’s weekly wages based on hourly salary and hours. 
 *Determine how much they would get paid if they paid 17% in taxes. 
 *Create a wage slip with name, hours, rate, gross pay, and net pay.
*/

#include <iostream>//Sets up preprocessor directives
#include <string>
using namespace std;

struct wageSlip {//struct is created to define wageslip
string name;
float hoursWeek;
float hourlySalary;
float grossPay;
float netPay;
};


int main(){
    wageSlip wageSlip1;//define first object of struct created
    
    wageSlip1.name=" ";
    wageSlip1.hoursWeek= 0;
    wageSlip1.hourlySalary = 0.00;
    wageSlip1.grossPay= 0.00;
    wageSlip1.netPay= 0.00;
    
    cout<<"Enter your name: ";//have i/o statements for users
    getline(cin,wageSlip1.name);
    
    cout<<"What is your rate of pay?: ";
    cin>>wageSlip1.hourlySalary;
    
    cout<<"How many hours do you work a week?: ";
    cin>>wageSlip1.hoursWeek;
    
    wageSlip1.grossPay= wageSlip1.hourlySalary * wageSlip1.hoursWeek;//will calculate weekly gross pay
    
    wageSlip1.netPay= wageSlip1.grossPay - (wageSlip1.grossPay * 0.17);
    
    cout<<" "<<endl;
    cout<<"Here is your wage slip: "<<endl;//output all information for wageslip
    cout<<"        Name: "<<wageSlip1.name<<endl;
    cout<<"Hours Worked: "<<wageSlip1.hoursWeek<<" hours"<<endl;
    cout<<"        Rate: "<<"$"<<wageSlip1.hourlySalary<<endl;
    cout<<"   Gross Pay: "<<"$"<<wageSlip1.grossPay<<endl;
    cout<<"     Net Pay: "<<"$"<<wageSlip1.netPay<<endl;
    
    
}