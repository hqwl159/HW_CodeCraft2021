#include "Decision.h"
#include <iterator>
#include <iostream>
using namespace std;

Decision::Decision(map<string,int> dec,Vm v,int day_id)
{
	this->dec = dec;
	this->v = v;
	this->day_id = day_id;
}

Decision::Decision()
{
	
} 

void Decision::toString()
{
	//purchase info
	cout<<"(purchase, "<<this->dec.size()<<")"<<endl;
	for(map<string,int>::iterator it = dec.begin();it!= dec.end();it++)
	{
//		cout<<"here"<<endl;	
		cout<<"("<<it->first<<", "<<it->second<<")"<<endl;
	}
	//migration info
	cout<<"(migration, 0)"<<endl;
	//allocate info
	if(this->v.istwonode)
	{
		if(this->v.node==0)
		{
			if(this->v.server_id!=NULL)
				cout<<"("<<*(this->v.server_id)<<", A)"<<endl;
		}
		else
		{
			if(this->v.server_id!=NULL)
				cout<<"("<<*(this->v.server_id)<<", B)"<<endl;
		}
	}
	else
	{
		if(this->v.server_id!=NULL)
			cout<<"("<<*(this->v.server_id)<<")"<<endl;
	}
}
