
#include <iostream>
#include <string>
using namespace std;

class Animal{
protected:
    string color;
public:
    Animal(string _color) : color(_color) {}
    void eat() {
            cout << "Тварина їсть" << endl;
        }
    void sleep() {
           cout << "Тварина спить" << endl;
       }
};
class Dog: public Animal{
private:
    int age;
    float weight;
public:
    Dog(string _color, int _age, float _weight) : Animal(_color), age(_age), weight(_weight) {}
    void bark(){
        cout <<"Собака гавкає"<<endl;
    }
    void displayInfo() {
            cout << "Колір: " << color << endl;
            cout << "Вік: " << age << " років" << endl;
            cout << "Вага: " << weight << " кг" << endl;
        }
};
int main() {
    Dog myDog("Коричневий", 3, 10.5);

    myDog.eat();
    myDog.sleep();
    myDog.bark();
    myDog.displayInfo();

    return 0;
}
