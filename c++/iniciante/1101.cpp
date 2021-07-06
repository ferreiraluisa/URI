#include <iostream>

using namespace std;

int main() {

    int a,b,sum=0,maior,menor;
    while(true)
    {
        cin>>a>>b;
        sum=0;
        if(a<=0||b<=0)
            break;
        else{
            if(a>b){
                maior=a;
                menor=b;
            }
            else if(b>a){
                maior=b;
                menor=a;
            }
            for(int i=menor;i<=maior;i++){
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<"Sum="<<sum<<endl;
        }
            
    }

    

    return 0;
}
