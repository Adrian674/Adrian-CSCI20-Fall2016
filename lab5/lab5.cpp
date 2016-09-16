//Creator: Adrian Gomez
//Date: 9/7/16

#include <iostream>
#include <string>
using namespace std;

struct MonsterStruct {
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
};
int main() {
    MonsterStruct monster1;
    
    monster1.head;
    monster1.eyes;
    monster1.ears;
    monster1.nose;
    monster1.mouth;
    
    cout<<"Choose monster's head (Zombus/Franken/Happy): ";
    cin>>monster1.head;
    
    cout<<"Choose monster's eyes (Vegitas/Wackus/Spritem/none): ";
    cin>>monster1.eyes;
    
    cout<<"Choose monster's ears (Vegitas/Wackus/Spritem/none): ";
    cin>>monster1.ears;
    
    cout<<"Choose monster's nose (Vegitas/Wackus/Spritem/none): ";
    cin>>monster1.nose;
    
    cout<<"Choose monster's mouth (Vegitas/Wackus/Spritem/none): ";
    cin>>monster1.mouth; 
    
    cout<<" "<<endl;
    
    cout<<"monster1: "<<monster1.head<<", "<<monster1.eyes<<", "<<monster1.ears
    <<", "<<monster1.nose<<", "<<monster1.mouth<<endl;
    
    
    MonsterStruct monster2;
    
    monster2.head= "Happy";
    monster2.eyes= "Vegitas";
    monster2.ears="Wackus";
    monster2.nose="Spritem";
    monster2.mouth="Vegitas";
    
    cout<<"monster2: "<<monster2.head<<", "<<monster2.eyes<<", "<<monster2.ears
    <<", "<<monster2.nose<<", "<<monster2.mouth<<endl;
    
    
    MonsterStruct monster3;
    
    monster3.head= "Franken";
    monster3.eyes= "Vegitas";
    monster3.ears="none";
    monster3.nose="Spritem";
    monster3.mouth="Wackus";
    
    cout<<"monster3: "<<monster3.head<<", "<<monster3.eyes<<", "<<monster3.ears
    <<", "<<monster3.nose<<", "<<monster3.mouth<<endl;
    
    
    MonsterStruct monster4;
    
    monster4.head= "Zombus";
    monster4.eyes= "none";
    monster4.ears="Vegitas";
    monster4.nose="Wackus";
    monster4.mouth="none";
    
    cout<<"monster4: "<<monster4.head<<", "<<monster4.eyes<<", "<<monster4.ears
    <<", "<<monster4.nose<<", "<<monster4.mouth<<endl;
}