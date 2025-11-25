#include <iostream>

using namespace std;

int main()
{
    int num,count = 0;
    cout<<"enter the num ";
    do
    {
        cin>>num ;

        if(num != 0)
            count++;

    }
    while(num != 0);

    cout<<count ;

    return 0;
}
