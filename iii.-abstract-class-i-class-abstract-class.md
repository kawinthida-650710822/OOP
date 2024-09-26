# III.  abstract class คืออะไร ในตัวอย่างข้อ I ที่ให้ class ใดคือ abstract class และมีหลักการสร้างอย่างไร

#### Abstract Class คืออะไร?

**Abstract Class** คือคลาสที่ไม่สามารถสร้างอ็อบเจกต์ได้โดยตรง และมักจะมี method ที่ยังไม่ได้ implement (เรียกว่า **abstract methods**) ซึ่ง subclass จะต้อง override และให้การ implement เหล่านั้น

* การใช้ abstract class ช่วยให้คุณกำหนดโครงสร้างพื้นฐานให้กับคลาสที่สืบทอดมา โดยที่ subclass ต้องให้รายละเอียดเฉพาะของแต่ละคลาส
* คลาส `Animal` จะถือว่าเป็น abstract class ถ้าหากเราต้องการทำให้มันเป็น abstract class โดยการประกาศว่ามันเป็น abstract class และการสร้างเมธอดที่เป็น abstract methods

**ใน Java, คุณสามารถสร้าง abstract class และ method โดยใช้คีย์เวิร์ด `abstract`:**

{% code title="Java" lineNumbers="true" %}
```java
abstract class Animal {
    Animal() {
        System.out.println("Create animal");
    }
    abstract void sound(); 
}
```
{% endcode %}

**ใน Python, คุณสามารถใช้โมดูล `abc` เพื่อสร้าง abstract class และ method:**

{% code title="Python" lineNumbers="true" %}
```python
from abc import ABC, abstractmethod

class Animal(ABC):
    def __init__(self):
        print("Create animal")

    @abstractmethod
    def sound(self):
        pass
```
{% endcode %}

**ใน C++, การสร้าง abstract class จะใช้ pure virtual function โดยการประกาศ method ด้วย `= 0`:**

{% code title="C++" lineNumbers="true" %}
```cpp
class Animal {
public:
    Animal() {
        cout << "Create animal" << endl;
    }
    virtual void sound() = 0;
};
```
{% endcode %}

* ในแต่ละภาษานี้ คลาส `Animal` ถูกสร้างเป็น abstract class โดยการประกาศ method `sound()` ให้เป็น abstract/pure virtual method
* `Dog` และ `Cat` จะต้อง implement method `sound()` เพื่อให้มีความสมบูรณ์
* การใช้ abstract class ทำให้สามารถบังคับให้ subclass ต้องมีพฤติกรรมที่กำหนดไว้ ซึ่งช่วยในการจัดการโครงสร้างของโค้ดและทำให้โปรแกรมมีความยืดหยุ่นมากขึ้น
