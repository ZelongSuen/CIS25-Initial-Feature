//
// Created by longl on 11/10/2025.
//

#ifndef INITIAL_FEATURE_TODOLIST_H
#define INITIAL_FEATURE_TODOLIST_H

#endif //INITIAL_FEATURE_TODOLIST_H

#include <vector>
#include "../include/Task.h"

class TodoList {
private:
    std::vector<Task> tasks;

public:

    TodoList();

    void addTask(const Task& task);
    void displayAllTasks() const;

    int getTaskCount() const;
};