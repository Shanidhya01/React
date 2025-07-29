#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std; // for greater
// Define a structure for Interrupt
struct Interrupt {
    int priority;  // Lower value means higher priority
    string name;
    // Overload operator for priority comparison
    bool operator>(const Interrupt& other) const {
        return priority > other.priority;
    }
};
int main() {
    // Priority queue to handle interrupts (min-heap based on priority)
    priority_queue<Interrupt, vector<Interrupt>, greater<>> interruptQueue;
    // Adding some interrupts to the queue
    interruptQueue.push({2, "Timer Interrupt"});
    interruptQueue.push({1, "IO Interrupt"});
    interruptQueue.push({3, "Software Interrupt"});
    // Processing interrupts
    cout << "Processing Interrupts:\n";
    while (!interruptQueue.empty()) {
        Interrupt current = interruptQueue.top();
        interruptQueue.pop();
        cout << "Handling " << current.name << " with priority " << current.priority << "\n";
    }
    return 0;
}
