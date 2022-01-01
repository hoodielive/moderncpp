#include <cstdio>
#include <vector>
#include <array>
#include <string>

template<typename T>
class Structure
{
  public:
    Structure(const T &data) noexcept;
    Structure operator=(const Structure tera);

  private:
    double length_;
};
