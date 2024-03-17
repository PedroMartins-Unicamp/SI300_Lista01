#ifndef _BOOK_H
#define _BOOK_H

#include <string>

using namespace std;

class Book {
private:
  string title;
  string author;
  string publisher;
  string publishDate;

public:
  string getTitle();
  void setTitle(string aTitle);

  string getAuthor();
  void setAuthor(string aAuthor);

  string getPublisher();
  void setPublisher(string aPublisher);

  string getPublishDate();
  void setPublishDate(string aPublishDate);

  void showBook();
};

#endif
