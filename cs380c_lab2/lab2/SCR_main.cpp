#include "CFG.h"
#include <iostream>
using namespace std;
int main()
{
	CFG cfg = CFG();
	cfg.initCFG(cin);
	cfg.genSCR(cout);
	return 0;
}