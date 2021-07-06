#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n];
    
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){ 
        if(x[i]==0)
            cout<<"NULL";
        else{
            if(x[i]%2==0)
                    cout<<"EVEN ";
                else if(x[i]%2!=0)
                    cout<<"ODD ";
                if(x[i]>0)
                    cout<<"POSITIVE";
                else if(x[i]<0)
                    cout<<"NEGATIVE";
        }
        cout<<"\n";
        
    }
    return 0;
}
