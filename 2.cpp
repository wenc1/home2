#include <iostream>
using namespace std;

const int size=50;

void input(int* masiv,int br)
{
    for(int i=0; i<br; i++)
        cin>>masiv[i];
}

void swap(int* prom,int* prom1)
{
    int* save= prom;
    *prom=*prom1;
    *prom1=*save;
}

void reverse(int* masiv,int br)
{
    for(int i=0; i<=br/2; i++)
        swap(masiv[i],masiv[br-i-1]);

}


void print (int* masiv,int br)
{
    for(int i=0; i<br; i++)
        cout<<masiv[i]<<" ";
}


int main()
{
    int a[size],n;
    cin>>n;

    input(a,n);
    reverse(a,n);
    print(a,n);

    return 0;
}
