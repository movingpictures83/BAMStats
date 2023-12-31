#ifndef BAMSTATSPLUGIN_H
#define BAMSTATSPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class BAMStatsPlugin : public Plugin
{
public: 
 std::string toString() {return "BAMStats";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
