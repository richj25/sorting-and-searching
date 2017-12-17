#include <list>
#include <string>

#ifndef SORT_H
#define SORT_H

typedef std::list<int>::iterator listIter;

#define BUBBLESORT 1
#define QUICKSORT  2

void getListOfSortMethods(std::list<std::string>& sortMethods);

void callSortMethod(int method, std::list<int> list);

#endif /* SORT_H */
