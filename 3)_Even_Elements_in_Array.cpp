#include <iostream>
using namespace std;
int main ()
{
    int a[6]={1,2,3,4,5,6};
    int value;
    for(int i=0;i<6;i++)
    {
        if(a[i]%2==0)
        {
            value+=1;
        }
    }
    cout<<"The No. Of Even Elements In The Array are: "<< value;
    return 0;
}
