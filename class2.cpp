#include <iostream>
using namespace std;
class student
{
private:
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;

public:
    void inputDetails();
    int calculateTotal();
    void displayDetails();
    student();
    student(int ,string);
    student(int,string,int,int,int);
};
 void student:: inputDetails()
 {
    cout<<"enter your roll number, name, marks1, marks2, marks3 "<<endl;
    cin>>rollNo>>name>>marks1>>marks2>>marks3;
 }
int student::calculateTotal()
{
  return marks1+marks2+marks3;
}
void student::displayDetails()
{
    cout<<"roll no is: "<<rollNo<<endl;
    cout<<"name is: "<<name<<endl;
    cout<<"total :"<<calculateTotal()<<endl;
}
student::student()
{
    rollNo=0;name="abhishek";marks1=15;marks2=20;marks3=12;
}
student:: student(int r,string n){
    rollNo=r;name=n;marks1=0;marks2=0;marks3=0;
 }
   student:: student(int r,string n,int m1,int m2 ,int m3){
    rollNo=r;name=n;marks1=m1;marks2=m2;marks3=m3;
 }

 int main(){

    student s1, s2(24, "ABC"), s3(25, "xyz", 23, 24, 25);
    s1.displayDetails();
    s2.displayDetails();
    s3.displayDetails();

    return 0;
}

 
