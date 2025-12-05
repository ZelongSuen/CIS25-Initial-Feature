# Checkpoint 2: Second Feature Plan
## Feature Name

Task Remove

## Description

This feature enables users to remove specific tasks from the to-do list by selecting their index numbers. Once a task is deleted, the list will automatically reorder the remaining tasks, eliminating any gaps.

## Why This Feature?

The goal is to develop a "data management" tool. Managing data requires options for inputting and deleting data. This function was developed based on the first function and is achieved by manipulating the std::vector structure (deleting elements) rather than merely appending to it.

## Classes Involved

- To-do list: A new method named "removeTask" needs to be added to handle the logic of removing elements from the vector and dealing with invalid indices.
- main.cpp: It needs to be updated to include a menu option, which will prompt the user to enter the task number they wish to delete.

## Expected User Workflow

1. The user starts the program and sees the menu.
2. The user selects option "3. Remove Task".
3. The program displays the current list of tasks with their numbers.
4. The program asks: “Enter the task number to be removed*"*.
5. The user types a number.
6. The program confirms removal or displays an error if the input is invalid.