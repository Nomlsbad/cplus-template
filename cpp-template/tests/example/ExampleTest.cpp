#include <gtest/gtest.h>

#include "example/Example.hpp"

TEST(ExampleTest, 2Plus2Equals4)
{
    EXPECT_EQ(Example::sum(2, 2), 4);
}