#include "service_mode_impl.h"

void ServiceModeImpl::load(vector<Department>& d)
{
	ifstream ifs(DEPARTMENT_PATH);
	if(!(ifs))
	{
		cout << "文件打开失败" << endl;
	}
	else
	{	
		Department department;
		for(;;)
		{
			ifs >> department;
			int num = 0;
			ifs >> num;
			if(!ifs.good()) break;
			d.push_back(department);
			int index = d.size();
			while(num--)
			{
				Employee employee;
				ifs >> employee;
				(d[index-1].empArr).push_back(employee);
			}
		}
		cout << "文件读取成功" << endl; 
		ifs.close();
	}	
}

void ServiceModeImpl::save(vector<Department>& d)
{
	ofstream ofs(DEPARTMENT_PATH);
	if(!(ofs))
	{
		cout << "文件打开失败" << endl;
	}
	else
	{		
		Department department;		
		vector<Department>::iterator it;
		for(it = d.begin(); it!=d.end(); it++)
		{
			//int num = (it->empArr).size();
			ofs << *it << " " << endl;
			vector<Employee>::iterator it1;
			for(it1 = (it->empArr).begin(); it1!=(it->empArr).end(); it1++)
			{
				ofs << *it1 << endl;
			}	
		}
		ofs.close();
	}
}

