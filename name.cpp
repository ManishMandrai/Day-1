#include<iostream>
using namespace std;

int main(){
    string name = "Manish";
    int age = 22;
    float height = 6.0;
    char grade = 'A';

    cout << "Name: " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Height : " << height << endl;
    cout << "Grade : " << grade << endl;

    age = 21;
    cout << "Her Age : " << age << endl;
    name = "NoOne 🥹";
    cout << "Her Name : " << name << endl;
    height = 5.4;
    cout << "Her Height : "<< height << endl;

    return 0;
}