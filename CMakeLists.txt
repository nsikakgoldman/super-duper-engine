cmake_minimum_required(VERSION 3.26)
project(super_duper_engine)

set(CMAKE_CXX_STANDARD 17)


add_executable(super_duper_engine main.cpp
        Functions.cpp
        Account.h
        Account.cpp
        Transaction.cpp
        Person.h
        Person.cpp
        Twitter.h
        Twitter.cpp
        status.h)

