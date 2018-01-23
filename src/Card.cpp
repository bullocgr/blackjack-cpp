#include "Card.h"

namespace std
{
  const char * const Card::faces[14][4] = { { "🂡", "🂱", "🃁", "🃑" },
					    { "🂢", "🂲", "🃂", "🃒" },
					    { "🂣", "🂳", "🃃", "🃓" },
					    { "🂤", "🂴", "🃄", "🃔" },
					    { "🂥", "🂵", "🃅", "🃕" },
					    { "🂦", "🂶", "🃆", "🃖" },
					    { "🂧", "🂷", "🃇", "🃗" },
					    { "🂨", "🂸", "🃈", "🃘" },
					    { "🂩", "🂹", "🃉", "🃙" },
					    { "🂪", "🂺", "🃊", "🃚" },
					    { "🂫", "🂻", "🃋", "🃛" },
					    { "🂭", "🂽", "🃍", "🃝" },
					    { "🂮", "🂾", "🃎", "🃞" },
					    { "🂠", "",  "",  ""  }, };

  Card::Card(int v, int sv)
  {
    value = v;
    suiteValue = sv;
  }

  string Card::toString()
  {
    return Card::faces[value][suiteValue];
  }

  bool Card::isAce()
  {
    return value == 0;
  }

  bool Card::isTen()
  {
    return value > 9;
  }

  Card::~Card()
  {
  }
}
