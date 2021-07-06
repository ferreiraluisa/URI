#include <iostream>
using namespace std;

int main (){
    int a,b;
    cin>>a>>b;
    int maior=0,menor=0;

    if(a>=b){
        maior=a;
        menor=b;
        if(maior%menor==0)
            cout<<"Sao Multiplos"<<endl;
        else
            cout<<"Nao sao Multiplos"<<endl;
    }
    else{
        maior=b;
        menor=a;
        if(maior%menor==0)
            cout<<"Sao Multiplos"<<endl;
        else
            cout<<"Nao sao Multiplos"<<endl;
    }

    return 0;
}
