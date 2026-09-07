cmake_minimum_required(VERSION 4.2)
project(ed1_list_list04_cpp)

set(CMAKE_CXX_STANDARD 20)

#add_executable(ed1_algorithms_list04_cpp main.cpp
#        src/Exer01_RemoveDuplicates.cpp
#        src/Exer02_MoveZeroes.cpp
#        src/Exer03_ShuffleArray.cpp
#        src/Exer04_SortArrayByParity.cpp)

# Executáveis individuais para cada exercício
add_executable(Exer01_RemoveDuplicates src/Exer01_RemoveDuplicates.cpp)
add_executable(Exer02_MoveZeroes src/Exer02_MoveZeroes.cpp)
add_executable(Exer03_ShuffleArray src/Exer03_ShuffleArray.cpp)
add_executable(Exer04_SortArrayByParity src/Exer04_SortArrayByParity.cpp)

# Se ainda mantiver um main.cpp na raiz, declare-o aqui:
add_executable(main_app main.cpp)