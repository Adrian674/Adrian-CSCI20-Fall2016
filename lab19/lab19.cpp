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
    
/*    int tmp = 0;
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
*/

/*	string file;
	cout << "Please input the name of your file: " ;
	getline(cin, file);//getline is another cin but with some sort of error checking
	
	ifstream secretFile(file.c_str());// .c_str is to relate to relic c language.
    // secretFile it is an object.
	if (secretFile.good() == false) {// just to check that is accesible.
		cout << "file not found" << endl;//this is the message displayed if it is not good
		return 0;//cancells all the program
	}else{//if is good then
	    int input[4][4];
	    for(int i = 0; i < 4; i++){//to handle the multidimentional array
	        for(int j = 0; j < 4; j++){//two are needed.
	            secretFile>> input[i][j];//inserts it all in the array first in one direcion
	        }//rown and then columns.
	    }
	    secretFile.close();//close so it doesn't gets corrupt
	    ofstream otherFile("output.txt");// this is the modified file.
	    
	    if (otherFile.good() == false) {//if the new file is bad
	        cout << "could not write" <<endl;//output this.
	        return 0;
	    }
	    for(int i = 0; i < 4; i++){
	        int total  = 0;
	        for(int j = 0; j < 4; j++){
	            otherFile<< setw(2)  <<input[i][j]<<" ";//need to set the width set stream manipulators
	            total += input[i][j];// summing everithing in total
	        }
	        otherFile<<setw(2)<<total<<endl;
	    }
	    for(int i = 0; i < 4; i++){
	        int total = 0;
	        for(int j = 0; j < 4; j++){
	            total += input[j][i];// now fliping it so, it writed the columns.
	        }
	        otherFile<<setw(2)<<total<<" ";
	       
	    }
	    otherFile<<endl;//just to put a space
	    otherFile.close();//and closing it like good bye otherFile.
	}
	
    return 0;
}
*/
