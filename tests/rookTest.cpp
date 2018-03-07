#include <Rook.h>
#include "gtest/gtest.h"

class RookTest: public ::testing::Test {
protected:

};


TEST_F(RookTest, moveCorrectly) {
    Rook rook1(7,0,0);
    bool moveValid = rook1.valid (4,0);
    ASSERT_TRUE(moveValid);
    bool moveValid2 = rook1.valid (5,2);
    ASSERT_FALSE(moveValid);

}
