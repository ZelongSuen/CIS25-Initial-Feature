//
// Created by longl on 11/10/2025.
//

#include "../include/Task.h"
#include "../include/TodoList.h"
#include <cassert>
#include <iostream>


void testTaskCreation() {
    std::cout << "Test 1: Task Creation...";
    Task task("Test description");

    assert(task.getDescription() == "Test description");
    assert(task.getIsComplete() == false);
    assert(task.getPriority() == 1);

    std::cout << " PASSED\n";
}

void testAddTask() {
    std::cout << "Test 2: Add Task to List...";
    TodoList list;

    assert(list.getTaskCount() == 0);

    Task task("Test task");
    list.addTask(task);

    assert(list.getTaskCount() == 1);

    std::cout << " PASSED\n";
}


void testMarkComplete() {
    std::cout << "Test 3: Mark Task Complete...";
    Task task("My Task");

    assert(task.getIsComplete() == false);

    task.setComplete(true);
    assert(task.getIsComplete() == true);

    task.setComplete(false);
    assert(task.getIsComplete() == false);

    std::cout << " PASSED\n";
}

int main() {
    std::cout << "\n=== Running Tests for TodoList ===\n\n";

    testTaskCreation();
    testAddTask();
    testMarkComplete();

    std::cout << "\n✅ All tests passed!\n";
    return 0;
}