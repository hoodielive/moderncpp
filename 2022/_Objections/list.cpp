#include "list.h"
#include <string>

List::List()
{
  mData = new std::string[DEFAULT_CAPACITY];
  mSize = 0;
  mCapacity = 100;

};

List::List(int capacity)
{
  mData = new std::string[capacity];
  mSize = 0;
  this->mCapacity = capacity;
};

List::~List()
{
  delete[] mData;
};

void List::push_back(std::string s)
{
  if (mSize < mCapacity)
  {
    mData[mSize] = s;
    mSize++;
  }
};

int List::size() const
{
  return mSize;
};

std::string List::at(int index) const
{
  return mData[index];
}

int main()
{

  return 0;
}

