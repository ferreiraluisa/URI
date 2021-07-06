#include <iostream>
using namespace std;
int main(){
    int n[100];
    int maior=0,posicao=0;

    for(int i=0;i<100;i++){
        cin>>n[i];
        if(n[i]>maior){
            maior = n[i];
            posicao = i+1;
        }
    }
    cout<<maior<<endl;
    cout<<posicao<<endl;
    
    return 0;


}
