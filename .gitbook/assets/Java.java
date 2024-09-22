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
