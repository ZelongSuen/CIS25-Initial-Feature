//
// Created by longl on 11/10/2025.
//

// --- Getters (marked const) ---

#include "../include/TodoList.h"
#include <iostream>

TodoList::TodoList() {
}

void TodoList::addTask(const Task& task) {
    tasks.push_back(task);
    std::cout << "Added task: '" << task.getDescription() << "'\n";
}

void TodoList::displayAllTasks() const {
    if (tasks.empty()) {
        std::cout << "\nYour to-do list is empty!\n" << std::endl;
        return;
    }

    std::cout << "\n--- Your To-Do List ---\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << (i + 1) << ". ";
        tasks[i].display();
        std::cout << std::endl;
    }
    std::cout << "-----------------------\n" << std::endl;
}


int TodoList::getTaskCount() const {
    return tasks.size();
}