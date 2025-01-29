#include <print>
#include <memory>

int main()
{
  std::unique_ptr<int> ptr(new int(42)); // which creates a unique_ptr

  std::print("{} \n", *ptr);


  // Transfer Ownership
  std::unique_ptr<int> ptr2 = std::move(ptr);

  if (!ptr)
  {
    std::print("ptr is null.\n");
  }

  return 0;
}
