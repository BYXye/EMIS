#ifndef TOOLS_H
#define TOOLS_H

#include <iostream>
#include <vector>
#include <fstream>
#include <getch.h>
#include <cstdlib>
#include <cstring>

#define MANAGER_PATH "./data/managers.dat"
#define DEPARTMENT_PATH "./data/services.dat"
#define ID_PATH "./data/id.dat"

using namespace std;

char get_cmd(char start, char end);
void anykey_continue(void);
int get_mgrid(void);
int get_deptid(void);
int get_empid(void);

#endif//TOOLS_H
