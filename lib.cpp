#include "lib.h"

#include "version.h"

int version() {
    
    const char* a = GIT_RELEASE_VERSION;

    return ((a[1] - '0') * 10 + a[2] - '0');
}
