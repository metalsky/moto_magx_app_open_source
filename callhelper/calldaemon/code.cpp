/****************************************
callhelper for E8 EM30
calldaemon
Version: 1.1   2010.3.10
Author:  slbear    <25828761@qq.com>
*****************************************/
#include "code.h"
#include <qtextcodec.h>
#include <ZApplication.h>


QString getAppDir()
{
    QString tmp = QString(qApp->argv()[0]);
    int i = tmp.findRev("/");
    tmp.remove(i+1,tmp.length()-1);
    return tmp;
}
