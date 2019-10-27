#include "library.h"

#include <iostream>
#include <GLFW/glfw3.h>

namespace Engine {

    void hello() {
        std::cout << "Hello from Engine!" << std::endl;
    }

    void runStuff(const CreationInfo& info) {
        if (!glfwInit())
        {
            std::cout << "Could not init glfw" << std::endl;
            return;
        }
        std::printf("Compiled against GLFW %i.%i.%i\n",
               GLFW_VERSION_MAJOR,
               GLFW_VERSION_MINOR,
               GLFW_VERSION_REVISION);
        int major, minor, revision;
        glfwGetVersion(&major, &minor, &revision);
        std::printf("Running against GLFW %i.%i.%i\n", major, minor, revision);
        GLFWwindow *window = glfwCreateWindow(800, 450, info.title.c_str(), NULL, NULL);
        if (!window)
        {
            std::cout << "Could not create window" << std::endl;
            return;
        }
        glfwShowWindow(window);
        while (!glfwWindowShouldClose(window))
        {
            glfwWaitEvents();
        }
        glfwDestroyWindow(window);


        glfwTerminate();
    }
}
