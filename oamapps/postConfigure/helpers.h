/* Copyright (C) 2014 InfiniDB, Inc.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; version 2 of
   the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02110-1301, USA. */

#ifndef HELPERS_H__
#define HELPERS_H__

#include "liboamcpp.h"

using namespace messageqcpp;
namespace installer
{
extern bool waitForActive();
extern void dbrmDirCheck();
extern void mysqlSetup();
extern int sendMsgProcMon( std::string module, ByteStream msg, int requestID, int timeout );
extern int sendUpgradeRequest(int IserverTypeInstall, bool pmwithum);
extern int sendReplicationRequest(int IserverTypeInstall, std::string password);
extern void checkFilesPerPartion(int DBRootCount, Config* sysConfig);
extern void checkMysqlPort( string& mysqlPort, Config* sysConfig );
extern void checkRemoteMysqlPort(std::string remoteModuleIP, std::string remoteModuleName, std::string USER, std::string password, std::string& mysqlPort, Config* sysConfig);
extern bool writeConfig(Config* sysConfig);

}

#endif

