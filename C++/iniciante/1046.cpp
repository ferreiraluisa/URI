#include <iostream>
using namespace std;

int main (){
    int in,fim;
    cin>>in>>fim;
    
    if(in>=fim){
        cout<<"O JOGO DUROU "<<(24-in)+fim<<" HORA(S)"<<endl;
 
    }
    else{
        cout<<"O JOGO DUROU "<<fim-in<<" HORA(S)"<<endl;
    }
    
    return 0;

}
