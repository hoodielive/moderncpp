#include <cstdio>
#include <iostream>

struct RatThing
{
  static void powerUpRatThing(int nuclearIsotopes)
  {
    static thread_local int ratThingsPower;
    ratThingsPower += nuclearIsotopes;
    const auto wasteHeat = ratThingsPower * 20;

    if (wasteHeat > 10000)
    {
      printf("Warning! Hot doggie!\n");
    }

    printf("Rat-thing power: %d\n", ratThingsPower);
  }
};

int main()
{
  RatThing::powerUpRatThing(100);
  RatThing::powerUpRatThing(500);

  return 0;
}
