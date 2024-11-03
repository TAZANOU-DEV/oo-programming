#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name, matricule, department;
    int age;

public:

    void setName(string a) {
        name = a;
    }
    string getName() {
        return name;
    }

    void setMatricule(string m) {
        matricule = m;
    }
    string getMatricule() {
        return matricule;
    }

    void setAge(int a) {
        age = a;
    }
    int getAge() {
        return age;
    }

    void setDepartment(string d) {
        department = d;
    }
    string getDepartment() {
        return department;
    }

    
    void display() {
        cout << "Name: " << name<< endl;
        cout << "Matricule: " << matricule << endl;
        cout << "Age: " << age <<"years old"<< endl;
        cout << "Department: " << department <<"2"<< endl;
    }
};

int main() {
    Student s1;

    
    string name, matricule, department;
    int age;

    cout << "Enter name: ";
    cin >> name;
    s1.setName(name);

    cout << "Enter matricule: ";
    cin >> matricule;
    s1.setMatricule(matricule);

    cout << "Enter age: ";
    cin >> age;
    s1.setAge(age);

    cout << "Enter department: ";
    cin >> department;
    s1.setDepartment(department);


    s1.display();

    return 0;
}

