#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BAMStatsPlugin.h"

void BAMStatsPlugin::input(std::string file) {
 inputfile = file;
}

void BAMStatsPlugin::run() {}

void BAMStatsPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand +=  "bamtools stats -in ";
myCommand += inputfile;
std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<BAMStatsPlugin> BAMStatsPluginProxy = PluginProxy<BAMStatsPlugin>("BAMStats", PluginManager::getInstance());

