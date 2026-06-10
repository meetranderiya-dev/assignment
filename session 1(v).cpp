#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Task {
private:
    string title;
    bool isDone;

public:
    Task(string t) : title(t), isDone(false) {}

    void markDone() {
        isDone = true;
    }

    void display() const {
        cout << title << " ["
             << (isDone ? "DONE" : "PENDING")
             << "]" << endl;
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
        }
    }

    void showTasks() const {
        for (const Task& task : tasks) {
            task.display();
        }
    }
};

int main() {
    TaskList list;

    list.addTask("Finish homework");
    list.addTask("Buy groceries");
    list.addTask("Clean room");

    list.markTaskDone(1);

    list.showTasks();

    return 0;
}