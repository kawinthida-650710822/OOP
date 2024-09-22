#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Create animal" << endl;
    }

    virtual ~Animal() {
        cout << "Delete animal" << endl;
    }

    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog" << endl;
    }

    ~Dog() {
        cout << "Delete dog" << endl;
    }

    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    Cat() {
        cout << "Cat" << endl;
    }

    ~Cat() {
        cout << "Delete cat" << endl;
    }

    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a = new Animal();  
    Dog* d = new Dog();       
    Cat* c = new Cat();        

    a->sound();  
    d->sound();  
    c->sound();  

    delete a;  
    delete d;  
    delete c;  

    return 0;
}
