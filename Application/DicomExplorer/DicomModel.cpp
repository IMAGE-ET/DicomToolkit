#include "DicomModel.h"
#include <QTimer>
#include <QDebug>

DicomModel::DicomModel(): _app_name("Dicom Explorer"),
                          _app_version(1)
{

}

QString DicomModel::GetApplicationName() const
{
    return _app_name;
}

int DicomModel::GetApplicationVersion() const
{
    return _app_version;
}
