#include <iostream>

using namespace std;

int main()
{
    int temp,maxTemp = -1;
    cout<<"Enter temperature: ";

    while(true)
    {
        cin>>temp;

        if(temp < 0 ||temp > 100)
            break;

        if(temp > maxTemp)
            maxTemp = temp ;

    }
    cout<<maxTemp;
    return 0;
}
