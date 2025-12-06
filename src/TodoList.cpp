//
// Created by longl on 11/10/2025.
//

// --- Getters (marked const) ---

#include "../include/TodoList.h"
#include <iostream>
#include <fstream>
#include <sstream>

TodoList::TodoList() {
}

void TodoList::addTask(const Task& task) {
    tasks.push_back(task);
    std::cout << "Added task: '" << task.getDescription() << "'\n";
}

void TodoList::removeTask(int index) {
    if (tasks.empty()) {
        std::cout << "The list is empty. Nothing to remove.\n";
        return;
    }

    int vectorIndex = index - 1;

    if (vectorIndex >= 0 && vectorIndex < tasks.size()) {
        std::string removedName = tasks[vectorIndex].getDescription();
        tasks.erase(tasks.begin() + vectorIndex);
        std::cout << "Successfully removed task: '" << removedName << "'\n";
    } else {
        std::cout << "Invalid task number! Please try again.\n";
    }
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



void TodoList::saveToFile(const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& task : tasks) {

            outFile << task.getDescription() << "|"
                    << task.getIsComplete() << "|"
                    << task.getPriority() << "\n";
        }
        outFile.close();
        std::cout << "Data saved to " << filename << "\n";
    } else {
        std::cout << "Error: Could not save to file!\n";
    }
}

void TodoList::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {

        return;
    }

    tasks.clear();
    std::string line;

    while (std::getline(inFile, line)) {
        std::stringstream ss(line);
        std::string segment;
        std::vector<std::string> parts;


        while (std::getline(ss, segment, '|')) {
            parts.push_back(segment);
        }

        if (parts.size() >= 3) {
            std::string desc = parts[0];
            bool isComplete = (parts[1] == "1");
            int priority = std::stoi(parts[2]);

            Task loadedTask(desc);
            loadedTask.setComplete(isComplete);
            loadedTask.setPriority(priority);
            tasks.push_back(loadedTask);
        }
    }
    inFile.close();
    std::cout << "Loaded " << tasks.size() << " tasks from " << filename << ".\n";
}

void TodoList::markTaskComplete(int index) {
    if (tasks.empty()) {
        std::cout << "List is empty.\n";
        return;
    }

    int vectorIndex = index - 1;

    if (vectorIndex >= 0 && vectorIndex < tasks.size()) {
        tasks[vectorIndex].setComplete(true);
        std::cout << "Task " << index << " marked as complete! [X]\n";
    } else {
        std::cout << "Invalid task number!\n";
    }
}