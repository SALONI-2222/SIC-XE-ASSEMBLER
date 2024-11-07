// tables.h
#ifndef TABLES_H
#define TABLES_H

#include <map>
#include <string>

void createOptab(std::map<std::string, std::string>& OPTAB);
bool createSymtab(std::map<std::string, std::string>& SYMTAB , std::string address , std:: string symbol);
void createRegister(std::map<std::string, std::string>& REG );

#endif // TABLES_H
