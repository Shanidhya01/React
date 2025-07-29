#include<iostream>
#include<fstream>
using namespace std;
class Temp {
    string rollNum, name, fName, address, search;
    fstream file;
public:
    void addStu();
    void viewStu();
    void searchStu();
};
int main() {
    Temp obj;
    char choice;
    while (true) {                             // infinite loop
        cout << "---------------------------" << endl;
        cout << "1- Add Student Record" << endl;
        cout << "2- View All Student Records" << endl;
        cout << "3- Search Student Record" << endl;
        cout << "4- Exit" << endl;
        cout << "---------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case '1':
                cin.ignore();             // ignore the spaces and useless thing
                obj.addStu();
                break;
            case '2':
                cin.ignore();
                obj.viewStu();
                break;
            case '3':
                cin.ignore();
                obj.searchStu();
                break;
            case '4':
                return 0;
            default:
                cout << "Invalid Choice...!" << endl;
        }
    }
}
void Temp::addStu(){
    cout << "Enter Student Roll Number: ";
    getline(cin, rollNum);
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Student Father Name: ";
    getline(cin, fName);
    cout << "Enter Student Address: ";
    getline(cin, address);
    file.open("stuData.txt", ios::out | ios::app);
    if (file.is_open()) {
        file << rollNum << "*" << name << "*" << fName << "*" << address << "\n";
        file.close();
        cout << "Student record added successfully." << endl;
    } else {
        cout << "Error opening file for writing." << endl;
    }
}
void Temp::viewStu() {
    file.open("stuData.txt", ios::in);
    if (file.is_open()) {
        while (getline(file, rollNum, '*') &&
               getline(file, name, '*') &&
               getline(file, fName, '*') &&
               getline(file, address, '\n')) {
            cout << "\nStudent Roll Number: " << rollNum << endl;
            cout << "Student Name: " << name << endl;
            cout << "Student Father Name: " << fName << endl;
            cout << "Student Address: " << address << endl;
        }
        file.close();
    } else {
        cout << "Error opening file for reading." << endl;
    }
}
void Temp::searchStu() {
    cout << "Enter Student Roll Number: ";
    getline(cin, search);
    bool found = false;
    file.open("stuData.txt", ios::in);
    if (file.is_open()) {
        while (getline(file, rollNum, '*') &&
               getline(file, name, '*') &&
               getline(file, fName, '*') &&
               getline(file, address, '\n')) {
            if (rollNum == search) {
                cout << "\nStudent Roll Number: " << rollNum << endl;
                cout << "Student Name: " << name << endl;
                cout << "Student Father Name: " << fName << endl;
                cout << "Student Address: " << address << endl;
                found = true;
                break;
            }
        }
        file.close();
        if (!found) {
            cout << "Student record not found." << endl;
        }
    } else {
        cout << "Error opening file for reading." << endl;
    }
}