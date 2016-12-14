//Creator: Adrian Gomez
//Date: 12/7/16

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

class student{
  public:
  student(string n = "Adrian" ){
  size = 0;
  name = n;
  }
  void parse(string filename){              //Will parse data
    fstream file (filename.c_str());
    unsigned int i=0;
    unsigned int j=0;
  
  if (file.is_open()){  
    while (file.good()){
      getline(file,courses[i][j++]);
      getline(file,courses[i][j++]);
      getline(file,courses[i][j]);
      i++;
      size ++;
      j=0;
      
    }
  }
  
  else{
    cout<<"The file could not open."<<endl;
  }
}
  void report (){
    double score_total;
    double credit_total;
    
    for (int i=0; i < size; i++){
      stringstream ss;
      double grade = 0;
      double credit = 0;
      ss<<courses[i][1];  //grade
      ss>>grade;
      ss<<courses[i][2];  //credits
      ss>>credit;
      score_total += (grade * credit);
      credit_total += credit;
    }
    cout<<"------Transfer Report------"<<endl;
    cout<<"Student name: "<< name<<endl;
    cout<<"Student credit: "<<credit_total<<endl;
    cout<<"Student GPA: "<< fixed<<setprecision(2)<<score_total/credit_total<<endl;
    cout<<"Here is a list of the courses you have taken: "<<endl;
    
    for (int i=0; i < size; i++){
      cout<<courses[i][0]<<endl;
    }
  
  }
  void zero(){
    size=0;
  }
  
  private:
  int size;
  string name;
  string courses [20][3];
};

int main(){
//    student Adrian;
    
//    Adrian.parse("CompSci.txt");
    
//    Adrian.report();

string choice;

    
   
    while (true){
    string filestudent1;
    string username;
    cout<<"Put the file name: "<<endl;
    getline(cin, filestudent1);
    cout<<"What is the student's name?: "<<endl;
    getline(cin, username);
    cout<<filestudent1<<endl<<endl;
    student S(username);
    S.parse(filestudent1);
    S.report();
    S.zero();
    
    cout<<endl;
    cout<<"Would you like to enter another file? 'yes' or 'no': ";
    getline(cin, choice);
    
    if (choice == "no"){
      cout<<"Have a nice day."<<endl;
      return 0;
    }
    }
}

