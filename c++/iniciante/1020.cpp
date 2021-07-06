#include <iostream>
 
using namespace std;
 
int main() {
 
   int n,b;
   cin>>n;
   b = n/365;
   cout<<b<<" ano(s)"<<endl;
   b = (n%365)/30;
   cout<<b<<" mes(es)"<<endl;
   b = (n%365)%30;
   cout<<b<<" dia(s)"<<endl;
    return 0;
}
