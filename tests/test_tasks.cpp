//
// Created by longl on 11/10/2025.
//

#include "../include/Task.h"
#include "../include/TodoList.h"
#include <cassert>
#include <iostream>


void testTaskCreation() {
    std::cout << "Test 1: Task Creation...";
    Task task("Test description");

    assert(task.getDescription() == "Test description");
    assert(task.getIsComplete() == false);
    assert(task.getPriority() == 1);

    std::cout << " PASSED\n";
}

void testAddTask() {
    std::cout << "Test 2: Add Task to List...";
    TodoList list;

    assert(list.getTaskCount() == 0);

    Task task("Test task");
    list.addTask(task);

    assert(list.getTaskCount() == 1);

    std::cout << " PASSED\n";
}


void testMarkComplete() {
    std::cout << "Test 3: Mark Task Complete...";
    Task task("My Task");

    assert(task.getIsComplete() == false);

    task.setComplete(true);
    assert(task.getIsComplete() == true);

    task.setComplete(false);
    assert(task.getIsComplete() == false);

    std::cout << " PASSED\n";
}


// 在 test_tasks.cpp 中添加以下函数

void testRemoveTask() {
    std::cout << "Test 4: Remove Task logic...";
    TodoList list;

    // 准备数据：添加3个任务
    list.addTask(Task("Task 1"));
    list.addTask(Task("Task 2"));
    list.addTask(Task("Task 3"));
    assert(list.getTaskCount() == 3);

    // 测试 1: 删除中间的任务 (Task 2，用户视角是第2个)
    list.removeTask(2);
    assert(list.getTaskCount() == 2);

    // 删除后，原本的 "Task 3" 应该变成列表里的第2个元素（索引1）
    // 注意：这里无法直接验证内容，除非TodoList有个getTaskAt方法，
    // 但通过数量检查通常已足够证明erase工作了。

    // 测试 2: 删除无效索引 (例如索引 10)
    list.removeTask(10);
    assert(list.getTaskCount() == 2); // 数量应该不变

    // 测试 3: 删除索引 0 (无效，因为用户界面是从1开始的)
    list.removeTask(0);
    assert(list.getTaskCount() == 2); // 数量应该不变

    // 测试 4: 删除剩下的所有任务
    list.removeTask(1);
    list.removeTask(1);
    assert(list.getTaskCount() == 0);

    // 测试 5: 从空列表删除
    list.removeTask(1); // 不应该崩溃
    assert(list.getTaskCount() == 0);

    std::cout << " PASSED\n";
}

// 记得在 test_tasks.cpp 的 main 函数里调用它：
// int main() {
//    ...
//    testRemoveTask();
//    ...
// }

int main() {
    std::cout << "\n=== Running Tests for TodoList ===\n\n";

    testTaskCreation();
    testAddTask();
    testMarkComplete();

    std::cout << "\n✅ All tests passed!\n";
    return 0;
}