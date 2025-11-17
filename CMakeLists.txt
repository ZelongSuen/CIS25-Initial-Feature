# CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 项目名称
project(TodoListProject)

# 设置 C++ 标准为 17 (或 14)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 告诉 CMake 我们的头文件在 'include' 目录下
# 这是至关重要的一行！
include_directories(include)

#--- 构建主程序 ---

# 查找 'src/' 目录下的所有 .cpp 文件
file(GLOB SOURCES "src/*.cpp")

# 创建一个名为 'todolist_app' 的可执行文件
# 它由 'src/' 目录下的所有 .cpp 文件编译而来
add_executable(todolist_app ${SOURCES})


#--- 构建测试 ---

# 启用测试
enable_testing()

# 为测试添加一个新的可执行文件
# 它需要链接它所测试的类 (Task.cpp, TodoList.cpp)
add_executable(test_tasks
        tests/test_tasks.cpp
        src/Task.cpp
        src/TodoList.cpp
)

# 注册测试，以便 ctest 可以运行它
# 'TaskTests' 是测试的名称
# 'test_tasks' 是上面创建的可执行文件的名称
add_test(NAME TaskTests COMMAND test_tasks)