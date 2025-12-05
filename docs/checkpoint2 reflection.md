# Checkpoint 2 Reflection

## Implementation Summary

The "delete task" function has been successfully implemented. This involved adding a "removeTask" method to the TodoList class.

## Integration

This function is directly integrated with the std::vector created in the previous function.

## Challenges

The main problem lies in handling the index differences. The list displayed to the user starts from 1, but the C++ vector starts from 0. It is necessary to ensure that 1 is subtracted from the user input and verify whether the result is within the boundary range of the vector (from 0 to size - 1).

## What I Learned

- How to remove elements from a 'std::vector using' iterators.
- The significance of performing input validation before executing memory operations.