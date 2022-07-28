#include <iostream>
#include <cstring>

using namespace std;

// Now you can use IDType in the place of int.
typedef int IDType;

enum DirectionType 
{
  NORTH = 0,
  EAST,
  SOUTH,
  WEST
};

struct BookType
{
  int bookId;
  char title[256];
  char author[256];
  int year;
  float price;
};

void Func(const BookType& book);

int main(int argc, char *argv[])
{
  IDType myID = 844309;

  BookType aBook;

  aBook.bookId = 100;
  strcpy(aBook.title, "A Tale of Two Cities");
  strcpy(aBook.author, "Charles Dickens");
  aBook.year = 1859;
  aBook.price = 19.99;

  BookType books[10];
  books[0].bookId = 1001;

  BookType *bookPtr = &aBook;
  BookType *optrBook = new BookType;

  bookPtr->year = 1999;

  Func(aBook);
  return 0;
}

void Func(const BookType& book) 
{
  // use book
}
