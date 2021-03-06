#ifndef APPCONFIG_H
#define APPCONFIG_H

#include <QString>

class AppConfig
{
    private:
        AppConfig();

    public:
        static AppConfig& getInstance();
        QString getDbDriverName() const;
        QString getDbName() const;
        int getDbServerPort() const;
        QString getDbServerIp() const;
        QString getUserName() const;
        QString getPasswd() const;

    private:
        static AppConfig* instance;
        //数据库相关配置项
        QString       dbDriverName;
        QString       dbName;
        int               dbServerPort;
        QString       dbServerIp;
        QString       userName;
        QString       passwd;
};

#endif // APPCONFIG_H
