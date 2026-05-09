#include<iostream>
using namespace std; //semicolon was missing 
int main()
{
    int n; //semicolon was missing
    cout<<"Enter number of terms: "; //semicolon was missing
    cin>>n; // >> will be here 
    if(n <= 0) //semicolon will not come here 
    {
        cout<<"Invalid Input"; //semicolon was missing 
    }
    int a = 0, b = 1, c;
    cout<<a<<" "<<b<<" ";
    for(int i = 2; i < n; i++) // i++ will come and i<n
    {
        c = a + b; //semicolon was missing
        cout<<c<<" ";
        a = b; //semicolon was missing
        b = c; //semicolon was missing and assignment operator will come 
    }
    return 0; //semicolon was missing
}
