#include <gtest/gtest.h>
#include <library/Container.h>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(ContainerTest, BasicFunctionality) {
    Container().hello();
}