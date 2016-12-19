#include <iostream>
using namespace std;

void swap(int* prom,int* prom1)
{
    int* save = prom;
    *prom=*prom1;
    *prom1=*save;

}

int main()
{
    int a=1,b=2;

    swap(a,b);

    cout<<a<<" "<<b<<endl;

    return 0;
}
