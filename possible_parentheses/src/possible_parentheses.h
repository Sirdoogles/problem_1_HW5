#include <list>
#include <stack>
// n: size of the problem
// result: a list of string, each string represents a case of valid parentheses of size n

void _possibleParenthesis(int pos, int n, int open, int close, std::list<std::string> & result)
{

    static std::string subResult; // String to store subanswers for each bracket combo. Part of Backtracking.

    // Append subanswer String to the result String list.
    if(close == n) {

        result.push_back(std::string(subResult));
    }

    if(open > close) {
        subResult.push_back('}'); // Append character to tempString.
        _possibleParenthesis(pos+1, n, open, close+1, result);
        subResult.pop_back(); // After recursive call is complete. remove added character before function call.
    }

    if(open < n) {
        subResult.push_back('{'); // Same deal here.
        _possibleParenthesis(pos+1, n, open+1, close, result);
        subResult.pop_back();
    }

}

void possibleParenthesis(int n, std::list<std::string> & result)
{
    // homework
    if(n > 0) {
        _possibleParenthesis(0, n, 0, 0, result);
    }

    // Print strings.
    for(auto const &i : result)
    {
        std::cout << i << "\n";
    }
}

bool paraBalanced(std::string subResult)
{
    std::stack<char> s;
    char ch;
    for(int i = 0; i < subResult.length(); i++)
    {
        if(subResult[i] == '{')
        {
            s.push(subResult[i]);
        }

        if(s.empty())
        {
            return false;
        }

        if(subResult[i] == '{')
        {

        }
    }

}