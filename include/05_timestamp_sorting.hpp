#ifndef WEEK1_W24_TIMESTAMP_SORTING_HPP
#define WEEK1_W24_TIMESTAMP_SORTING_HPP

#include <queue>

#include "messages.hpp"

/**
 * Comparator for StringMessages to support the sort_by_timestamp() function.
 */
struct StringMessageCompare {
  // TODO: Define a function that allows this struct to be used as a comparator with your priority queue.
};

/**
 * Sort a list of messages in order of increasing timestamp.
 * @param messages A vector of messages.
 * @return A vector of messages with timestamps in ascending order.
 */
std::vector<StringMessage> sort_by_timestamp(const std::vector<StringMessage> &messages) {
  // TODO: Implement this function using a priority queue and the StringMessageCompare struct. You may remove the line
  // below.
  return {};
}

#endif  // WEEK1_W24_TIMESTAMP_SORTING_HPP
