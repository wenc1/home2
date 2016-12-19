#include <iostream>
using namespace std;

const int size=50;

void input(double* masiv,int br)
{
    for(int i=0; i<br; i++)
        cin>>masiv[i];
}

double avr(double* masiv,int br)
{
    double Srar[br];
    for(int i=0; i<br; i++)
    {
        if(i==0) Srar[i]=masiv[i+1];
        if(i==br-1) Srar[i]=masiv[i-1];
        if(i!=0&&i!=br-1) Srar[i]=(masiv[i-1]+masiv[i+1])/2;
    }

    int flag=0,save;
    for(int j=br-1; j>=0; j--)
    {
        if(masiv[j]==Srar[j])
        {
            flag=1;
            save=j;
            break;
        }
    }
    if(flag==1) return save;
    if(flag==0) return -1;

}


int main()
{
    double a[size],k;
    cin>>k;
    input(a,k);
    cout<<avr(a,k)<<endl;
    return 0;
}
