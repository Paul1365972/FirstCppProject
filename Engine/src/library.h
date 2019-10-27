#pragma once

#include <string>

namespace Engine {

    struct CreationInfo {
        std::string title;
    };

    void hello();

    void runStuff(const CreationInfo& info);

}
