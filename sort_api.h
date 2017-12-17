#include <list>
#include <string>
#include <map>

#ifndef SORT_API_H
#define SORT_API_H

#define BUBBLESORT 1
#define QUICKSORT  2

typedef std::map<int, std::string> MethodMap;

void bubbleSort(std::list<int>& list);

void quickSort(std::list<int> list);

void getSortMethods(MethodMap& sortMethods);

void callSortMethod(int method, std::list<int> list);

#endif
