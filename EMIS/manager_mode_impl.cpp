#include "manager_mode_impl.h"

void ManagerModeImpel::load(vector<Manager>& m)
{
	ifstream ifs(MANAGER_PATH, ios::binary|ios::in);
	if(!(ifs))
	{
		cout << "文件打开失败" << endl;
	}
	else
	{	
		Manager manager;
		for(;;)
		{
			ifs.read((char*)&manager, sizeof(manager));
			if(!ifs.good()) break;
			m.push_back(manager);
		}
		cout << "文件读取成功" << endl; 
		ifs.close();
	}	
}
void ManagerModeImpel::save(vector<Manager>& m)
{
	ofstream ofs(MANAGER_PATH, ios::binary|ios::out);
	if(!(ofs))
	{
		cout << "文件打开失败" << endl;
	}
	else
	{		
		vector<Manager>::iterator it;
		for(it = m.begin(); it!=m.end(); it++)
		{
			/*Manager manager(*it);
			ofs.write((const char*)(Manager*)&manager,sizeof(Manager));*/
			ofs.write((const char*)&(*it),sizeof(Manager));
		}
	}
	ofs.close();
}

