#include <iostream>
using namespace std;

int main(){
    int gremio,inter,x;
    int contjogos=0,contgremio=0,continter=0,contempate=0,cont=0;

    while(true){
        cin>>inter>>gremio;
        if(gremio>inter)
            contgremio++;
        else if(gremio<inter)
            continter++;
        else
            contempate++;
        cont++;
        while(x!=1 && x!=2){
            cout<<"Novo grenal (1-sim 2-nao)"<<endl;
            cin>>x;
        }
        if(x==1)
            x=0;
        if(x==2)
            break;
    }
    cout<<cont<<" grenais"<<endl;
    cout<<"Inter:"<<continter<<endl;
    cout<<"Gremio:"<<contgremio<<endl;
    cout<<"Empates:"<<contempate<<endl;

    if(contgremio<continter)
        cout<<"Inter venceu mais"<<endl;
    else if(contgremio==continter)
        cout<<"Nao houve vencedor"<<endl;
    else
        cout<<"Gremio venceu mais"<<endl;

    return 0;
        
}
