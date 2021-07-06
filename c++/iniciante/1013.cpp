#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,ab,c,m;
    cin>>a;
    cin>>b;
    cin>>c;
    ab = (a+b+abs(a-b))/2;
    m = (ab+c+abs(ab-c))/2;
    cout<<m<<" eh o maior"<<endl;
    
    return 0;
}
