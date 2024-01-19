#ifndef WEEK1_W24_MESSAGE_HOLDER_HPP
#define WEEK1_W24_MESSAGE_HOLDER_HPP

#include <queue>
#include <utility>

#include "messages.hpp"

/**
 * Message holder to store messages and pass them in the same order they were stored.
 */
class MessageHolder {
 public:
  /**
   * Store a StringMessage in the message holder.
   * @param message The message to store.
   */
  void storeMessage(const StringMessage &message) {
    // TODO: Implement this function.
  }

  /**
   * Store a BoolMessage in the message holder.
   * @param message The message to store.
   */
  void storeMessage(const BoolMessage &message) {
    // TODO: Implement this function.
  }

  /**
   * Remove and pass the first StringMessage that was stored and has not yet been removed.
   * @return A pair of StringMessage and a boolean, true if there was a message to return, false otherwise.
   */
  std::pair<StringMessage, bool> passStringMessage() {
    // TODO: Implement this function. You may remove the line below.
    return {StringMessage{}, false};
  }

  /**
   * Remove and pass the first BoolMessage that was stored and has not yet been removed.
   * @return A pair of BoolMessage and a boolean, true if there was a message to return, false otherwise.
   */
  std::pair<BoolMessage, bool> passBoolMessage() {
    // TODO: Implement this function. You may remove the line below.
    return {BoolMessage{}, false};
  }

 private:
  /**
   * Queue for holding StringMessages
   */
  std::queue<StringMessage> string_messages;

  /**
   * Queue for holding BoolMessages
   */
  std::queue<BoolMessage> bool_messages;
};

#endif  // WEEK1_W24_MESSAGE_HOLDER_HPP
