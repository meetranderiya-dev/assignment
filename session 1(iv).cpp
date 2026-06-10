#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Task {
private:
    string title;
    bool isDone;

public:
    Task(string taskTitle) {
        title = taskTitle;
        isDone = false;
    }

    void markDone() {
        isDone = true;
    }

    void display() const {
        cout << title << " ["
             << (isDone ? "DONE" : "PENDING")
             << "]";
    }
};

class TaskList {
private:
    vector<Task> tasks;

public:
    void addTask(string title) {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].markDone();
        } else {
            cout << "Invalid task index!" << endl;
        }
    }

    void showTasks() const {
        cout << "\nTask List:\n";
        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". ";
            tasks[i].display();
            cout << endl;
        }
    }
};

int main() {
    TaskList myTasks;

    // Add 3 tasks
    myTasks.addTask("Finish homework");
    myTasks.addTask("Buy groceries");
    myTasks.addTask("Clean room");

    // Mark the second task as done (index 1)
    myTasks.markTaskDone(1);

    // Display all tasks
    myTasks.showTasks();

    return 0;
}