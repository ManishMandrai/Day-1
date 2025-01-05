#include <iostream>
using namespace std;

int main()
{
    string name = "Manish";
    int age = 22;
    float height = 6;
    char grade = 65;
    bool isStudent = false;

    cout << "Name: " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Height : " << height << endl;
    cout << "Grade : " << grade << endl;
    cout << "Is he a student : "<< isStudent << endl;

    age = 21;
    cout << "Her Age : " << age << endl;
    name = "NoOne 🥹";
    cout << "Her Name : " << name << endl;
    height = 5;
    cout << "Her Height : " << height << endl;
    isStudent = true;
    cout << "Is She a student : " << isStudent << endl;

    return 0;
}