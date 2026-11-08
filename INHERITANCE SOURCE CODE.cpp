#include <iostream>
using namespace std;
//----------------------------------------------
// INHERITANCE IN C++
//---------------------------------------------

// 1. SINGLE INHERITANCE
// One child class (Dog) inherits from one parent class (Animal).
// ------------------------------------------------------------
class Animal {
public:
    void eat() {
        cout << "This animal eats." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

// ------------------------------------------------------------
// 2. MULTIPLE INHERITANCE
// Smartphone inherits features from both Camera and Phone.
// ------------------------------------------------------------
class Camera {
public:
    void takePhoto() {
        cout << "The camera takes a photo." << endl;
    }
};

class Phone {
public:
    void makeCall() {
        cout << "The phone makes a call." << endl;
    }
};

class Smartphone : public Camera, public Phone {
public:
    void browseInternet() {
        cout << "The smartphone browses the internet." << endl;
    }
};

// ------------------------------------------------------------
// 3. MULTILEVEL INHERITANCE
// Animal inherits from LivingThing, then Dog inherits from Animal.
// ------------------------------------------------------------
class LivingThing {
public:
    void grow() {
        cout << "The living thing grows." << endl;
    }
};

class AnimalFromLivingThing : public LivingThing {
public:
    void breathe() {
        cout << "The animal breathes." << endl;
    }
};

class MultilevelDog : public AnimalFromLivingThing {
public:
    void play() {
        cout << "The dog plays." << endl;
    }
};

// ------------------------------------------------------------
// 4. HIERARCHICAL INHERITANCE
// Car, Bus and Motorbike inherit from the same Vehicle class.
// ------------------------------------------------------------
class Vehicle {
public:
    void move() {
        cout << "The vehicle moves." << endl;
    }

    void stop() {
        cout << "The vehicle stops." << endl;
    }
};

class Car : public Vehicle {
public:
    void openBoot() {
        cout << "The car boot is opened." << endl;
    }
};

class Bus : public Vehicle {
public:
    void carryPassengers() {
        cout << "The bus carries passengers." << endl;
    }
};

class Motorbike : public Vehicle {
public:
    void ride() {
        cout << "The motorbike is being ridden." << endl;
    }
};

// ------------------------------------------------------------
// 5. HYBRID INHERITANCE
// This combines hierarchical and multiple inheritance.

class Person {
public:
    void introduce() {
        cout << "I am a person." << endl;
    }
};

class Student : virtual public Person {
public:
    void study() {
        cout << "The student studies." << endl;
    }
};

class Worker : virtual public Person {
public:
    void work() {
        cout << "The worker works." << endl;
    }
};

class WorkingStudent : public Student, public Worker {
public:
    void attendWorkAndClass() {
        cout << "The working student attends work and classes." << endl;
    }
};

// ------------------------------------------------------------
// MAIN FUNCTION
// Create objects and call inherited and individual functions.
// ------------------------------------------------------------
int main() {
    cout << "===== 1. SINGLE INHERITANCE =====" << endl;
    Dog myDog;
    myDog.eat();   // Inherited from Animal
    myDog.bark();  // Defined in Dog

    cout << "\n===== 2. MULTIPLE INHERITANCE =====" << endl;
    Smartphone myPhone;
    myPhone.takePhoto();      // Inherited from Camera
    myPhone.makeCall();       // Inherited from Phone
    myPhone.browseInternet(); // Defined in Smartphone

    cout << "\n===== 3. MULTILEVEL INHERITANCE =====" << endl;
    MultilevelDog myMultilevelDog;
    myMultilevelDog.grow();    // Inherited through AnimalFromLivingThing
    myMultilevelDog.breathe(); // Inherited from AnimalFromLivingThing
    myMultilevelDog.play();    // Defined in MultilevelDog

    cout << "\n===== 4. HIERARCHICAL INHERITANCE =====" << endl;
    Car myCar;
    Bus myBus;
    Motorbike myMotorbike;

    myCar.move();              // Inherited from Vehicle
    myCar.openBoot();          // Defined in Car
    myBus.move();              // Inherited from Vehicle
    myBus.carryPassengers();   // Defined in Bus
    myMotorbike.stop();        // Inherited from Vehicle
    myMotorbike.ride();        // Defined in Motorbike

    cout << "\n===== 5. HYBRID INHERITANCE =====" << endl;
    WorkingStudent myWorkingStudent;
    myWorkingStudent.introduce();          // Inherited from Person
    myWorkingStudent.study();              // Inherited from Student
    myWorkingStudent.work();               // Inherited from Worker
    myWorkingStudent.attendWorkAndClass(); // Defined in WorkingStudent


    return 0;
}


