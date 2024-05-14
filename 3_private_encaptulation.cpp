#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) {
        name = n;
        age = a;
    }
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student student("Mahbub", 20);

    cout<<"Before: "<<endl;
    cout << "Name: " << student.getName() << ", Age: " << student.getAge() << endl;
    student.setName("Ahmed");
    student.setAge(22);
    cout<<"After : "<<endl;
    cout << "Name: " << student.getName() << ", Age: " << student.getAge() << endl;

    return 0;
}
