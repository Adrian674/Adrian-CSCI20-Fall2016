//Creator: Adrian Gomez
//Date: 10/10/16

#include <iostream>
using namespace std;


int main(){
    int type=2;
    
    int guitar,violin =2;
    int trumpet, sax =2;
    int flute, clar = 2;
    int drums, tri = 2;
    
    cout<<"What kind of instrument would you like to learn?"<<endl;
    cout<<"For String input 1"<<endl;
    cout<<"For Brass input 2"<<endl;
    cout<<"For Woodwind input 3"<<endl;
    cout<<"For Percussion input 4"<<endl;
    
    cin>>type;
    
    if (type > 4){
        cout<<"Invalid input..."<<endl;
    }
    
        if (type == 1){
        cout<<"String! Would you like to learn the guitar? 0 = 'no' 1 = 'yes': ";
        cin>>guitar;
        }
            if (guitar == 0){
                cout<<"Would you like to learn the violin? 0/no 1/yes ";
                cin>>violin;
            }
                
            else if (guitar == 1){
                cout<<"Great!"<<endl;
            }
                if (violin == 0){
                    cout<<"That is too bad..."<<endl;
                }
                else if (violin == 1){
                    cout<<"Great!"<<endl;
                }
        
        if (type == 2){
            cout<<"Brass! Would you like to learn the trumpet? 0 = 'no' 1 = 'yes': ";
            cin>>trumpet;
        }
            if (trumpet == 0){
                cout<<"Would you like to learn the saxophone? 0/no 1/yes ";
                cin>>sax;
            }
                
            else if (trumpet == 1){
                cout<<"Great!"<<endl;
            }
                if (sax == 0){
                    cout<<"That is too bad..."<<endl;
                }
                else if (sax == 1){
                    cout<<"Great!"<<endl;
                }
                
        if (type == 3){
            cout<<"Woodwind! Would you like to learn the flute? 0 = 'no' 1 = 'yes': ";
            cin>>flute;
        }
            if (flute == 0){
                cout<<"Would you like to learn the clarinet? 0/no 1/yes ";
                cin>>clar;
            }
                
            else if (flute== 1){
                cout<<"Great!"<<endl;
            }
                if (clar == 0){
                    cout<<"That is too bad..."<<endl;
                }
                else if (clar == 1){
                    cout<<"Great!"<<endl;
                }
                
        if (type == 4){
            cout<<"Percussion! Would you like to learn the drums? 0 = 'no' 1 = 'yes': ";
            cin>>drums;
        }
            if (drums == 0){
                cout<<"Would you like to learn the triangle? 0/no 1/yes ";
                cin>>tri;
            }
                
            else if (drums == 1){
                cout<<"Great!"<<endl;
            }
                if (tri == 0){
                    cout<<"That is too bad..."<<endl;
                }
                else if (tri == 1){
                    cout<<"You are a musician God!"<<endl;
                }
    else{
        cout<<"invalid input..."<<endl;
    }
}

