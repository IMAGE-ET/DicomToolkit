import QtQuick 2.3
import QtQuick.Controls 1.4
//import com.dicomkit.model 1.0 // include this if registering by method 2 in man.cpp file

// main window
Rectangle {
    id: root
    width: 800
    height: 700
    color:"black"

    // display application information in three lines as a column at the center of parent window
    Column {
        Text {
            id: appInfo
            color: "white"
            text: "Application information"
            font.pointSize: 15
        }
        Text {
            id: appName
            color:"white"
            text:"Application name: " + dicomModel.appName // accessing C++ object property
        }

        Text {
            id: appVersion
            color: "white"
            text: "Version: " + dicomModel.appVersion // accessing C++ object property
        }

        // display info in the center of parent window
        anchors.centerIn: parent
    }
}

