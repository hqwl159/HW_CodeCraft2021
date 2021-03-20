#include "Vm.h"
#include <iostream>
using namespace std;
Vm::Vm(string mode,int core,int memsize,int istwonode)
{
	this->mode = mode;
	this->core = core;
	this->memsize = memsize;
	this->istwonode = istwonode;
	
	//used for purchased_vms
	this->id = 0;
	this->server_id = NULL; 
	if(istwonode)
	{
		this->node = 2;
	}
	this->day_id = 0xfffff;

}

Vm::Vm(std::string mode,int id)
{
	this->mode = mode;
	this->id = id;	
} 

Vm::Vm()
{
	
}

void Vm::toString()
{
	if(server_id!=NULL)
		cout<<mode<<" "<<core<<" "<<memsize<<" "<<istwonode<<" "<<id<<" "<<*server_id<<endl;
}


