#include <iostream>
using namespace std;

int main(){
    int x,y,soma=0,maior,menor;
    cin>>x>>y;

    if(x>=y){
        maior=x;
        menor=y;
    }
    else{
        maior=y;
        menor=x;
    }
    for(int i=menor+1;i<maior;i++){
        if(i%2!=0)
            soma += i;
    }
    cout<<soma<<endl;

    return 0;
}
