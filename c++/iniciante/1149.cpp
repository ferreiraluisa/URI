#include <iostream>

using namespace std;

int main(){
    int x,n=0,soma=0,somac=0;
    cin>>x;
    while(n<=0){
        cin>>n;
    }
    for(int i=0;i<=(n-1);i++){
        soma = x + i;
        somac += soma;
    }
    cout<<somac<<endl;

    return 0;
}
