import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    id: root

    Rectangle {
        id: rectangle
        x: 404
        y: 220
        width: 200
        height: 200
        color: "#f4d686"

        Text {
            id: text1
            color: "#df2020"
            text: qsTr("Hello World")
            font.bold: true
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 24
        }
    }

    Rectangle {
        x: 404
        y: 10
        width: 200
        height: 200
        color: "#f4d686"

        Text {
            color: "#df2020"
            text: qsTr("Hello World Qt5.9") + tools.emptyString
            font.bold: true
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 24
        }
    }

    ListView {
        id: listView
        x: 42
        y: 135
        width: 110
        height: 160
        delegate: Item {
            x: 5
            width: 80
            height: 40
            Row {
                id: row1
                Rectangle {
                    width: 40
                    height: 40
                    color: mousearea.pressed ? "yellow" : colorCode
                }

                Text {
                    text: name
                    font.bold: true
                    anchors.verticalCenter: parent.verticalCenter
                }
                spacing: 10
            }

            MouseArea {
                id: mousearea
                anchors.fill: parent
                onClicked: {
                    tools.changlanguage(index)
                }
            }
        }

        model: ListModel {
            ListElement {
                name: "Chinese"
                colorCode: "grey"
            }

            ListElement {
                name: "English"
                colorCode: "red"
            }

            ListElement {
                name: "Germany"
                colorCode: "blue"
            }

            ListElement {
                name: "Korean"
                colorCode: "green"
            }
        }
    }


}
