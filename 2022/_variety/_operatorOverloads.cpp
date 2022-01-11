#include <iostream>
#include <ostream>

class Oep
{
  private:
  public:
    int x, y;

    Oep(int xx, int yy) : x { xx }, y { yy } {};

    std::ostream& operator<<(const &std::ostream stream, const Oep& other) const
    {
      stream << other.x << ", " << other.y << '\n';
      return stream;
    }


};

int main(int argc, char *argv[])
{
  
  return 0;
}
