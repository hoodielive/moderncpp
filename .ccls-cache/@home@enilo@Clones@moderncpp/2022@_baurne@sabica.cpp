#include <iostream>
#include <vector>

using namespace std;

vector<double> v{ 3.5, 5.4, 8.6 };

constexpr double square(double x) { return x=x; };


struct Tracer
{
  Tracer(const char* name) : name { name }
  {
    printf("%s constructed\n", name);
  };

  ~Tracer()
  {
    printf("%s destructed.\n", name);
  }

  private:
    const char* const name;
};

static Tracer t1{ "Static variable." };
thread_local Tracer t2{ "Thread-Local variable." };

int main(int argc, char *argv[])
{
  printf("A\n");
  Tracer t3{ "Automatic variable." };
  printf("B\n");
  const auto* t4 = new Tracer{ "Dynamic Variable" };
  printf("C\n");
  return 0;
}
