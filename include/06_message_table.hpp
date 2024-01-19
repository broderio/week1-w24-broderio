#ifndef WEEK1_W24_MESSAGE_TABLE_HPP
#define WEEK1_W24_MESSAGE_TABLE_HPP

#include <unordered_map>

#include "messages.hpp"

/**
 * Class to store StringMessages with a particular interface.
 */
class MessageTable {
 public:
  /**
   * Retrieve the most recently added StringMessage with a specific data value, falling back to a default return if no
   * messages with the specified value have been added.
   * @param message_data The data value of a StringMessage to search for.
   * @param default_message The StringMessage to return if no messages with the specified data have been added.
   * @return The most recently added message with matching data if present, otherwise the default message.
   */
  StringMessage lookupDataWithDefault(const std::string &message_data, const StringMessage &default_message) {
    // TODO: Implement this function. You may remove the line below.
    return {};
  }

  /**
   * Count the number of messages added with a specific data value.
   * @param message_data The message data value to check for.
   * @return The number of messages with matching data that have been added.
   */
  int countByData(const std::string &message_data) {
    // TODO: Implement this function. You may remove the line below.
    return 0;
  }

  /**
   * Add a message and update the count of messages added appropriately. Update table to store most recently added
   * message.
   * @param message The message to add.
   */
  void addMessage(const StringMessage &message) {
    // TODO: Implement this function.
  }

 private:
  /**
   * Map from message data value to message and number of times a message with equivalent value has been added.
   */
  std::unordered_map<std::string, std::pair<StringMessage, int>> messages;
};

#endif  // WEEK1_W24_MESSAGE_TABLE_HPP
