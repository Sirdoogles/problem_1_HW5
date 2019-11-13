#include "gtest/gtest.h"
#include "possible_parentheses.h"

void showResult(std::list<std::string> & result) {
    for (std::list<std::string>::iterator i = result.begin(); i!=result.end(); ++i) {
        printf("%s\n", (*i).c_str());
    }
};

TEST(test_recursive, 1) {
    std::list<std::string> result;
    possibleParenthesis(1, result);
    int balanceCount = 0;
    for(auto const &i: result)
    {
        std::string subResult = i;
        if(paraBalanced(subResult)) // Comparing each string if they are balanced. If so, increment balanceCount.
        {
            balanceCount++;
        }
    }
    ASSERT_TRUE(balanceCount == 1); // Will return true if the # of balanced Strings are equal to possible parentheses combos.

    // homework: add verification

}

TEST(test_recursive, 2) {
    std::list<std::string> result;
    possibleParenthesis(2, result);
    int balanceCount = 0;
    for(auto const &i: result)
    {
        std::string subResult = i;
        if(paraBalanced(subResult))
        {
            balanceCount++;
        }
    }
    ASSERT_TRUE(balanceCount == 2);
    // homework: add verification
}

TEST(test_recursive, 3) {
    std::list<std::string> result;
    possibleParenthesis(3, result);
    int balanceCount = 0;
    for(auto const &i: result)
    {
        std::string subResult = i;
        if(paraBalanced(subResult))
        {
            balanceCount++;
        }
    };
    ASSERT_TRUE(balanceCount == 5);
    // homework: add verification
}

// and more

TEST(test_recursive, 4) {
    std::list<std::string> result;
    possibleParenthesis(4, result);
    int balanceCount = 0;
    for(auto const &i: result)
    {
        std::string subResult = i;
        if(paraBalanced(subResult))
        {
            balanceCount++;
        }
    }
    ASSERT_TRUE(balanceCount == 14);
    // homework: add verification
}

TEST(test_recursive, 5) {
    std::list<std::string> result;
    possibleParenthesis(5, result);
    int balanceCount = 0;
    for(auto const &i: result)
    {
        std::string subResult = i;
        if(paraBalanced(subResult))
        {
            balanceCount++;
        }
    }
    ASSERT_TRUE(balanceCount == 42);
    // homework: add verification
}