//
// Created by longl on 11/10/2025.
//

#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
    std::string description;
    bool isComplete;
    int priority;

public:
    //Constructor
    Task();
    Task(const std::string& desc);

    // Getters
    std::string getDescription() const;
    bool getIsComplete() const;
    int getPriority() const;

    // Setters
    void setDescription(const std::string& desc);
    void setComplete(bool complete);
    void setPriority(int newPriority);


    void display() const;
};

#endif