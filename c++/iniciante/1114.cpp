#include <iostream>
using namespace std;

int main(){
    int senha;
    
    while(true){
        cin>>senha;
        if(senha!=2002)
            cout<<"Senha Invalida"<<endl;
        else
            break;
    }
    cout<<"Acesso Permitido"<<endl;

    return 0;
}
