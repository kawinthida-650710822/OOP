# II. ทำความเข้าใจส่วนประกอบของโค้ดเปรียบเทียบกับ concept ของ OOP ต่อไปนี้ โดยยกตัวอย่างส่วนประกอบของโค้ดประกอบการอธิบาย

#### 1. Class

**Class** คือ แม่แบบสำหรับการสร้างอ็อบเจกต์ (objects) ซึ่งกำหนดคุณสมบัติและพฤติกรรมของอ็อบเจกต์

```java
class Animal {
    void sound() {
        System.out.println("Animal makes a sound");
    }
}

```

```python
class Animal:
    def sound(self):
        print("Animal makes a sound")
```

```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};
```

#### 2. Object, Instance

**Object** หรือ **Instance** คืออ็อบเจกต์ที่ถูกสร้างจากคลาส ซึ่งมีข้อมูลเฉพาะตัวและสามารถเรียกใช้พฤติกรรมที่กำหนดไว้ในคลาส

```java
Animal a = new Animal();
```

```python
a = Animal() 
```

```cpp
Animal* a = new Animal(); 
```

#### 3. Subclass, Derived Class

**Subclass** หรือ **Derived Class** คือคลาสที่สืบทอดจากคลาสหลัก (superclass) ซึ่งสามารถมีคุณสมบัติและพฤติกรรมของคลาสหลัก รวมถึงเพิ่มคุณสมบัติใหม่ได้

```java
class Dog extends Animal {
    void sound() {
        System.out.println("Dog barks");
    }
}
```

```python
class Dog(Animal):
    def sound(self):
        print("Dog barks")
```

```cpp
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};
```

#### 4. Message

**Message** คือการเรียกใช้งาน method หรือฟังก์ชันในอ็อบเจกต์ ซึ่งสามารถส่งข้อมูลหรือคำสั่งไปยังอ็อบเจกต์นั้น

```java
a.sound();
```

```python
a.sound()
```

```cpp
a->sound();
```

#### 5. Inheritance

**Inheritance** คือกลไกที่ช่วยให้คลาสใหม่ (subclass) สามารถสืบทอดคุณสมบัติและพฤติกรรมจากคลาสที่มีอยู่ (superclass)

```java
class Cat extends Animal {
    void sound() {
        System.out.println("Cat meows");
    }
}
```

```python
class Cat(Animal):
    def sound(self):
        print("Cat meows")
```

```cpp
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};
```

* **Inheritance** เป็นแนวคิดหรือกลไกในการสืบทอดคุณสมบัติและพฤติกรรมจากคลาสหลักไปยังคลาสย่อย
* **Subclass** เป็นคลาสที่เกิดจากการใช้การสืบทอดและมีความสัมพันธ์กับคลาสหลัก

#### 6. Polymorphism

**Polymorphism** คือความสามารถของอ็อบเจกต์ในการเรียกใช้ method ที่มีชื่อเดียวกันแต่ทำงานแตกต่างกัน ขึ้นอยู่กับประเภทของอ็อบเจกต์

```java
Animal a = new Dog();
a.sound(); 

a = new Cat();
a.sound(); 
```

```python
a = Dog()
a.sound() 

a = Cat()
a.sound()  
```

```cpp
Animal* a = new Dog();
a->sound(); 

a = new Cat();
a->sound(); 
```

