# Checkpoint 1 Test Cases

## Feature: Basic Task Management (Add & Display)

### Test Setup
- Test file: `tests/test_tasks.cpp`
- Build system: CMake with CTest
- Run command: `ctest --verbose`

### Test 1: Task Creation
- **What it tests**: Creating a `Task` object and verifying its default properties (description, completion status, priority).
- **Expected result**: Task is created with the correct description, `isComplete` is false, and priority is 1.
- **Result**:  Pass 

### Test 2: Add Task to List
- **What it tests**: Adding a `Task` to the `TodoList` manager and verifying the count. Tests the edge case of an empty list.
- **Expected result**: `TodoList` count starts at 0 and becomes 1 after adding a task.
- **Result**:  Pass

### Test 3: Mark Task Complete
- **What it tests**: Using the `setComplete()` setter to toggle a task's status. Tests the boundary of changing state.
- **Expected result**: `isComplete` property correctly changes from false to true, and back to false.
- **Result**:  Pass 

### CTest Output
=== Running Tests for TodoList ===

Test 1: Task Creation... PASSED
Test 2: Add Task to List...Added task: 'Test task'
PASSED
Test 3: Mark Task Complete... PASSED

鉁?All tests passed!

Process finished with exit code 0