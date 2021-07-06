#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x;
    cin>>x;
    int n,contc=0,contr=0,conts=0,soma=0;
    char t;

    for(int i=0;i<x;i++){
        cin>>n>>t;
        soma += n;
        if(t == 'C')
            contc += n;
        else if(t == 'R')
            contr += n;
        else if(t == 'S')
            conts +=n;
    }
    cout<<fixed<<setprecision(2);
    cout<<"Total: "<<soma<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<contc<<endl;
    cout<<"Total de ratos: "<<contr<<endl;
    cout<<"Total de sapos: "<<conts<<endl;
    cout<<"Percentual de coelhos: "<<(float(contc)/float(soma))*100.00<<" %"<<endl;
    cout<<"Percentual de ratos: "<<(float(contr)/float(soma))*100.00<<" %"<<endl;
    cout<<"Percentual de sapos: "<<(float(conts)/float(soma))*100.00<<" %"<<endl;

    return 0;
}
