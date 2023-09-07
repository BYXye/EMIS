#ifndef MANAGER_MODE_H
#define MANAGER_MODE_H

#include "manager.h"
#include "tools.h"

class ManagerMode
{
public:
	virtual ~ManagerMode(void){}
	virtual void load(vector<Manager>& m) = 0;
	virtual void save(vector<Manager>& m) = 0;
};

#endif//MANAGER_MODE_H
