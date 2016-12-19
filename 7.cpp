#include <iostream>
using namespace std;

const int size=50;

void input(int* masiv,int br)
{
    for(int i=0; i<br; i++)
        cin>>masiv[i];
}


int funk(int* masiv,int br, int ch)
{
    int flag=0,i=0;

    do
    {
        if(masiv[i]==ch)
        {
            flag=1;
            int c=i;
            br--;
            do
            {
                masiv[c]=masiv[c+1];
                c++;
            }
            while(c!=br-1);


        }
        i++;
    }
    while(i!=br-1);

    if(flag==0) return false;
    if(flag==1) return true;
}



int main()
{
    int a[size],razm;

    cin>>razm;
    input(a,razm);

    int chislo;
    cin>>chislo;

    cout<<funk(a,razm,chislo)<<endl;

    return 0;
}
