// Creator: Adrian Gomez
// Date: 11/9/16
/* This program will read in student answers for a test and compare the answers to the corresponding answer key for the test.  
    *1 point is awarded for each correct answer, omitted answers get 0 points, and incorrect answers deduct ¼ point.  
    *The program should output to the screen and a file the student’s name, overall grade on the exam and each omitted or incorrect question.
    *It should then compute the class average grade and if there were any questions that more than 50% of the class omitted or got incorrect.
    */
    
#include <iostream>
#include <string>
using namespace std;

    
class Student{
    private:
    string name;
    string answers[21];
    string answerKey[21];
    double grade;
    double numUnanswered;
    
    public:
    String GetName( ){
        firstName + lastName;       
    }
    Sting GetGrade( ){
        
    }
};


int main(){
    const int numStudents = 6;
    
    for (int i=0; i<21; i++){
        if ((answers[i] = "?"){
            numUnanswered ++;
        }
        else if (answer[i]==answerKey[i]){
            score ++;
        }
        else{
            score -= 0.25;
        }
        
    }
ifstream fin("student_answeres.txt");
    fin >> firstName;
    fin >> lastName;
    
    for (i=0; i < 21; ){
        fin>>answers[i];
    }
  
}