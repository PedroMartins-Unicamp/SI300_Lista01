#include "./Book.hpp"

#include <iostream>
#include <string>

using namespace std;

string Book::getTitle() { return title; }

void Book::setTitle(string aTitle) { title = aTitle; }

string Book::getAuthor() { return author; }

void Book::setAuthor(string aAuthor) { author = aAuthor; }

string Book::getPublisher() { return publisher; }

void Book::setPublisher(string aPublisher) { publisher = aPublisher; }

string Book::getPublishDate() { return publishDate; }

void Book::setPublishDate(string aPublishDate) { publishDate = aPublishDate; }

void Book::showBook() {
  cout << "Title: " << getTitle() << endl;
  cout << "Author: " << getAuthor() << endl;
  cout << "Publisher: " << getPublisher() << endl;
  cout << "Publish Date: " << getPublishDate() << endl;
}
