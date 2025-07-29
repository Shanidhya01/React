#include<iostream>
#include <vector>
#include <stdexcept>
using namespace std;
int main() {
 vector<int> myList = {10, 20, 30, 40, 50};
 int index;
 try {
 // Prompt the user to enter an index
 cout << "Enter an index to access an element in the list: ";
 cin >> index;
 // Attempt to access the element at the specified index
 int element = myList.at(index);
 // If successful, display the element
 cout << "Element at index " << index << ": " << element << endl;
 } catch (const out_of_range& e) {
 // Catch IndexError and display error message
 cerr << "Error: " << e.what() << endl;
 } catch (...) {
 // Catch any other exceptions
 cerr << "Error: Invalid input." << endl;
 }
 return 0;
}