## Section 1: Project Summary

My project is a C++ Console-based To-Do List Manager designed to help users log, track, and manage their daily tasks efficiently.
I implemented three core features:

1. **Add Task**: Users can input tasks with simple description.
2. **Remove Task**: Users can delete tasks through the index, and the list will be automatically sorted.
3. **Save/Load Feature**: When the program starts, it will load the data and save it to a file when it exits. This program can handle the simplest data management and ensure that the task list will not be lost after the program is closed.
4. **Mark as Complete**: A new feature has been added, allowing users to switch the task status to [x], thereby providing an intuitive display of the progress.
## Section 2: What Remains

I failed to complete all the project contents as originally planned. During the actual implementation, I found it too difficult and there wasn't enough time. Therefore, I had to significantly simplify the functions and attempted to achieve a program similar to task management in the simplest way.

- Symbol Commands: Initially, I planned to use specific symbols for different task types or to achieve quick input through symbols, but currently, this feature has not been completed.
- Estimated time: I originally planned to have an automatic countdown or a time subtraction function, but it was too complicated and I had no idea how to implement it. Eventually, I decided to abandon this plan.

Compared with the original plan, this program has not been fully completed. Only the basic addition and deletion functions have been implemented.

## Section 3: Time Estimate

The time was too long and I didn't do the calculation.

## Section 4: What I Learned

- **C++ Concepts**:I have learned how to use std::vector to add and remove elements, as well as how to use <fstream> to save my list to a text file.
- **Hardest Part**: C++ is generally more complex compared to other languages, and it has many difficulties. Among them, how to re-read the file into the program is a challenge that took a long time to overcome. It requires figuring out how to split a line of text into individual tasks.
- **What I'd Do Differently**:I made numerous temporary modifications to the plan because I wasn't sure about the difficulty and time consumption. I should have planned the "save" function earlier, but due to implementation issues, I put it at the end.
- **Proudest Moment**: I'm really glad that the "Save/Load" function is working properly. After closing the program and reopening it, I saw that the task addition was still there. It feels great.
- **Data Structures**: I have learned that std::vector is suitable for lists that may change. When performing deletion tasks, one must pay attention to the issue of index numbers.