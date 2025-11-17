# Checkpoint 1 Reflection

## What I Implemented
I implemented the core feature: **Basic Task Management**. This involved creating the `Task` class to hold task data (description, completion status, priority) and a `TodoList` manager class to hold a `std::vector` of tasks. The `main.cpp` file now has a simple menu loop allowing the user to add a new task (by description) and display all tasks currently in memory.

## Challenges I Faced
The biggest challenge was making sure the `main.cpp` input loop worked correctly, especially with `std::cin` and `std::getline`. I had to remember to use `std::cin.ignore()` to clear the newline character from the buffer after reading the menu `choice`, so that `std::getline` for the task description wouldn't be skipped.

## What I Learned
I got good practice with C++ class basics:
- Using initializer lists in constructors (`Task::Task(...) : description(desc) ...`).
- The difference between getters (marked `const`) and setters.
- How a "manager" class (`TodoList`) can own and manage a collection of another class (`Task`).
- How to set up a basic CTest executable in `CMakeLists.txt` and write simple `assert` tests.

## Testing Results
My three tests passed.
1.  **Task Creation**: Verified a new `Task` has the correct description and default `isComplete` status.
2.  **Add Task**: Verified the `TodoList` task count goes from 0 to 1.
3.  **Mark Complete**: Verified the `setComplete()` setter works correctly.
    Testing helped me realize I should initialize `isComplete` to `false` in the constructor, which I had forgotten initially.

## Questions for Next Checkpoint
- What is the best way to handle saving/loading `std::vector<Task>` to a JSON file? (This relates to my "Technical Unknown" from the plan).
- For "Symbolic Commands," is it better to read all input as a string and parse it, or try to read character by character?
