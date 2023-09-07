#ifndef MANAGER_MODE_IMPEL_H
#define MANAGER_MODE_IMPEL_H

#include "manager_mode.h"

class ManagerModeImpel:public ManagerMode
{
public:
	void load(vector<Manager>& m);
	void save(vector<Manager>& m);
};

#endif//MANAGER_MODE_IMPEL_H
