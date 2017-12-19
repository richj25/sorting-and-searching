#include <list>
#include <string>

#ifndef SORT_API_H
#define SORT_API_H

typedef std::list<std::string> StringList;
typedef std::list<int> IntegerList;

void getSortMethods(StringList& sortMethods);

void callSortMethod(const std::string method, IntegerList& list, double& elapsedTime);

#endif
