import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 1.1

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Main Window")

    Button {
         id: clickMeButton
         x: 20
         y: 20
         width: 200
         height: 200
         text: qsTr("Click me !!!")
         onClicked: MainView.onBtnClickMeClicked()
     }

     Button {
         id: view2Button
         x: 240
         y: 20
         width: 200
         height: 200
         text: "Enter View"
         /* toggle */
         onClicked: {
         }
     }

     Button {
         id: exitButton
         x: 20
         y: 240
         width: 420
         height: 200
         text: "Exit"
         /* toggle */
         onClicked: {
             Qt.quit();
         }
     }
}
