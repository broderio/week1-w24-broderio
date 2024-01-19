#ifndef WEEK1_W24_BRACKET_CHECKING_HPP
#define WEEK1_W24_BRACKET_CHECKING_HPP

#include <stack>
#include <string>

/**
 * Check if a string contains a valid ordering of brackets using a stack.
 * @param input An input string containing a sequence of characters, possibly including (, ), [, ], {, or }.
 * @return True if the brackets are in a valid ordering, false otherwise.
 *
 * Examples:
 * () is a valid bracket ordering.
 * oin{[psknoib]}()({ljk[]}j) is a valid bracket ordering.
 * a sequence with no brackets is a valid bracket ordering.
 *
 * )( is not a valid bracket ordering.
 * {(}) is not a valid bracket ordering.
 * ((()) is not a valid bracket ordering.
 *
 * Hints:
 * You only care about the six bracket characters.
 * Only opening brackets need to be stored in the stack.
 */
bool check_brackets(const std::string& input) {
  std::stack<char> brackets;
  // TODO: Implement this function.

  return false;
}

#endif  // WEEK1_W24_BRACKET_CHECKING_HPP
