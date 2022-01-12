#pragma once

#include "vulke_window.hpp"

namespace vulke {
    class App {

        public:
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 800;
        

        void run(); 


        private:
            VulkeWindow vulkeWindow{WIDTH, HEIGHT, "Vulke Window"};

    };

}