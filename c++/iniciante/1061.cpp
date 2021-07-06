#include <iostream>
using namespace std;

int main(){
    char d[4];
    char doispontos;
    int hi,mini,hf,minf,di,df,si,sf;
    int segundosi,segundosf,tempof,hfinal,mfinal,sfinal,dfinal;

    cin>>d>>di;
    cin>>hi>>doispontos>>mini>>doispontos>>si;
    cin>>d>>df;
    cin>>hf>>doispontos>>minf>>doispontos>>sf;

    di = di*86400;
    hi = hi*3600;
    mini = mini*60;
    segundosi = di+hi+mini+si;
    df = df*86400;
    hf = hf*3600;
    minf = minf*60;
    segundosf = df+hf+minf+sf;

    tempof = segundosf - segundosi;


    dfinal = tempof/86400;
    hfinal = (tempof%86400)/3600;
    mfinal = ((tempof%86400)%3600)/60;
    sfinal = ((tempof%86400)%3600)%60;

    cout<<dfinal<<" dia(s)"<<endl;
    cout<<hfinal<<" hora(s)"<<endl;
    cout<<mfinal<<" minuto(s)"<<endl;
    cout<<sfinal<<" segundo(s)"<<endl;
    

    return 0;
}
