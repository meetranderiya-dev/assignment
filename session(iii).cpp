#include <iostream>
#include <string>

using namespace std;

class Task {
private:
    string title;
    bool isDone;

public:
    // Constructor
    Task(string taskTitle) {
        title = taskTitle;
        isDone = false;
    }

    // Mark the task as done
    void markDone() {
        isDone = true;
    }

    // Display the task and its status
    void display() const {
        cout << title << " ["
             << (isDone ? "DONE" : "PENDING")
             << "]" << endl;
    }
};

int main() {
    Task task("Finish homework");

    task.display();   // Before marking done
    task.markDone();
    task.display();   // After marking done

    return 0;
}