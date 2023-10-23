#include <hw05.h>
#include <gtest/gtest.h>

TEST(Hw05Tests, Test1)
{
    VecOfStr input{"madam", "radar", "anagram", "rotor"};
    auto expected = VecOfStr{"madam", "radar", "rotor"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test2)
{
    VecOfStr input{"Madam, in Eden, I'm Adam"};
    auto expected = VecOfStr{"Madam, in Eden, I'm Adam"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test3)
{
    VecOfStr input{"Red roses run no risk, sir, on Nurse's order"};
    auto expected = VecOfStr{"Red roses run no risk, sir, on Nurse's order"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test4)
{
    VecOfStr input{"Won't lovers revolt now?"};
    auto expected = VecOfStr{"Won't lovers revolt now?"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test5)
{
    VecOfStr input{"A man, a plan, a canal, Panama!", "SIMPLETEXT"};
    auto expected = VecOfStr{"A man, a plan, a canal, Panama!"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}
TEST(Hw05Tests, Test6)
{
    VecOfStr input{"racecar", "deified", "level", "hello"};
    auto expected = VecOfStr{"racecar", "deified", "level"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test7)
{
    VecOfStr input{"A man, a plan, a canal, Panama!", "SIMPLETEXT", "Was it a car or a cat I saw?"};
    auto expected = VecOfStr{"A man, a plan, a canal, Panama!", "Was it a car or a cat I saw?"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test8)
{
    VecOfStr input{"Evil is a name of a foeman, as I live."};
    auto expected = VecOfStr{"Evil is a name of a foeman, as I live."};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test9)
{
    VecOfStr input{"A Toyota's a Toyota.", "No lemon, no melon", "Step on no pets"};
    auto expected = VecOfStr{"A Toyota's a Toyota.", "No lemon, no melon", "Step on no pets"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test10)
{
    VecOfStr input{"A nut for a jar of tuna.", "Yo, Banana Boy!"};
    auto expected = VecOfStr{"A nut for a jar of tuna.", "Yo, Banana Boy!"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}