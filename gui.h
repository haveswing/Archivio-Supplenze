#ifndef UNTITLEDDT5188_H
#define UNTITLEDDT5188_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "kdatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAiuto;
    QAction *actionInfo;
    QAction *actionVersione_1_0;
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    KDateWidget *kdatewidget;
    KDateWidget *kdatewidget_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QScrollBar *verticalScrollBar;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QMenu *menuArchivio_Supplenze;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionAiuto = new QAction(MainWindow);
        actionAiuto->setObjectName(QString::fromUtf8("actionAiuto"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionVersione_1_0 = new QAction(MainWindow);
        actionVersione_1_0->setObjectName(QString::fromUtf8("actionVersione_1_0"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 151, 17));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 40, 271, 27));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(550, 20, 131, 17));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(550, 40, 241, 27));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 20, 161, 17));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(290, 40, 241, 27));
        kdatewidget = new KDateWidget(centralwidget);
        kdatewidget->setObjectName(QString::fromUtf8("kdatewidget"));
        kdatewidget->setGeometry(QRect(40, 90, 248, 27));
        kdatewidget_2 = new KDateWidget(centralwidget);
        kdatewidget_2->setObjectName(QString::fromUtf8("kdatewidget_2"));
        kdatewidget_2->setGeometry(QRect(330, 90, 248, 27));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 68, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 100, 68, 17));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 90, 201, 27));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 140, 771, 361));
        verticalScrollBar = new QScrollBar(centralwidget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(770, 140, 16, 361));
        verticalScrollBar->setOrientation(Qt::Vertical);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 520, 99, 27));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 520, 99, 27));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(680, 520, 99, 27));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuArchivio_Supplenze = new QMenu(menubar);
        menuArchivio_Supplenze->setObjectName(QString::fromUtf8("menuArchivio_Supplenze"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArchivio_Supplenze->menuAction());
        menuArchivio_Supplenze->addAction(actionAiuto);
        menuArchivio_Supplenze->addAction(actionInfo);
        menuArchivio_Supplenze->addSeparator();
        menuArchivio_Supplenze->addAction(actionVersione_1_0);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Archivio Supplenze", 0, QApplication::UnicodeUTF8));
        actionAiuto->setText(QApplication::translate("MainWindow", "Aiuto", 0, QApplication::UnicodeUTF8));
        actionInfo->setText(QApplication::translate("MainWindow", "Info", 0, QApplication::UnicodeUTF8));
        actionVersione_1_0->setText(QApplication::translate("MainWindow", "Versione 1.0", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Istituto comprensivo:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Classe di concorso:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Infanzia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Primaria", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Secondaria 1\302\260 grado", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Secondaria 2\302\260 grado", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("MainWindow", "Tipologia di impiego:", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Docente comune", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Docente di sostegno", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Educatore", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ATA", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("MainWindow", "Dal:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Al:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Aggiungi supplenza", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Backup", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Modifica", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "Chiudi", 0, QApplication::UnicodeUTF8));
        menuArchivio_Supplenze->setTitle(QApplication::translate("MainWindow", "Archivio Supplenze", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UNTITLEDDT5188_H
