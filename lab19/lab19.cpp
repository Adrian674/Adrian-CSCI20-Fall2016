//Creator: Adrian Gomez
//Date: 11/9/16

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
//    fstream file("notepad.txt");
//    fstream output ("output.txt");
    
    int tmp = 0;
    int total = 0;
    int A[4][4];
    
    while (file){
   
    int i,j = 0;
    
    for (i=0; i < 4;i++){
    file >> tmp;
    output << " " << tmp;
    total += tmp;
    file << endl;
    }
    
    for(j=0; j < 4; j++){
        A[i][4] = [i][j];
        output<<A[j][i];
    }
    }

    output << " " <<total<<endl;
}



