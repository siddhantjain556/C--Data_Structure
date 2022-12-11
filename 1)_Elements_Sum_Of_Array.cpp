#include <iostream>
using namespace std;
int main()
{
    int sum;
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        sum+=a[i];
    }
    cout<<"The Sum of Elements is : "<<sum;
    return 0;
}
