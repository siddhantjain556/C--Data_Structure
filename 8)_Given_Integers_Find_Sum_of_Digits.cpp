#include <iostream>
using namespace std;
int main()
{
    int sumdigit =0;
    int n=234;
    while (n!=0)
    {
        int lastdigit=n%10;
        sumdigit = sumdigit + lastdigit;
        n=n/10;
    }
    cout<<sumdigit;
    return 0;
}
