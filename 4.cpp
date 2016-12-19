#include <iostream>

using namespace std;

const int size=40;

void input(int* masiv, int br, int br1 )
{
    for(int i=0; i<br; i++)
    {
        for(int j=0; j<br1; j++)
        cin>>masiv[i*br1+j];
    }
}

void print(int* masiv, int br, int br1 )
{
    for(int i=0; i<br; i++)
    {
        for(int j=0; j<br1; j++)
        {
            cout<<masiv[i*br1+j]<<" ";
        }
        cout<<endl;
    }
}


void transpon(int* masiv, int  br, int br1, int* masiv1)
{
    for(int i=0; i<br; i++)
        for(int j=0; j<br1; j++)
        {
            masiv1[i*br1+j]=masiv[j*br1+i];
            masiv1[j*br1+i]=masiv[i*br1+j];
        }
}


int main()
{
    int a[size][size],x,y;
    cin>>x>>y;
    input(a[y],x,y);
    int b[size][size],x1,y1;
    transpon(a[y],x,y,b[x]);
    print(b[y],y,x);

    return 0;
}
