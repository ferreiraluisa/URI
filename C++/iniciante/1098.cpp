#include <iostream>
using namespace std;

int main(){
    double x=1,y=3;
    for(double i=0;i<=2;i+=0.2){
        for(double j=x;j<=y;j++){
            cout<<"I="<<i<<" J="<<j<<endl;
        }
        x +=0.2;
        y +=0.2;
    }

    return 0;
}
