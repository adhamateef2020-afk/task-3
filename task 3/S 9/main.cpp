#include <iostream>

using namespace std;

int main()
{
    int boxes[7];
    int sum = 0,maxChoco = -1, maxIndex = 0;

    for(int i = 0 ; i< 7 ; i++)
    {
        cin>>boxes[i] ;
        sum+= boxes[i] ;

        if(boxes[i] > maxChoco)
        {
            maxChoco = boxes[i];
            maxIndex = i+1 ;
        }
    }
    cout<< "Total chocolates = "<< sum << endl;
    cout<< "Box "<< maxIndex << "has the most chocolates = " << maxChoco<< endl;

    return 0;
}
