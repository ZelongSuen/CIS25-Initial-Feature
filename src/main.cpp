
#include <iostream>
#include <limits>
#include "../include/TodoList.h"
#include "../include/Task.h"

void printMenu() {
    std::cout << "\n=== Todo List Manager ===\n";
    std::cout << "1. Add Task\n";
    std::cout << "2. View All Tasks\n";
    std::cout << "3. Remove Task\n";
    std::cout << "4. Save & Exit\n"; // 改个名字，提示用户会保存
    std::cout << "Enter choice: ";
}

int main() {
    TodoList myTodoList;

    // 程序启动时，自动读取数据
    myTodoList.loadFromFile("todo_data.txt");

    int choice = 0;

    while (choice != 4) {
        printMenu();
        if (!(std::cin >> choice)) {
            std::cout << "Invalid input. Please enter a number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cin.ignore();

        if (choice == 1) {
            std::string desc;
            std::cout << "Enter task description: ";
            std::getline(std::cin, desc);

            Task newTask(desc);
            myTodoList.addTask(newTask);

        } else if (choice == 2) {
            myTodoList.displayAllTasks();

        } else if (choice == 3) {
            myTodoList.displayAllTasks();
            if (myTodoList.getTaskCount() > 0) {
                int taskNum;
                std::cout << "Enter the number of the task to remove: ";
                std::cin >> taskNum;
                myTodoList.removeTask(taskNum);
            }

        } else if (choice == 4) {
            // 退出前自动保存
            myTodoList.saveToFile("todo_data.txt");
            std::cout << "Goodbye!\n";
        } else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}