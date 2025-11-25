#include <iostream>

using namespace std;

int main()
{
    int n;

    long long result = 1;

    cout<<"Enter a positive number: ";
    cin>>n;

    for(int i = 0 ; i <=n ; i++)
    {
        result += i;
    }
    cout<<result;
    return 0;
}
