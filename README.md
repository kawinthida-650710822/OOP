---
description: >-
  เปรียบเทียบความเหมือนและความแตกต่างในการเขียนโปรแกรมแบบ OOP ด้วยภาษา Java,
  C++, Python
coverY: 0
layout:
  cover:
    visible: true
    size: hero
  title:
    visible: true
  description:
    visible: true
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: true
---

# OOP

My GitHub



{% embed url="https://github.com/kawinthida-650710822" %}

My Repository



{% embed url="https://github.com/kawinthida-650710822/OOP/tree/main" %}

## Java

{% code lineNumbers="true" %}
```java
class Animal {
    Animal() {
        System.out.println("Create animal");
    }

    protected void finalize() {
        System.out.println("Delete animal");
    }

    void sound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal {
    Dog() {
        System.out.println("Dog");
    }

    @Override
    void sound() {
        System.out.println("Dog barks");
    }

    @Override
    protected void finalize() {
        System.out.println("Delete dog");
    }
}

class Cat extends Animal {
    Cat() {
        System.out.println("Cat");
    }

    @Override
    void sound() {
        System.out.println("Cat meows");
    }

    @Override
    protected void finalize() {
        System.out.println("Delete cat");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal a = new Animal();
        Dog d = new Dog();
        Cat c = new Cat();

        a.sound();
        d.sound();
        c.sound();
    }
}

```
{% endcode %}

{% file src=".gitbook/assets/Java.java" %}



## C++

```cpp
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

```

{% file src=".gitbook/assets/C++.cpp" %}



## Python

```python
class Animal:
    def __init__(self):
        print("Create animal")

    def __del__(self):
        print("Delete animal")

    def sound(self):
        print("Animal makes a sound")


class Dog(Animal):
    def __init__(self):
        super().__init__()
        print("Dog")

    def __del__(self):
        print("Delete dog")

    def sound(self):
        print("Dog barks")


class Cat(Animal):
    def __init__(self):
        super().__init__()
        print("Cat")

    def __del__(self):
        print("Delete cat")

    def sound(self):
        print("Cat meows")


# Creating objects
a = Animal()  
d = Dog()    
c = Cat()    

a.sound()  
d.sound()  
c.sound()

del a
del d
del c

```

{% file src=".gitbook/assets/Python.py" %}



## ความเหมือนและความแตกต่างในการเขียนโปรแกรม

ในการเขียน OOP ในภาษา Java, C++ และ Python



### ความเหมือนกันของ OOP

**การสร้างคลาส**:

* ทุกภาษาใช้ `class` เพื่อสร้างโครงสร้างของออบเจ็กต์ (เช่น `Animal`, `Dog`, `Cat`).

**การสร้างออบเจ็กต์**:

* สามารถสร้างออบเจ็กต์จากคลาสที่กำหนดไว้ในทุกภาษา.

**การใช้เมธอด**:

* เมธอด (`sound()`) ในแต่ละคลาสทำงานคล้ายกัน โดยมีการ overriding เพื่อกำหนดเสียงของสัตว์.

**การสืบทอด (Inheritance)**:

* สามารถสืบทอดคลาสแม่ไปยังคลาสลูกได้ (เช่น `Dog` และ `Cat` สืบทอดจาก `Animal`).



### ความต่างกันของ OOP

**การจัดการหน่วยความจำ**:

* **Java**: ใช้การจัดการหน่วยความจำอัตโนมัติ (garbage collection) ไม่จำเป็นต้องใช้ `delete`&#x20;
* **C++**: ต้องจัดการหน่วยความจำด้วยตนเอง โดยใช้ `delete`
* **Python**: ใช้ garbage collection คล้าย Java แต่สามารถใช้ `del` เพื่อลบการอ้างอิงได้

**การกำหนดตัวแปรในคลาส**:

* **Java**: ใช้ `private`, `public`, และ `protected` เพื่อกำหนดการเข้าถึง
* **C++**: การเข้าถึงข้อมูล `private` จะไม่ถูกอนุญาตจากภายนอกคลาส
* **Python**: ไม่มีการบังคับใช้การเข้าถึง แต่สามารถใช้ `_` และ `__` เพื่อบ่งชี้ว่าเป็นตัวแปรที่ไม่ควรเข้าถึงจากภายนอก

**การกำหนด Destructor**:

* **Java**: ใช้ `finalize()`&#x20;
* **C++**: มี destructor ที่ถูกเรียกใช้เมื่อออบเจ็กต์ถูกทำลาย
* **Python**: ใช้ `__del__` ซึ่งถูกเรียกเมื่อออบเจ็กต์ถูกทำลาย&#x20;



{% code title="Java" lineNumbers="true" %}
```java
Animal a = new Animal(); 
Dog d = new Dog();      
Cat c = new Cat();       
```
{% endcode %}

Java ไม่จำเป็นต้องใช้ delete

{% code title="C++" lineNumbers="true" %}
```cpp
Animal* a = new Animal(); 
Dog* d = new Dog();       
Cat* c = new Cat();       

delete a; 
delete d; 
delete c; 
```
{% endcode %}

C++ ต้องใช้ `delete` เพื่อทำลายออบเจ็กต์ที่สร้างด้วย `new`

{% code title="Python" %}
```python
a = Animal()  
d = Dog()     
c = Cat()     

del a  
del d  
del c  

```
{% endcode %}

Python การลบการอ้างอิงสามารถทำได้ด้วย `del`
