#include "../header/rectangle.hpp"
#include "../src/rectangle.cpp"

#include "gtest/gtest.h"

TEST(Constructors, Basic_Constructors_Test) {
    Rectangle rect1;
    EXPECT_EQ(rect1.area(), 0);

    Rectangle rect2(4, 2);
    EXPECT_EQ(rect2.area(), 8);

    Rectangle rect3(0, 0);
    EXPECT_EQ(rect3.area(), 0);
}

TEST(Area, Basic_Area_Test) {
    Rectangle rect4;
    rect4.set_width(5);
    rect4.set_height(3);
    EXPECT_EQ(rect4.area(), 15);

    Rectangle rect5;
    rect5.set_width(1);
    rect5.set_height(1);
    EXPECT_EQ(rect5.area(), 1);

    Rectangle rect6(4, 44);
    EXPECT_EQ(rect6.area(), 176);

    Rectangle rect7(1, 0);
    EXPECT_EQ(rect7.area(), 0);
}

TEST(Perimeter, Basic_Perimeter_Test) {
    Rectangle rect8;
    rect8.set_width(5);
    rect8.set_height(3);
    EXPECT_EQ(rect8.perimeter(), 16);

    Rectangle rect9;
    rect9.set_width(1);
    rect9.set_height(1);
    EXPECT_EQ(rect9.perimeter(), 4);

    Rectangle rect10(4, 44);
    EXPECT_EQ(rect10.perimeter(), 96);

    Rectangle rect11(1, 0);
    EXPECT_EQ(rect11.perimeter(), 2);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
