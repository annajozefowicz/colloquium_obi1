#include <boost/test/unit_test.hpp>

#include "Template.h"

BOOST_AUTO_TEST_SUITE(ProjectTest)

BOOST_AUTO_TEST_CASE(AddTest) {
        Template temp;
        BOOST_CHECK_EQUAL(temp.toString(), "template");
}

BOOST_AUTO_TEST_CASE(RemoveTest) {
        Template temp;
        BOOST_CHECK_EQUAL(temp.toString(), "template");
}

BOOST_AUTO_TEST_SUITE_END()
