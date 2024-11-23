#include <iostream>
using namespace std;

class worker {
    int age;
    char name[10];

public:
    void get(); 
    void show(); 
};


void worker::get() {
    cout << "Your name, please: ";
    cin >> name;
    cout << "Your age, please: ";
    cin >> age;
}


void worker::show() {
    cout << "My name is: " << name << endl;
    cout << "My age is: " << age << endl;
}


class manager : public worker { 
    int now; 

public:
    void get();  
    void show(); 
};


void manager::get() {
    worker::get();
    cout << "Number of workers under you: ";
    cin >> now;
}

// Definition of the manager class's show function
void manager::show() {
    worker::show(); // Call the base class's show function
    cout << "Number of workers under me are: " << now << endl;
}

// Main function
int main() {
    manager M1; // Create a manager object
    M1.get();   // Input details for the manager
    M1.show();  // Display details of the manager
    return 0;
}

