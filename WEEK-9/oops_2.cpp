#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
private:
    string gf;

public:
    int id;
    int age;
    bool present;
    string name;
    int nos;
    int *v;

    // ctor: Default ctor: assigns garbage value
    // no khokhla student
    Student()
    {
        cout << "Student default ctor called" << endl;
    }

    // paremeterized ctor
    Student(int id, int age, bool present, string name, int nos, string gf)
    {
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
        this->v = new int(10);
        cout << "Student paremeterized ctor called" << endl;
    }

    // copy ctor
    Student(const Student &srcobj)
    {
        cout << "Student copy ctor called" << endl;
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->gf = srcobj.gf;
        this->nos = srcobj.nos;
        this->present = srcobj.present;
        this->id = srcobj.id;
    }

    ~Student() {
        cout<<"Student dtor called"<<endl;
        delete v;
    }

    Student(int id, int age, bool present, string name, int nos)
    {
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        cout << "Student paremeterized ctor w/o gf called" << endl;
    }

    //getter setter method
    string getGfName() {
        return gf;             //or return this->gf

    }

    void setGfName(string gf) {
        this->gf = gf;
    } 

    void study()
    {
        cout << "studying" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }
    void bunk()
    {
        cout << "bunking" << endl;
    }

private:
    void gfchatting()
    {
        cout << "Chatting" << endl;
    }

    void cheating()
    {
        cout << "Cheating" << endl;
    }

};

int main() {
    // //copy ctor
    // Student s1(1,12,1,"Chota Bheem",1,"chutki");
    // // Student s2 = s1;
    // Student s2(s1);
    // // Student s2;
    // // s2 = s1;
    // cout<<s1.name<<endl;
    // cout<<s2.name<<endl;

    // Student s1(1,12,1,"Chota Bheem",1,"Chutki");
    // cout<<s1.name<<endl;

    // {
    //     Student s1(1,12,1,"Chota Bheem",1,"Chutki");
    //     cout<<s1.name<<endl;
    // }
    // Student s2;
     
    Student s1(1,12,1,"Chota Bheem",1,"Chutki");
    cout<<s1.name<<endl;
    cout<<s1.getGfName()<<endl;
    s1.setGfName("Pta nahi");
    cout<<s1.getGfName()<<endl;
}