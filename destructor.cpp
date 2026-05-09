#include <iostream>
using namespace std;
class SmartLight
{
private:
    string brand;
    int brightness;   
    bool isOn;

public:
    SmartLight()
    {
        brand = "Unknown";
        brightness = 50;
        isOn = false;
    }
    SmartLight(string b, int bright, bool status)
    {
        brand = b;
        brightness = bright;
        isOn = status;
    }
    void turnOn()
    {
        isOn = true;
        cout<<brand<<"light is on" <<endl;
    }
    void turnOff()
    {
        isOn =false;
        cout<<brand<<"light is off"<<endl;
    }
    void increaseBrightness(int value)
    {
        if (brightness+value<=100)
            brightness+=value;
        else
            brightness=100;

        cout<<"Brightness increased to " <<brightness<<endl;
    }
    void decreaseBrightness(int value)
    {
        if (brightness-value>=0)
            brightness-=value;
        else
            brightness=0;

        cout<<"Brightness decreased to "<<brightness<<endl;
    }
    void displayStatus()
    {
        cout<<"\nBrand: "<<brand<<endl;
        cout<<"Brightness: "<<brightness<<endl;
    }
};

int main()
{
   SmartLight l1;
    SmartLight l2("Philips", 70, true);
    l1.displayStatus();
    l1.turnOn();
    l1.increaseBrightness(20);
    l1.decreaseBrightness(10);
    l1.displayStatus();
    l2.displayStatus();
    l2.turnOff();
    l2.decreaseBrightness(30);
    l2.increaseBrightness(50);
    l2.displayStatus();

    return 0;
}
