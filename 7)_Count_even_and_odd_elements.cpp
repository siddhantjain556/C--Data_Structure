#include <iostream>
using namespace std;

void countevenodd(int a[], int n)
{
    int evencount,oddcount=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evencount+=1;
        }
        else
        {
            oddcount+=1;
        }
    }
    cout<<"Even Integers: "<<evencount<<endl;
    cout<<"Odd Integers: "<<oddcount;
}
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    countevenodd(a,n);
    return 0;
}
