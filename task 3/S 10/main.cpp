#include <iostream>

using namespace std;

int main()
{
    int num, sumEven = 0;

    while(true)
    {
        cin>>num ;

        if(num == 0)
            break;

        if(num % 2 == 0)
        {
            sumEven+= num ;
        }
    }
    cout<<sumEven ;

    return 0;
}
