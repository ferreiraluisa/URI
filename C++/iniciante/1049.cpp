#include <iostream>
using namespace std;

int main(){
    char a[20],b[20],c[20];
    cin>>a;
    cin>>b;
    cin>>c;
    if(a[0]=='i'){
        if(b[0]=='i'){
            if(c[0]=='h'&& c[2]=='m'){
                cout<<"pulga"<<endl;
            }
            else if(c[0]=='h'&&c[2]=='r'){
                cout<<"lagarta"<<endl;
            }
        }
        else if(b[0]=='a'){
            if(c[0]=='h'){
                cout<<"sanguessuga"<<endl;
            }
            else if(c[0]=='o'){
                cout<<"minhoca"<<endl;
            }
        }
    }
    if(a[0]=='v'){
        if(b[0]=='a'){
            if(c[0]=='c'){
                cout<<"aguia"<<endl;
            }
            if(c[0]=='o'){
                cout<<"pomba"<<endl;
            }
        }
        if(b[0]=='m'){
            if(c[0]=='o'){
                cout<<"homem"<<endl;
            }
            if(c[0]=='h'){
                cout<<"vaca"<<endl;
            }
        }
    }
    
    return 0;
}
