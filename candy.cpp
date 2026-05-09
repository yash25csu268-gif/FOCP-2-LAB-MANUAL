#include<iostream>
using namespace std;
class Candy
{
    string color;
    int points;
    public:
    void setCandy(string c,int p);
    void displayCandy();
    void lose_point(int);
    void gain_point(int);
};
void Candy::setCandy(string c, int p)
{
    color=c; points=p;
}
void Candy::displayCandy()
{
    cout<<"\n Color of the Candy : "<<color;
    cout<<"\n Your points are : "<<points;
}
void Candy::lose_point(int p)
{
    points=points-p;
}
void Candy::gain_point(int p)
{
    points=points+p;
}
int main()
{
    Candy c1,c2;
    c1.setCandy("Blue",28);
    c1.displayCandy();
    c2.setCandy("Black",23);
    c2.displayCandy();
    return 0;
}
                       
