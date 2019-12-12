#include "Card.h"

const char *const Card::faces[14][4] = {{"🂡", "🂱", "🃁", "🃑"},
                                        {"🂢", "🂲", "🃂", "🃒"},
                                        {"🂣", "🂳", "🃃", "🃓"},
                                        {"🂤", "🂴", "🃄", "🃔"},
                                        {"🂥", "🂵", "🃅", "🃕"},
                                        {"🂦", "🂶", "🃆", "🃖"},
                                        {"🂧", "🂷", "🃇", "🃗"},
                                        {"🂨", "🂸", "🃈", "🃘"},
                                        {"🂩", "🂹", "🃉", "🃙"},
                                        {"🂪", "🂺", "🃊", "🃚"},
                                        {"🂫", "🂻", "🃋", "🃛"},
                                        {"🂭", "🂽", "🃍", "🃝"},
                                        {"🂮", "🂾", "🃎", "🃞"},
                                        {"🂠", "",   "",   ""},};

Card::~Card() = default;

Card::Card(unsigned v, unsigned sv) {
  value = v;
  suiteValue = sv;
}

std::string Card::toString() {
  return Card::faces[value][suiteValue];
}

bool Card::isAce() { return value == 0; }

bool Card::isTen() { return value > 8; }

