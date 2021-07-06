#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int n;
    cin>>n;
    int x[n],y[n];

    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++){
        if(y[i]==0)
            cout<<"divisao impossivel"<<endl;
        else{
            cout<<fixed<<setprecision(1);
            cout<<float(x[i])/float(y[i])<<endl;
        }
    }
    return 0;
}
