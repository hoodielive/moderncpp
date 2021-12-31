#ifndef LIST_H
#define LIST_H

#include <string>

const int DEFAULT_CAPACITY = 100;

class List
{
  public:
    List();
    List(int capacity);
    ~List();

    void push_back(std::string s);
    int size() const;
    std::string at(int index) const;

  private:
    std::string *mData;
    int mSize;
    int mCapacity;
};


#endif
