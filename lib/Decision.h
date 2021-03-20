#ifndef __DECISION_H
#define __DECISION_H
#include <vector>
#include <string>
#include "Vm.h"
#include <map>
class Decision
{
	public:
		Decision(std::map<std::string ,int> dec,Vm v,int day_id);
		Decision();
		std::map<std::string ,int> dec;
		Vm v;
		int day_id;
		
		void toString();
};
#endif
