//
// Created by longl on 11/10/2025.
//


#include "../include/Task.h"
#include <iostream>


Task::Task()
    : description("Untitled Task"), isComplete(false), priority(1) {

}

Task::Task(const std::string& desc)
    : description(desc), isComplete(false), priority(1) {

}

// Getters
std::string Task::getDescription() const {
    return description;
}

bool Task::getIsComplete() const {
    return isComplete;
}

int Task::getPriority() const {
    return priority;
}

// Setters
void Task::setDescription(const std::string& desc) {
    description = desc;
}

void Task::setComplete(bool complete) {
    isComplete = complete;
}

void Task::setPriority(int newPriority) {
    if (newPriority > 0 && newPriority < 5) {
        priority = newPriority;
    } else {
        priority = 1;
    }
}


void Task::display() const {
    std::string status = (isComplete) ? "[X]" : "[ ]";
    std::cout << status << " (Priority: " << priority << ") "
              << description;

}