#include <iostream>
using namespace std;

int main(){
    int c=0,conta=0,contg=0,contd=0;

    while(c!=4){
            cin>>c;
        if(c==1)
            conta++;
        else if(c==2)
            contg++;
        else if(c==3)
            contd++;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<conta<<endl;
    cout<<"Gasolina: "<<contg<<endl;
    cout<<"Diesel: "<<contd<<endl;

    return 0;
}
