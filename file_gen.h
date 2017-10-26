#ifndef FILE_GEN_H
#define FILE_GEN_H

#include <string>
#include <list>

void createRandomFile(std::string filePath, int fileSize);

void readFile(std::string filePath, std::list<int>& list);

void removeFile();

#endif
