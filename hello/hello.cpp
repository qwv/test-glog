/*
 * hello.cpp
 * 
 * Copyright (C) 2017-2031  YuHuan Chow <chowyuhuan@gmail.com>
 */

#include "glog/logging.h"

using namespace std;

int main()
{
    LOG(INFO) << "log info!" << endl;
    DLOG(INFO) << "dlog info!" << endl;
    VLOG(3) << "vlog 3!" << endl;
    DVLOG(3) << "dvlog 3!" << endl;
    PLOG(INFO) << "plog info!" << endl;
    SYSLOG(INFO) << "sys log info!" << endl;
    SYSLOG(WARNING) << "sys log warning!" << endl;
    SYSLOG(ERROR) << "sys log error!" << endl;
    SYSLOG(FATAL) << "sys log fatal!" << endl;
    return 0;
}
