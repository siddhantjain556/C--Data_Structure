#include <iostream>
using namespace std;
int main()
{
    int left=0;
    int right=4;
    int a[5]={1,2,3,4,5};
    while(left<right)
    {
        int temp = a[right]; //gave array right value to temp
        a[right]=a[left];     //gave array left value to array right
        a[left]=temp;         // gave array temp value to array left
        left++;
        right--;
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
