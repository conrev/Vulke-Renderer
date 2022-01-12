#pragma once

#define GLFW_INCLUDE_VULKAN
#include<GLFW/glfw3.h>
#include<string>

namespace vulke{

    class VulkeWindow{

        public:
            VulkeWindow(int w, int h, std::string name);
            ~VulkeWindow();

            VulkeWindow(const VulkeWindow &) = delete; // resource acquisition are only when initializing, not at any other time
            VulkeWindow &operator=(const VulkeWindow &) = delete;

            bool shouldClose() {return glfwWindowShouldClose(window);}

        private:
            void initWindow();

            const int width;
            const int height;

            std::string windowName;

            GLFWwindow *window;
    };
}