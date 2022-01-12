#include "app.hpp"

namespace vulke {

    void App::run() {

        while(!vulkeWindow.shouldClose()){
            glfwPollEvents();
        }
    }

}