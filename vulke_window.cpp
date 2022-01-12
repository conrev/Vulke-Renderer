#include "vulke_window.hpp"

namespace vulke {

    // constructor with initializer list, means : initialize width with value w, {} is the function body after.
    VulkeWindow::VulkeWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name} {
        initWindow();
    }

    VulkeWindow::~VulkeWindow(){
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void VulkeWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API,GLFW_NO_API); // dont create opengl context
        glfwWindowHint(GLFW_RESIZABLE,GLFW_FALSE); // prevent window resizing

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);


    }


}