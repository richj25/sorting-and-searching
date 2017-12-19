#include <list>
#include <string>

#ifndef SORT_API_H
#define SORT_API_H

typedef std::list<std::string> StringList;
typedef std::list<int> IntegerList;

void bubbleSort(IntegerList& list);

void quickSort(IntegerList& list);

void getSortMethods(StringList& sortMethods);

void callSortMethod(const std::string method, IntegerList& list);

#endif
