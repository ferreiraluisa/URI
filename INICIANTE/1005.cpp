#include <iostream>
#include <iomanip>

using namespace std;

int main()

{

 double A,B,media;

 cout<<fixed<<setprecision(1);
 cin>>A;
 cin>>B;
 cout<<fixed<<setprecision(5);
 media=((A*3.5)+(B*7.5))/11;
 cout<<"MEDIA = "<<media<<endl;

    return 0;
}
