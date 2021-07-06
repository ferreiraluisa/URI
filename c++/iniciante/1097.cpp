#include <iostream>
using namespace std;

int main(){
    int x=7,y=5;
    for(int i=1;i<=9;i+=2){
        for(int j=x;j>=y;j--){
            cout<<"I="<<i<<" J="<<j<<endl;
        }
        x +=2;
        y +=2;
    }

    return 0;
}
