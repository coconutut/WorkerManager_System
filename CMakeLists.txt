cmake_minimum_required(VERSION 3.10)

project(WorkerManager_System)

set(SRC src/main.cpp
        src/ShowMenu.cpp
        src/WorkerManager.cpp
        src/Boss.cpp
        src/Staff.cpp
        src/Manager.cpp
)
include_directories(include)

add_executable(main ${SRC})
