#include <stdio.h>

#define MAX_TASKS 5

char tasks[MAX_TASKS][50] = {
    "Buy groceries",
    "Finish homework",
    "Call friend",
    "Clean room",
    "Read book"
};

int done[MAX_TASKS] = {0};  // 0 = not done, 1 = done

void printTasks(int count) {
    printf("\nTask List:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s", i + 1, tasks[i]);
        if (done[i]) {
            printf(" - DONE");
        }
        printf("\n");
    }
}

void markTaskDone(int index) {
    if (index >= 0 && index < MAX_TASKS) {
        done[index] = 1;
    } else {
        printf("Invalid task index.\n");
    }
}

int main() {
    int taskCount = MAX_TASKS;

    printf("Original List:\n");
    printTasks(taskCount);

    // Mark the second task as done (index 1)
    markTaskDone(1);

    printf("\nUpdated List:\n");
    printTasks(taskCount);

    return 0;
}

