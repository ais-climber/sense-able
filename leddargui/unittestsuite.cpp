#include "gtest/gtest.h"
#include "objectdetectthread.h"
#include "mainwindow.h"

//detect_wall(std::vector<float> distances, float measure_error, float flat_error)
// Using the following tutorial:
// https://www.ibm.com/developerworks/aix/library/au-googletestingframework.html


vector<float> distances;

objectDetector detect;

/****************************************
 * General format for writing unit tests:
 *
 *  TEST (NameOfFunction, NameOfTest) {
 *      // Do stuff to come up with data to test.
 *
 *      EXPECT_EQ(EXPECTED_VALUE, function(args, ...));
 *  }
 *
 *
***/

TEST (DetectWallTest, FlatDistribution) {
    for (int i = 0; i < 16; i++) {
        distances.push_back(1.0);
    }
    EXPECT_EQ(1, detect.detect_wall(distances, 0.75, 100));
}

//temp test for testing that google test tests
TEST (testCase, testName) {
    int i = 6;
    int j = 3;
    int result = i*j;
    //EXPECT_EQUAL(expected value, result)
    EXPECT_EQ(18, result);
}
// I for one take by faith that Google's code always works. ;)


