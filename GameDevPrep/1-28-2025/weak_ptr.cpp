#include <print>
#include <memory>

int main()
{
  std::shared_ptr<int> sharedPtr(new int(42));
  std::weak_ptr<int> weakptr; 
  
  if (auto tempSharedPtr = weakptr.lock())
  {
    std::print("{} \n", *tempSharedPtr);
  }
  else
  {
    std::print("Resource has been deleted. \n");
  }
  
  return 0;
}
