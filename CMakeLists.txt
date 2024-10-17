cmake_minimum_required(VERSION 3.29)
project(VictoriaVillalobos_EjerciciosparaNocionesClave)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(VictoriaVillalobos_EjerciciosparaNocionesClave2
        "parte 1 y 2/main.cpp"
        "parte 1 y 2/persona.cpp"
        "parte 1 y 2/persona.h"
        "parte 1 y 2/estudiante.cpp"
        "parte 1 y 2/estudiante.h"


)
add_executable(VictoriaVillalobos_EjerciciosparaNocionesClave

        "proyecto 2/nuevo.cpp"
        "proyecto 2/funciones.cpp"
        "proyecto 2/funciones.h"
        "proyecto 2/main2.cpp"
        "proyecto 2/main2.h"
        "proyecto 2/nuevo.h"
        "proyecto 2/matematicas.cpp"
        "proyecto 2/matematicas.h"

)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
target_link_libraries(VictoriaVillalobos_EjerciciosparaNocionesClave PRIVATE fmt::fmt)

add_library(matematicas STATIC "proyecto 2/matematicas.cpp")
add_library(matematicas2 SHARED "proyecto 2/matematicas.cpp")
