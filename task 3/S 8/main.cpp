#include <iostream>

using namespace std;

int main()
{
    int grades[6];
    int maxGrade = -1;

    for(int i = 0 ; i < 6 ; i++)
    {
        cin>>grades[i];

        if(grades[i] > maxGrade)
            maxGrade = grades[i];
    }

    cout<<maxGrade ;

    return 0;
}
