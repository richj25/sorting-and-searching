#include <list>
#include <string>
#include <vector>

#ifndef SORT_API_H
#define SORT_API_H

typedef std::list<std::string> StringList;
typedef std::vector<int> Container;
//typedef std::list<int> Container;

void getSortMethods(StringList& sortMethods);

void callSortMethod(const std::string method, Container& list, double& elapsedTime);

#endif
