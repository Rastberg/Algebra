#include <iostream>

using namespace std;
int Euklid(int,int);
int main()
{
    int a,b;
    cout<<"Podaj pierwsza liczbe: "<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe: "<<endl;
    cin>>b;
    cout<<"NWD = " <<Euklid(a,b)<<endl;
}
int Euklid(int a, int b)
{
    int reszta;
    while((reszta = a%b)>0)
    {
        a = b;
        b = reszta;
    }
    return b;
}
