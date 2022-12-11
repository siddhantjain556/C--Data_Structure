#include <iostream>
using namespace std;
int main ()
{
    int a[5]={1,2,3,4,5};
    int sum=5;
    int value=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if (a[i]+a[j]==sum)
            {
                value+=1;
            }
        }
    }
    cout<<"The no.of elements pair sum is 5: "<<value;
    return 0;
}
