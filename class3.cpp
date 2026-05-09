#include <iostream>
using namespace std;
class A
{
    int a1;int a2;
    public:
    A()
    {
        cout<<"\n Default";
        a1=0;
        a2=0;
    }
    A(int a1, int a2)
    {
        this->a1=a1;this->a2=a2;     //if names are same then it will give garbage value,pointer variable this is used here and it points to object a1 because by default local variable gets priority
    }
    void display()
    {
        cout<<"\n a1= "<<a1<<"\n a2= "<<a2;
    }
};
int main()
{
    A obj1,obj2(20,45);
    obj1.display();
    obj2.display();
    return 0;
}
