# II. ทำความเข้าใจส่วนประกอบของโค้ดเปรียบเทียบกับ concept ของ OOP ต่อไปนี้ โดยยกตัวอย่างส่วนประกอบของโค้ดประกอบการอธิบาย

#### 1. Class

**Class** คือ แม่แบบสำหรับการสร้างอ็อบเจกต์ (objects) ซึ่งกำหนดคุณสมบัติและพฤติกรรมของอ็อบเจกต์

{% code title="Java" lineNumbers="true" %}
```java
class Animal {
    void sound() {
        System.out.println("Animal makes a sound");
    }
}

```
{% endcode %}

{% code title="Python" lineNumbers="true" %}
```python
class Animal:
    def sound(self):
        print("Animal makes a sound")
```
{% endcode %}

{% code title="C++" lineNumbers="true" %}
```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};
```
{% endcode %}

#### 2. Object, Instance

**Object** หรือ **Instance** คืออ็อบเจกต์ที่ถูกสร้างจากคลาส ซึ่งมีข้อมูลเฉพาะตัวและสามารถเรียกใช้พฤติกรรมที่กำหนดไว้ในคลาส

{% code title="Java" lineNumbers="true" %}
```java
Animal a = new Animal();
```
{% endcode %}

{% code title="Python" lineNumbers="true" %}
```python
a = Animal() 
```
{% endcode %}

{% code title="C++" lineNumbers="true" %}
```cpp
Animal* a = new Animal(); 
```
{% endcode %}

* `a` คือ object หรือ instance ของคลาส `Animal` ซึ่งสามารถใช้งานข้อมูลและฟังก์ชันที่กำหนดไว้ในคลาส `Animal` ได้

#### 3. Subclass, Derived Class

**Subclass** หรือ **Derived Class** คือคลาสที่สืบทอดจากคลาสหลัก (superclass) ซึ่งสามารถมีคุณสมบัติและพฤติกรรมของคลาสหลัก รวมถึงเพิ่มคุณสมบัติใหม่ได้

{% code title="Java" lineNumbers="true" %}
```java
class Dog extends Animal {
    void sound() {
        System.out.println("Dog barks");
    }
}
```
{% endcode %}

{% code title="Python" lineNumbers="true" %}
```python
class Dog(Animal):
    def sound(self):
        print("Dog barks")
```
{% endcode %}

{% code title="C++" lineNumbers="true" %}
```cpp
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};
```
{% endcode %}

* ในตัวอย่างนี้ `Dog` เป็น Subclass ที่สืบทอดจาก `Animal` โดยที่มันสามารถใช้งานฟังก์ชันต่างๆ ของ `Animal` และยังเพิ่มฟังก์ชัน `sound()` ใหม่ของตัวเองได้

#### 4. Message

**Message** คือการเรียกใช้งาน method หรือฟังก์ชันในอ็อบเจกต์ ซึ่งสามารถส่งข้อมูลหรือคำสั่งไปยังอ็อบเจกต์นั้น

{% code title="Java" lineNumbers="true" %}
```java
a.sound();
```
{% endcode %}

{% code title="Python" lineNumbers="true" %}
```python
a.sound()
```
{% endcode %}

{% code title="C++" lineNumbers="true" %}
```cpp
a->sound();
```
{% endcode %}

* การเรียกใช้งาน method `sound()` ถือว่าเป็นการส่ง "message" ไปยัง object `a` เพื่อให้ทำการแสดงเสียงที่กำหนดไว้ตาม object นั้น ๆ

#### 5. Inheritance

**Inheritance** คือกลไกที่ช่วยให้คลาสใหม่ (subclass) สามารถสืบทอดคุณสมบัติและพฤติกรรมจากคลาสที่มีอยู่ (superclass)

{% code title="Java" lineNumbers="true" %}
```java
class Cat extends Animal {
    void sound() {
        System.out.println("Cat meows");
    }
}
```
{% endcode %}

{% code title="Python" lineNumbers="true" %}
```python
class Cat(Animal):
    def sound(self):
        print("Cat meows")
```
{% endcode %}

{% code title="C++" lineNumbers="true" %}
```cpp
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};
```
{% endcode %}

* **Inheritance** เป็นแนวคิดหรือกลไกในการสืบทอดคุณสมบัติและพฤติกรรมจากคลาสหลักไปยังคลาสย่อย
* **Subclass** เป็นคลาสที่เกิดจากการใช้การสืบทอดและมีความสัมพันธ์กับคลาสหลัก
* กรณี Subclass `Cat` สามารถใช้คุณสมบัติและพฤติกรรมของ `Animal` ได้ นอกจากนี้ยังสามารถเขียนทับฟังก์ชันของ Superclass เพื่อให้มีพฤติกรรมที่แตกต่างกันไป เช่น เสียงของแมว (meows) แทนที่จะเป็นเสียงของสัตว์ทั่วไป

#### 6. Polymorphism

**Polymorphism** คือความสามารถของอ็อบเจกต์ในการเรียกใช้ method ที่มีชื่อเดียวกันแต่ทำงานแตกต่างกัน ขึ้นอยู่กับประเภทของอ็อบเจกต์

{% code title="Java" lineNumbers="true" %}
```java
Animal a = new Dog();
a.sound(); 

a = new Cat();
a.sound(); 
```
{% endcode %}

{% code title="Python" lineNumbers="true" %}
```python
a = Dog()
a.sound() 

a = Cat()
a.sound()  
```
{% endcode %}

{% code title="C++" lineNumbers="true" %}
```cpp
Animal* a = new Dog();
a->sound(); 

a = new Cat();
a->sound(); 
```
{% endcode %}

* ในแต่ละกรณี object `a` สามารถเรียกใช้ method `sound()` ได้ แต่พฤติกรรมจะแตกต่างกันไปตามชนิดของ object (`Dog` หรือ `Cat`) ซึ่งเป็นคุณสมบัติสำคัญของ Polymorphism

#### สรุปโดยรวม

แนวคิด OOP (Object-Oriented Programming) เน้นการสร้างโค้ดที่มีการจัดระเบียบ โดยใช้คลาสและอ็อบเจกต์ในการสร้างและจัดการข้อมูลหลักสำคัญมีดังนี้:

* **Class:** กำหนดแม่แบบของข้อมูลและพฤติกรรม
* **Object:** อ็อบเจกต์ที่สร้างจากคลาส มีข้อมูลเฉพาะตัว
* **Subclass:** คลาสที่สืบทอดจากคลาสหลัก สามารถมีพฤติกรรมที่แตกต่าง
* **Message:** การเรียกใช้เมธอดในอ็อบเจกต์
* **Inheritance:** การสืบทอดคุณสมบัติจากคลาสหลัก
* **Polymorphism:** ความสามารถในการเรียกใช้เมธอดเดียวกันแต่ทำงานแตกต่างกันตามชนิดของอ็อบเจกต์
