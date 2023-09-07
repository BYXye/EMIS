#ifndef SERVICE_MODE_IMPL
#define SERVICE_MODE_IMPL

#include "service_mode.h"

class ServiceModeImpl:public ServiceMode
{
	void load(vector<Department>& d);
	void save(vector<Department>& d);
};

#endif//SERVICE_MODE_IMPL
