#include "build/version.h"

#include <iostream>

int main (int, char **) {
    std::cout << "Hello, world! Version 1.0." << GIT_RELEASE_VERSION[1] << std::endl;
    return 0;
}

