# I. เขียนโปรแกรมในภาษา Java, C++, Python เปรียบเทียบผลรัน

## Java

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

**output**

```
Create animal
Create animal
Dog
Create animal
Cat
Animal makes a sound
Dog barks
Cat meows

```

* ปล่อยให้ JVM จัดการ garbage collection โดยอัตโนมัติ อาจจะไม่เห็นข้อความ "Delete ..." ของ `finalize()`

## Python

{% code lineNumbers="true" %}
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
{% endcode %}

**output**

```python
Create animal
Create animal
Dog
Create animal
Cat
Animal makes a sound
Dog barks
Cat meows
Delete cat
Delete dog
Delete animal
Delete animal

```

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

**output**

```
Create animal
Create animal
Dog
Create animal
Cat
Animal makes a sound
Dog barks
Cat meows
Delete cat
Delete dog
Delete animal
Delete animal

```

#### สรุปผลการเปรียบเทียบ

* **การสร้างอ็อบเจกต์:** ทุกภาษาแสดงข้อความ "Create" เมื่อตัวอ็อบเจกต์ถูกสร้างขึ้น
* **การทำลายอ็อบเจกต์:**
  * **Java:** ข้อความ "Delete ..." อาจไม่ปรากฏขึ้นเนื่องจาก Garbage Collector
  * **Python:** จะเห็นข้อความ "Delete ..." เมื่อใช้ `del`
  * **C++:** ข้อความ "Delete ..." ปรากฏขึ้นเมื่อใช้ `delete` เพื่อทำลายอ็อบเจกต์
* **ฟังก์ชันเสียง:** ฟังก์ชัน `sound()` ในแต่ละภาษาให้ผลลัพธ์ที่แตกต่างกันตามชนิดของอ็อบเจกต์ที่ถูกสร้างขึ้น (Polymorphism)
