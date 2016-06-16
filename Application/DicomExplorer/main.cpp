// Qt includes
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQmlContext>
#include <QtQml>

// module includes
#include "DicomModel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    // initialize the backend c++ class
    DicomModel dicomModel;

    // method 2: register the QML type to C++
    //qmlRegisterType<DicomModel>("com.dicomkit.model",1,0,"DicomModel");

    QQuickView* view = new QQuickView;

    // method 1: register C++ to QML
    // QML will be able to access properties exposed by DicomModel object
    view->rootContext()->setContextProperty("dicomModel",&dicomModel);

    view->setResizeMode(QQuickView::SizeRootObjectToView);
    view->setSource(QUrl("qrc:/DicomExplorer.qml"));
    view->show();

    return app.exec();
}


