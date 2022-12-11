#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int mx=0;
    for(int i=0;i<5;i++)
    {
        if (mx <a[i])
        {
            mx=a[i];
        }
    }
    cout<<"The Maximum Element is: "<<mx;
    return 0;
}
