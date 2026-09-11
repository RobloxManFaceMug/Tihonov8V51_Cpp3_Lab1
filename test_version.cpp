#define BOOST_TEST_MODULE test_version

// #include "lib.h"

#include <boost/test/unit_test.hpp>
#include "build/version.h"

BOOST_AUTO_TEST_SUITE(test_version)

BOOST_AUTO_TEST_CASE(test_valid_version)
{
    BOOST_CHECK(GIT_RELEASE_VERSION[1] > "0"[0]);
}

BOOST_AUTO_TEST_SUITE_END()
