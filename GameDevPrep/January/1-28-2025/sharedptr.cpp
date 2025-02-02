#include <print>
#include <memory>


int main()
{
  std::shared_ptr<int> ptr1(new int(42)); // Create a shared_ptr
  std::shared_ptr<int> ptr2 = prt1;

  std::print("{} and {} \n", *ptr1, *ptr2);
  std::print("Use count: {} \n", ptr1.use_count());
  
  return 0;
}
