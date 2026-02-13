#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
};

Student students[100];
int count = 0;

void addStudent() {
    cout << "Enter student name: ";
    cin >> students[count].name;
    
    cout << "Enter student ID: ";
    cin >> students[count].id;
    
    count++;
    cout << "Student added successfully!\n";
}

void viewStudents() {
    for(int i = 0; i < count; i++) {
        cout << "Name: " << students[i].name 
             << " | ID: " << students[i].id << endl;
    }
}

void searchStudent() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    for(int i = 0; i < count; i++) {
        if(students[i].id == id) {
            cout << "Found: " << students[i].name << endl;
            return;
        }
    }
    cout << "Student not found\n";
}

int main() {
    int choice;

    do {
        cout << "\n1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
        }

    } while(choice != 4);

    return 0;
}
