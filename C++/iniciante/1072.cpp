#include <iostream>
using namespace std;

int main(){
    int n,x,contin=0,contout=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=10 && x<=20)
            contin++;
        else
            contout++;
    }
    cout<<contin<<" in"<<endl;
    cout<<contout<<" out"<<endl;

    return 0;
}
