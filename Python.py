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
