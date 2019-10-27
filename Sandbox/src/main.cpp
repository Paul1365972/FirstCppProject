#include <iostream>
#include "library.h"

#include <glm/vec3.hpp>

template <typename T>
void printSize(std::string_view name) {
    int size = sizeof(T);
    std::cout << "Size of " << name << " : " << size << (size == 1 ? " bytes" : " byte") << std::endl;
}

int main() {
    Engine::hello();
    printSize<long>("long");
    printSize<int32_t>("int32_t");
    printSize<uint32_t>("uint32_t");
    glm::vec3 vector(1, 3, 2);
    std::cout << "Vector " << vector.g << std::endl;
    Engine::runStuff({"Epic Window Sample Title"});
}
