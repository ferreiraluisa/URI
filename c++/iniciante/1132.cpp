#include <iostream>
using namespace std;

int main(){
    int a,b,maior,menor,soma=0;
    cin>>a>>b;

    if(a>=b){
        maior = a;
        menor = b;
    }
    else{
        maior = b;
        menor = a;
    }
    for(int i=menor;i<=maior;i++){
        if(i%13!=0)
            soma+=i;
    }
    cout<<soma<<endl;

    return 0;
}
