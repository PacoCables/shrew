/********************************************************************************
** Form generated from reading UI file 'root.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOT_H
#define UI_ROOT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ikecRoot
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tabConnect;
    QVBoxLayout *vboxLayout1;
    QTextBrowser *textBrowserStatus;
    QGroupBox *groupBoxCredentials;
    QGridLayout *gridLayout;
    QLabel *textLabelUsername;
    QLineEdit *lineEditUsername;
    QLabel *textLabelPassword;
    QLineEdit *lineEditPassword;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonExit;
    QWidget *tabNetwork;
    QVBoxLayout *vboxLayout2;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QVBoxLayout *vboxLayout3;
    QSpacerItem *spacerItem1;
    QGridLayout *gridLayout1;
    QLabel *textLabelEstablished;
    QLabel *textLabelEstablishedValue;
    QLabel *textLabelExpired;
    QLabel *textLabelExpiredValue;
    QLabel *textLabelFailed;
    QLabel *textLabelFailedValue;
    QSpacerItem *spacerItem2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLabel *textLabelStatus;
    QLabel *textLabelStatusValue;
    QLabel *textLabelRemote;
    QLabel *textLabelRemoteValue;
    QLabel *textLabelTransport;
    QLabel *textLabelTransportValue;
    QLabel *textLabelFrag;
    QLabel *textLabelFragValue;
    QLabel *textLabelDPD;
    QLabel *textLabelDPDValue;

    void setupUi(QMainWindow *ikecRoot)
    {
        if (ikecRoot->objectName().isEmpty())
            ikecRoot->setObjectName(QString::fromUtf8("ikecRoot"));
        ikecRoot->resize(296, 299);
        const QIcon icon = QIcon(QString::fromUtf8(":/png/png/ikec.png"));
        ikecRoot->setWindowIcon(icon);
        centralwidget = new QWidget(ikecRoot);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabConnect = new QWidget();
        tabConnect->setObjectName(QString::fromUtf8("tabConnect"));
        vboxLayout1 = new QVBoxLayout(tabConnect);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        textBrowserStatus = new QTextBrowser(tabConnect);
        textBrowserStatus->setObjectName(QString::fromUtf8("textBrowserStatus"));
        textBrowserStatus->setOpenLinks(false);

        vboxLayout1->addWidget(textBrowserStatus);

        groupBoxCredentials = new QGroupBox(tabConnect);
        groupBoxCredentials->setObjectName(QString::fromUtf8("groupBoxCredentials"));
        gridLayout = new QGridLayout(groupBoxCredentials);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabelUsername = new QLabel(groupBoxCredentials);
        textLabelUsername->setObjectName(QString::fromUtf8("textLabelUsername"));
        textLabelUsername->setWordWrap(false);

        gridLayout->addWidget(textLabelUsername, 0, 0, 1, 1);

        lineEditUsername = new QLineEdit(groupBoxCredentials);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));

        gridLayout->addWidget(lineEditUsername, 0, 1, 1, 1);

        textLabelPassword = new QLabel(groupBoxCredentials);
        textLabelPassword->setObjectName(QString::fromUtf8("textLabelPassword"));
        textLabelPassword->setWordWrap(false);

        gridLayout->addWidget(textLabelPassword, 1, 0, 1, 1);

        lineEditPassword = new QLineEdit(groupBoxCredentials);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPassword, 1, 1, 1, 1);


        vboxLayout1->addWidget(groupBoxCredentials);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(71, 17, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pushButtonConnect = new QPushButton(tabConnect);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        pushButtonConnect->setEnabled(true);
        pushButtonConnect->setAutoDefault(true);

        hboxLayout->addWidget(pushButtonConnect);

        pushButtonExit = new QPushButton(tabConnect);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));

        hboxLayout->addWidget(pushButtonExit);


        vboxLayout1->addLayout(hboxLayout);

        tabWidget->addTab(tabConnect, QString());
        tabNetwork = new QWidget();
        tabNetwork->setObjectName(QString::fromUtf8("tabNetwork"));
        vboxLayout2 = new QVBoxLayout(tabNetwork);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        groupBox = new QGroupBox(tabNetwork);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout1 = new QHBoxLayout(groupBox);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/png/png/ikec.png")));
        label->setAlignment(Qt::AlignCenter);

        hboxLayout1->addWidget(label);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem1);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabelEstablished = new QLabel(groupBox);
        textLabelEstablished->setObjectName(QString::fromUtf8("textLabelEstablished"));
        textLabelEstablished->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabelEstablished->setWordWrap(false);

        gridLayout1->addWidget(textLabelEstablished, 0, 0, 1, 1);

        textLabelEstablishedValue = new QLabel(groupBox);
        textLabelEstablishedValue->setObjectName(QString::fromUtf8("textLabelEstablishedValue"));
        textLabelEstablishedValue->setWordWrap(false);

        gridLayout1->addWidget(textLabelEstablishedValue, 0, 1, 1, 1);

        textLabelExpired = new QLabel(groupBox);
        textLabelExpired->setObjectName(QString::fromUtf8("textLabelExpired"));
        textLabelExpired->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabelExpired->setWordWrap(false);

        gridLayout1->addWidget(textLabelExpired, 1, 0, 1, 1);

        textLabelExpiredValue = new QLabel(groupBox);
        textLabelExpiredValue->setObjectName(QString::fromUtf8("textLabelExpiredValue"));
        textLabelExpiredValue->setWordWrap(false);

        gridLayout1->addWidget(textLabelExpiredValue, 1, 1, 1, 1);

        textLabelFailed = new QLabel(groupBox);
        textLabelFailed->setObjectName(QString::fromUtf8("textLabelFailed"));
        textLabelFailed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabelFailed->setWordWrap(false);

        gridLayout1->addWidget(textLabelFailed, 2, 0, 1, 1);

        textLabelFailedValue = new QLabel(groupBox);
        textLabelFailedValue->setObjectName(QString::fromUtf8("textLabelFailedValue"));
        textLabelFailedValue->setWordWrap(false);

        gridLayout1->addWidget(textLabelFailedValue, 2, 1, 1, 1);


        vboxLayout3->addLayout(gridLayout1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem2);


        hboxLayout1->addLayout(vboxLayout3);


        vboxLayout2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tabNetwork);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        textLabelStatus = new QLabel(groupBox_2);
        textLabelStatus->setObjectName(QString::fromUtf8("textLabelStatus"));
        textLabelStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabelStatus->setWordWrap(false);

        gridLayout2->addWidget(textLabelStatus, 0, 0, 1, 1);

        textLabelStatusValue = new QLabel(groupBox_2);
        textLabelStatusValue->setObjectName(QString::fromUtf8("textLabelStatusValue"));
        textLabelStatusValue->setWordWrap(false);

        gridLayout2->addWidget(textLabelStatusValue, 0, 1, 1, 1);

        textLabelRemote = new QLabel(groupBox_2);
        textLabelRemote->setObjectName(QString::fromUtf8("textLabelRemote"));
        textLabelRemote->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabelRemote->setWordWrap(false);

        gridLayout2->addWidget(textLabelRemote, 1, 0, 1, 1);

        textLabelRemoteValue = new QLabel(groupBox_2);
        textLabelRemoteValue->setObjectName(QString::fromUtf8("textLabelRemoteValue"));
        textLabelRemoteValue->setWordWrap(false);

        gridLayout2->addWidget(textLabelRemoteValue, 1, 1, 1, 1);

        textLabelTransport = new QLabel(groupBox_2);
        textLabelTransport->setObjectName(QString::fromUtf8("textLabelTransport"));
        textLabelTransport->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabelTransport->setWordWrap(false);

        gridLayout2->addWidget(textLabelTransport, 2, 0, 1, 1);

        textLabelTransportValue = new QLabel(groupBox_2);
        textLabelTransportValue->setObjectName(QString::fromUtf8("textLabelTransportValue"));
        textLabelTransportValue->setWordWrap(false);

        gridLayout2->addWidget(textLabelTransportValue, 2, 1, 1, 1);

        textLabelFrag = new QLabel(groupBox_2);
        textLabelFrag->setObjectName(QString::fromUtf8("textLabelFrag"));
        textLabelFrag->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabelFrag->setWordWrap(false);

        gridLayout2->addWidget(textLabelFrag, 3, 0, 1, 1);

        textLabelFragValue = new QLabel(groupBox_2);
        textLabelFragValue->setObjectName(QString::fromUtf8("textLabelFragValue"));
        textLabelFragValue->setWordWrap(false);

        gridLayout2->addWidget(textLabelFragValue, 3, 1, 1, 1);

        textLabelDPD = new QLabel(groupBox_2);
        textLabelDPD->setObjectName(QString::fromUtf8("textLabelDPD"));
        textLabelDPD->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabelDPD->setWordWrap(false);

        gridLayout2->addWidget(textLabelDPD, 4, 0, 1, 1);

        textLabelDPDValue = new QLabel(groupBox_2);
        textLabelDPDValue->setObjectName(QString::fromUtf8("textLabelDPDValue"));
        textLabelDPDValue->setWordWrap(false);

        gridLayout2->addWidget(textLabelDPDValue, 4, 1, 1, 1);


        vboxLayout2->addWidget(groupBox_2);

        tabWidget->addTab(tabNetwork, QString());

        vboxLayout->addWidget(tabWidget);

        ikecRoot->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lineEditUsername, lineEditPassword);
        QWidget::setTabOrder(lineEditPassword, pushButtonConnect);
        QWidget::setTabOrder(pushButtonConnect, pushButtonExit);
        QWidget::setTabOrder(pushButtonExit, tabWidget);
        QWidget::setTabOrder(tabWidget, textBrowserStatus);

        retranslateUi(ikecRoot);

        tabWidget->setCurrentIndex(0);
        pushButtonConnect->setDefault(true);


        QMetaObject::connectSlotsByName(ikecRoot);
    } // setupUi

    void retranslateUi(QMainWindow *ikecRoot)
    {
        ikecRoot->setWindowTitle(QApplication::translate("ikecRoot", "Shrew Soft VPN Connect", nullptr));
        groupBoxCredentials->setTitle(QApplication::translate("ikecRoot", "Credentials", nullptr));
        textLabelUsername->setText(QApplication::translate("ikecRoot", "Username", nullptr));
        textLabelPassword->setText(QApplication::translate("ikecRoot", "Password", nullptr));
        pushButtonConnect->setText(QApplication::translate("ikecRoot", "Connect", nullptr));
        pushButtonExit->setText(QApplication::translate("ikecRoot", "Exit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabConnect), QApplication::translate("ikecRoot", "Connect", nullptr));
        groupBox->setTitle(QApplication::translate("ikecRoot", "GroupBox", nullptr));
        label->setText(QString());
        textLabelEstablished->setText(QApplication::translate("ikecRoot", "Established  -", nullptr));
        textLabelEstablishedValue->setText(QApplication::translate("ikecRoot", "0", nullptr));
        textLabelExpired->setText(QApplication::translate("ikecRoot", "Expired  -", nullptr));
        textLabelExpiredValue->setText(QApplication::translate("ikecRoot", "0", nullptr));
        textLabelFailed->setText(QApplication::translate("ikecRoot", "Failed  -", nullptr));
        textLabelFailedValue->setText(QApplication::translate("ikecRoot", "0", nullptr));
        groupBox_2->setTitle(QApplication::translate("ikecRoot", "GroupBox", nullptr));
        textLabelStatus->setText(QApplication::translate("ikecRoot", "Status  -", nullptr));
        textLabelStatusValue->setText(QApplication::translate("ikecRoot", "Disconnected", nullptr));
        textLabelRemote->setText(QApplication::translate("ikecRoot", "Remote Host  -", nullptr));
        textLabelRemoteValue->setText(QString());
        textLabelTransport->setText(QApplication::translate("ikecRoot", "Transport Used  -", nullptr));
        textLabelTransportValue->setText(QString());
        textLabelFrag->setText(QApplication::translate("ikecRoot", "IKE Fragmentation  -", nullptr));
        textLabelFragValue->setText(QString());
        textLabelDPD->setText(QApplication::translate("ikecRoot", "Dead Peer Detection  -", nullptr));
        textLabelDPDValue->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabNetwork), QApplication::translate("ikecRoot", "Network", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ikecRoot: public Ui_ikecRoot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOT_H
