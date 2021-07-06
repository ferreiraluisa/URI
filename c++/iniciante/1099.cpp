#include <iostream>
using namespace std;

int main(){
    int n,soma,a,b;
    cin>>n;
    int x[n],y[n];

    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }

    for(int i=0;i<n;i++){
        soma = 0;
        if(x[i]>=y[i]){
            a = y[i];
            b = x[i];
        }
        else{
            a = x[i];
            b = y[i];
        }
        for(int j=a+1;j<b;j++){
            if((j%2)!=0)
                soma +=j;
        }
        cout<<soma<<endl;
    }
    return 0;
}
