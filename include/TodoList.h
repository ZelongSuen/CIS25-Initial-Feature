//
// Created by longl on 11/10/2025.
//

#ifndef INITIAL_FEATURE_TODOLIST_H
#define INITIAL_FEATURE_TODOLIST_H

#include <vector>
#include <string>
#include "../include/Task.h"

class TodoList {
private:
    std::vector<Task> tasks;

public:
    TodoList();

    void addTask(const Task& task);
    void removeTask(int index);
    void displayAllTasks() const;
    int getTaskCount() const;

    // --- 新增的功能 (Final Project Feature) ---
    void saveToFile(const std::string& filename);
    void loadFromFile(const std::string& filename);
};

#endif //INITIAL_FEATURE_TODOLIST_H