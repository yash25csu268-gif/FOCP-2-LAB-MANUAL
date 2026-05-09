#include<iostream>
using namespace std;
class Car
{
    string brand;
    int make_year;
    string color;
    public: //make the info accessible to public but by default all the functions are private
    string car_type;
    void display()
    {
        cout<<"\n Brand of the car: "<<brand;
        cout<<"\n Make_Year of the car: "<<make_year;
        cout<<"\n Car Type: "<< car_type;
    }
    void car_entry()
    {
        cout<<"\n Enter Brand, make, car, type, color: ";
        cin>>brand>>make_year>>car_type>>color;
    }
};
int main()
{
    Car c1;
    c1.car_entry();
    c1.car_type="Hatchback";
    c1.display();
    return 0;
}
