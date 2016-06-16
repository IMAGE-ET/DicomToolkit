#ifndef DICOMMODEL_H
#define DICOMMODEL_H

#include <QObject>

class DicomModel : public QObject
{
    Q_OBJECT

    // these properties will be accessible via QML
    Q_PROPERTY(QString appName READ GetApplicationName)
    Q_PROPERTY(int appVersion READ GetApplicationVersion)

public:
    DicomModel();

public:
    // declare public properties to be used by Q_PROPERTY
    QString GetApplicationName() const;
    int GetApplicationVersion() const;

private:
    QString _app_name;
    int     _app_version;
};

#endif // DICOMMODEL_H
