#include "CFG.h"
#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char **argv)
{
	CFG cfg = CFG();
	cfg.initCFG(cin);
	cfg.runSCP();
	if (strcmp(argv[1], "rep")==0) cfg.reportSCP();
	if (strcmp(argv[1], "3addr")==0) cfg.printCode3Addr();
	if (strcmp(argv[1], "cfg") == 0) cfg.printCFG();
	return 0;
}