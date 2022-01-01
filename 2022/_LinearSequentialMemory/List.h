#pragma once

template<typename T>
class List
{
  public:
    // We are targeting this List operator [] so that later when
    // we call 'List<int> L;' or l[0] it knows I am referring to 
    // this function index.

    const T &operator[](unsigned index);
    void insertAtFront(const T &data);

  private:
    class ListNode
    {
      public:
        const T &data;
        ListNode *next;
        ListNode(const T &data) : data(data), next(nullptr) {  }
    };

    ListNode *head_; /*< Head pointer for our List> */
};

