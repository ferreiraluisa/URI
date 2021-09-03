#include <iostream>

using namespace std;

int main(){
    int x,y,soma=0,cont=1;
    cin>>x;
    do{
        cin>>y;
    }while(x>=y);
    for(int i=x;true;i==x){
        x = x+1;
        soma +=x;
        if(soma>=y)
            break;
        cont++;
    }
    cout<<cont<<endl;
    return 0;
}
