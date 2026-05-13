#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    string city;
    string hobby;
};
void print(Person* person)
{
    cout << person->name << " is " << person->age << " years old, lives in " << person->city << " and likes " << person->hobby << endl;
}
int main()
{
    Person person1;
    person1.name = "Harry";
    person1.age = 23;
    person1.city = "London";
    person1.hobby = "Football";
    cout << "Meet " << person1.name << endl;
    print(&person1);

    cout << "---" << endl;
    Person person2;
    person2.name = "Alice";
    person2.age = 20;
    person2.city = "Lviv";
    person2.hobby = "Swimming";
    cout << "Meet " << person2.name << endl;
    print(&person2);
    cout << "---" << endl;
    Person person3;
    person3.name = "John";
    person3.age = 35;
    person3.city = "New York";
    person3.hobby = "Boxing";
    cout << "Meet " << person3.name << endl;
    print(&person3);
    return 0;
}
