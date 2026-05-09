#include <iostream>
using namespace std;
void computePerformance(int m[],int n)
{
    int i;
    int min=m[0] , max=m[0], avg=0;
    for (i=1; i<n ; i++)
    {
        if (max<m[i])
        {
            max=m[i];
        }
        if(min>m[i])
        {
            min=m[i];
        }
        avg+=m[i];
    }
    cout<<"\n average is: "<<avg<<endl;
    cout<<"\n max is: "<<max<<endl;
    cout<<"\n min is: "<<min<<endl;
}
int main()
{
    int marks[10]={45,52,48,69,75,25,10,59,62,47};
    computePerformance(marks,10);
    return 0;
}
