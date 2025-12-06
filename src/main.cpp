
#include <iostream>
#include <limits>
#include "../include/TodoList.h"
#include "../include/Task.h"


void printMenu() {
    std::cout << "\n=== Todo List Manager ===\n";
    std::cout << "1. Add Task\n";
    std::cout << "2. View All Tasks\n";
    std::cout << "3. Mark Task Complete\n";
    std::cout << "4. Remove Task\n";
    std::cout << "5. Save & Exit\n";
    std::cout << "Enter choice: ";
}

int main() {
    TodoList myTodoList;
    myTodoList.loadFromFile("todo_data.txt");

    int choice = 0;
    while (choice != 5) {
        printMenu();
        if (!(std::cin >> choice)) {
            std::cout << "Invalid input.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cin.ignore();

        if (choice == 1) {
            std::string desc;
            std::cout << "Enter description: ";
            std::getline(std::cin, desc);
            myTodoList.addTask(Task(desc));

        } else if (choice == 2) {
            myTodoList.displayAllTasks();

        } else if (choice == 3) {
            myTodoList.displayAllTasks();
            if (myTodoList.getTaskCount() > 0) {
                int taskNum;
                std::cout << "Enter task number to mark done: ";
                std::cin >> taskNum;
                myTodoList.markTaskComplete(taskNum);
            }

        } else if (choice == 4) {
            myTodoList.displayAllTasks();
            if (myTodoList.getTaskCount() > 0) {
                int taskNum;
                std::cout << "Enter task number to remove: ";
                std::cin >> taskNum;
                myTodoList.removeTask(taskNum);
            }

        } else if (choice == 5) {
            myTodoList.saveToFile("todo_data.txt");
            std::cout << "Goodbye!\n";
        }
    }
    return 0;
}