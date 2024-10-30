//
// Created by Taras Neridnyi on 30.10.2024.
//

#include <gtest/gtest.h>
#include "/Users/tarasneridnyi/Desktop/Lab6_1_it/src/functions.cpp"

TEST( TEST1 , testSumFunction) {
    int *t , exeptedsum = 0;
    srand((unsigned)time(0));
    create(t, 20, -14, 7 );

    for (int i = 0; i < 20; i++) {
        if (i % 4 != 0 && i > 0) {
            exeptedsum += t[i];
        }
    }
    int realsum = calculateSum(t, 20);
    ASSERT_EQ(exeptedsum, realsum);
}

TEST( TEST2 , testCountFunction) {
    int *t , exeptedcount = 0, size=20;

    for (int i=0; i<size; i++)
        if ( i % 4 != 0 && i > 0 ) {
            exeptedcount ++;
        }

    int realcount = calculateCount(size);
    ASSERT_EQ(exeptedcount, realcount);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
