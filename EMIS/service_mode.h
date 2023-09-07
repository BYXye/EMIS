#ifndef SERVICE_MODE_H
#define SERVICE_MODE_H

#include "department.h"
#include "tools.h"

class ServiceMode
{
public:
	virtual ~ServiceMode(void){}
	virtual void load(vector<Department>& d) = 0;
	virtual void save(vector<Department>& d) = 0;
};

#endif//SERVICE_MODE_H
