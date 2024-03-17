#include "src/Book/Book.hpp"

#include <iostream>

using namespace std;

void printSep() { cout << "===================================" << endl; }

int main(void) {

  Book bk1 = Book();

  bk1.showBook();

  printSep();

  bk1.setTitle("Introduction to Algorithms - 4th Edition");
  bk1.showBook();

  printSep();

  bk1.setAuthor("Thomas H. Cormen");
  bk1.showBook();

  printSep();

  bk1.setPublisher("The MIT Press");
  bk1.showBook();

  printSep();

  bk1.setPublishDate("2022");
  bk1.showBook();

  return 0;
}
