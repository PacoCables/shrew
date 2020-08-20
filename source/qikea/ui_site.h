/********************************************************************************
** Form generated from reading UI file 'site.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SITE_H
#define UI_SITE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qikeaSite
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBoxRemoteHost;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout3;
    QLabel *textLabelHost;
    QLineEdit *lineEditHost;
    QVBoxLayout *vboxLayout4;
    QLabel *textLabelPort;
    QLineEdit *lineEditPort;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabelConfigMethod;
    QComboBox *comboBoxConfigMethod;
    QGroupBox *groupBoxLocalHost;
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout5;
    QLabel *textLabelAddressMethod;
    QComboBox *comboBoxAddressMethod;
    QVBoxLayout *vboxLayout6;
    QSpacerItem *spacerItem;
    QLabel *textLabelMTU;
    QLineEdit *lineEditMTU;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout7;
    QCheckBox *checkBoxAddressAuto;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabelAddress;
    QLineEdit *lineEditAddress;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabelNetmask;
    QLineEdit *lineEditNetmask;
    QSpacerItem *spacerItem2;
    QWidget *tabClient;
    QVBoxLayout *vboxLayout8;
    QGroupBox *groupBoxFirewall;
    QVBoxLayout *vboxLayout9;
    QHBoxLayout *hboxLayout5;
    QLabel *textLabelNATTMode;
    QComboBox *comboBoxNATTMode;
    QHBoxLayout *hboxLayout6;
    QLabel *textLabelNATTPort;
    QHBoxLayout *hboxLayout7;
    QLineEdit *lineEditNATTPort;
    QLabel *label;
    QHBoxLayout *hboxLayout8;
    QLabel *textLabelNATTRate;
    QHBoxLayout *hboxLayout9;
    QLineEdit *lineEditNATTRate;
    QLabel *textLabelNATTSecs;
    QHBoxLayout *hboxLayout10;
    QLabel *textLabelFragMode;
    QComboBox *comboBoxFragMode;
    QHBoxLayout *hboxLayout11;
    QLabel *textLabelFragSize;
    QHBoxLayout *hboxLayout12;
    QLineEdit *lineEditFragSize;
    QLabel *textLabelFragBytes;
    QGroupBox *groupBoxOther;
    QVBoxLayout *vboxLayout10;
    QCheckBox *checkBoxDPD;
    QCheckBox *checkBoxNotify;
    QCheckBox *checkBoxBanner;
    QSpacerItem *spacerItem3;
    QWidget *tabNameResolution;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout13;
    QCheckBox *checkBoxDNSEnable;
    QCheckBox *checkBoxDNSAuto;
    QHBoxLayout *hboxLayout14;
    QLabel *textLabelDNSServer1;
    QLineEdit *lineEditDNSServer1;
    QHBoxLayout *hboxLayout15;
    QLabel *textLabelDNSServer2;
    QLineEdit *lineEditDNSServer2;
    QHBoxLayout *hboxLayout16;
    QLabel *textLabelDNSServer3;
    QLineEdit *lineEditDNSServer3;
    QHBoxLayout *hboxLayout17;
    QLabel *textLabelDNSServer4;
    QLineEdit *lineEditDNSServer4;
    QCheckBox *checkBoxSuffixAuto;
    QHBoxLayout *hboxLayout18;
    QLabel *textLabelDNSSuffix;
    QLineEdit *lineEditDNSSuffix;
    QSpacerItem *spacerItem4;
    QWidget *tabAuthentication;
    QVBoxLayout *vboxLayout11;
    QHBoxLayout *hboxLayout19;
    QLabel *textLabelAuthMethod;
    QComboBox *comboBoxAuthMethod;
    QTabWidget *tabWidgetAuthInfo;
    QWidget *tab;
    QVBoxLayout *vboxLayout12;
    QLabel *textLabelLocalIDType;
    QComboBox *comboBoxLocalIDType;
    QLabel *textLabelLocalIDData;
    QLineEdit *lineEditLocalIDData;
    QCheckBox *checkBoxLocalIDOption;
    QSpacerItem *spacerItem5;
    QWidget *tab_2;
    QVBoxLayout *vboxLayout13;
    QLabel *textLabelRemoteIDType;
    QComboBox *comboBoxRemoteIDType;
    QLabel *textLabelRemoteIDData;
    QLineEdit *lineEditRemoteIDData;
    QCheckBox *checkBoxRemoteIDOption;
    QSpacerItem *spacerItem6;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout14;
    QLabel *textLabelCAFile;
    QHBoxLayout *hboxLayout20;
    QLineEdit *lineEditCAName;
    QToolButton *toolButtonCAFile;
    QLabel *textLabelCertFile;
    QHBoxLayout *hboxLayout21;
    QLineEdit *lineEditCertName;
    QToolButton *toolButtonCertFile;
    QLabel *textLabelPKeyFile;
    QHBoxLayout *hboxLayout22;
    QLineEdit *lineEditPKeyName;
    QToolButton *toolButtonPKeyFile;
    QLabel *textLabelPSK;
    QLineEdit *lineEditPSK;
    QSpacerItem *spacerItem7;
    QSpacerItem *spacerItem8;
    QWidget *tabPhase1;
    QVBoxLayout *vboxLayout15;
    QGroupBox *groupBoxP1Proposal;
    QVBoxLayout *vboxLayout16;
    QHBoxLayout *hboxLayout23;
    QLabel *textLabelP1Exchange;
    QComboBox *comboBoxP1Exchange;
    QHBoxLayout *hboxLayout24;
    QLabel *textLabelP1DHGroup;
    QComboBox *comboBoxP1DHGroup;
    QHBoxLayout *hboxLayout25;
    QLabel *textLabelP1Cipher;
    QComboBox *comboBoxP1Cipher;
    QHBoxLayout *hboxLayout26;
    QLabel *textLabelP1Keylen;
    QHBoxLayout *hboxLayout27;
    QComboBox *comboBoxP1Keylen;
    QLabel *textLabelP1KeyBits;
    QHBoxLayout *hboxLayout28;
    QLabel *textLabelP1Hash;
    QComboBox *comboBoxP1Hash;
    QHBoxLayout *hboxLayout29;
    QLabel *textLabelP1LifeTime;
    QHBoxLayout *hboxLayout30;
    QLineEdit *lineEditP1LifeTime;
    QLabel *textLabelLifeSecs;
    QHBoxLayout *hboxLayout31;
    QLabel *textLabelLifeData;
    QHBoxLayout *hboxLayout32;
    QLineEdit *lineEditP1LifeData;
    QLabel *textLabelLifeKBs;
    QCheckBox *checkBoxCheckpointID;
    QSpacerItem *spacerItem9;
    QWidget *tabPhase2;
    QVBoxLayout *vboxLayout17;
    QGroupBox *groupBoxP2Proposal;
    QVBoxLayout *vboxLayout18;
    QHBoxLayout *hboxLayout33;
    QLabel *textLabelP2Transform;
    QComboBox *comboBoxP2Transform;
    QHBoxLayout *hboxLayout34;
    QLabel *textLabelP2Keylen;
    QHBoxLayout *hboxLayout35;
    QComboBox *comboBoxP2Keylen;
    QLabel *textLabelP2KeyBits;
    QHBoxLayout *hboxLayout36;
    QLabel *textLabelP2HMAC;
    QComboBox *comboBoxP2HMAC;
    QHBoxLayout *hboxLayout37;
    QLabel *textLabelP2PFSGroup;
    QComboBox *comboBoxP2PFSGroup;
    QHBoxLayout *hboxLayout38;
    QLabel *textLabelP2Compress;
    QComboBox *comboBoxP2Compress;
    QHBoxLayout *hboxLayout39;
    QLabel *textLabelP2LifeTime;
    QHBoxLayout *hboxLayout40;
    QLineEdit *lineEditP2LifeTime;
    QLabel *textLabelP2LifeSecs;
    QHBoxLayout *hboxLayout41;
    QLabel *textLabelP2LifeData;
    QHBoxLayout *hboxLayout42;
    QLineEdit *lineEditP2LifeData;
    QLabel *textLabelP2LifeKBs;
    QSpacerItem *spacerItem10;
    QWidget *tabPolicy;
    QVBoxLayout *vboxLayout19;
    QGroupBox *groupBoxPolicy;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabelPolicyLevel;
    QComboBox *comboBoxPolicyLevel;
    QCheckBox *checkBoxPolicyNailed;
    QCheckBox *checkBoxPolicyAuto;
    QTreeWidget *treeWidgetPolicies;
    QHBoxLayout *hboxLayout43;
    QPushButton *pushButtonPolicyAdd;
    QPushButton *pushButtonPolicyMod;
    QPushButton *pushButtonPolicyDel;
    QHBoxLayout *hboxLayout44;
    QSpacerItem *spacerItem11;
    QPushButton *buttonSave;
    QPushButton *buttonCancel;

    void setupUi(QDialog *qikeaSite)
    {
        if (qikeaSite->objectName().isEmpty())
            qikeaSite->setObjectName(QString::fromUtf8("qikeaSite"));
        qikeaSite->setWindowModality(Qt::ApplicationModal);
        qikeaSite->resize(318, 376);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qikeaSite->sizePolicy().hasHeightForWidth());
        qikeaSite->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/site_mod.png"), QSize(), QIcon::Normal, QIcon::Off);
        qikeaSite->setWindowIcon(icon);
        qikeaSite->setAutoFillBackground(true);
        qikeaSite->setSizeGripEnabled(false);
        qikeaSite->setModal(true);
        vboxLayout = new QVBoxLayout(qikeaSite);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(qikeaSite);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        vboxLayout1 = new QVBoxLayout(tabGeneral);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        groupBoxRemoteHost = new QGroupBox(tabGeneral);
        groupBoxRemoteHost->setObjectName(QString::fromUtf8("groupBoxRemoteHost"));
        vboxLayout2 = new QVBoxLayout(groupBoxRemoteHost);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        textLabelHost = new QLabel(groupBoxRemoteHost);
        textLabelHost->setObjectName(QString::fromUtf8("textLabelHost"));
        textLabelHost->setWordWrap(false);

        vboxLayout3->addWidget(textLabelHost);

        lineEditHost = new QLineEdit(groupBoxRemoteHost);
        lineEditHost->setObjectName(QString::fromUtf8("lineEditHost"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditHost->sizePolicy().hasHeightForWidth());
        lineEditHost->setSizePolicy(sizePolicy2);

        vboxLayout3->addWidget(lineEditHost);


        hboxLayout->addLayout(vboxLayout3);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        textLabelPort = new QLabel(groupBoxRemoteHost);
        textLabelPort->setObjectName(QString::fromUtf8("textLabelPort"));
        textLabelPort->setWordWrap(false);

        vboxLayout4->addWidget(textLabelPort);

        lineEditPort = new QLineEdit(groupBoxRemoteHost);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditPort->sizePolicy().hasHeightForWidth());
        lineEditPort->setSizePolicy(sizePolicy3);
        lineEditPort->setMaximumSize(QSize(50, 16777215));
        lineEditPort->setAlignment(Qt::AlignRight);

        vboxLayout4->addWidget(lineEditPort);


        hboxLayout->addLayout(vboxLayout4);


        vboxLayout2->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabelConfigMethod = new QLabel(groupBoxRemoteHost);
        textLabelConfigMethod->setObjectName(QString::fromUtf8("textLabelConfigMethod"));
        textLabelConfigMethod->setWordWrap(false);

        hboxLayout1->addWidget(textLabelConfigMethod);

        comboBoxConfigMethod = new QComboBox(groupBoxRemoteHost);
        comboBoxConfigMethod->addItem(QString());
        comboBoxConfigMethod->addItem(QString());
        comboBoxConfigMethod->addItem(QString());
        comboBoxConfigMethod->addItem(QString());
        comboBoxConfigMethod->setObjectName(QString::fromUtf8("comboBoxConfigMethod"));

        hboxLayout1->addWidget(comboBoxConfigMethod);


        vboxLayout2->addLayout(hboxLayout1);


        vboxLayout1->addWidget(groupBoxRemoteHost);

        groupBoxLocalHost = new QGroupBox(tabGeneral);
        groupBoxLocalHost->setObjectName(QString::fromUtf8("groupBoxLocalHost"));
        gridLayout = new QGridLayout(groupBoxLocalHost);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        textLabelAddressMethod = new QLabel(groupBoxLocalHost);
        textLabelAddressMethod->setObjectName(QString::fromUtf8("textLabelAddressMethod"));
        textLabelAddressMethod->setWordWrap(false);

        vboxLayout5->addWidget(textLabelAddressMethod);

        comboBoxAddressMethod = new QComboBox(groupBoxLocalHost);
        comboBoxAddressMethod->addItem(QString());
        comboBoxAddressMethod->addItem(QString());
        comboBoxAddressMethod->addItem(QString());
        comboBoxAddressMethod->setObjectName(QString::fromUtf8("comboBoxAddressMethod"));

        vboxLayout5->addWidget(comboBoxAddressMethod);


        gridLayout->addLayout(vboxLayout5, 0, 0, 1, 2);

        vboxLayout6 = new QVBoxLayout();
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout6->addItem(spacerItem);

        textLabelMTU = new QLabel(groupBoxLocalHost);
        textLabelMTU->setObjectName(QString::fromUtf8("textLabelMTU"));
        textLabelMTU->setWordWrap(false);

        vboxLayout6->addWidget(textLabelMTU);

        lineEditMTU = new QLineEdit(groupBoxLocalHost);
        lineEditMTU->setObjectName(QString::fromUtf8("lineEditMTU"));
        lineEditMTU->setMaximumSize(QSize(50, 16777215));
        lineEditMTU->setAlignment(Qt::AlignRight);

        vboxLayout6->addWidget(lineEditMTU);


        gridLayout->addLayout(vboxLayout6, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        vboxLayout7 = new QVBoxLayout();
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        checkBoxAddressAuto = new QCheckBox(groupBoxLocalHost);
        checkBoxAddressAuto->setObjectName(QString::fromUtf8("checkBoxAddressAuto"));
        checkBoxAddressAuto->setChecked(true);

        vboxLayout7->addWidget(checkBoxAddressAuto);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        textLabelAddress = new QLabel(groupBoxLocalHost);
        textLabelAddress->setObjectName(QString::fromUtf8("textLabelAddress"));
        sizePolicy.setHeightForWidth(textLabelAddress->sizePolicy().hasHeightForWidth());
        textLabelAddress->setSizePolicy(sizePolicy);
        textLabelAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabelAddress->setWordWrap(false);

        hboxLayout3->addWidget(textLabelAddress);

        lineEditAddress = new QLineEdit(groupBoxLocalHost);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));
        lineEditAddress->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEditAddress->sizePolicy().hasHeightForWidth());
        lineEditAddress->setSizePolicy(sizePolicy4);
        lineEditAddress->setAlignment(Qt::AlignHCenter);

        hboxLayout3->addWidget(lineEditAddress);


        vboxLayout7->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        textLabelNetmask = new QLabel(groupBoxLocalHost);
        textLabelNetmask->setObjectName(QString::fromUtf8("textLabelNetmask"));
        sizePolicy.setHeightForWidth(textLabelNetmask->sizePolicy().hasHeightForWidth());
        textLabelNetmask->setSizePolicy(sizePolicy);
        textLabelNetmask->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabelNetmask->setWordWrap(false);

        hboxLayout4->addWidget(textLabelNetmask);

        lineEditNetmask = new QLineEdit(groupBoxLocalHost);
        lineEditNetmask->setObjectName(QString::fromUtf8("lineEditNetmask"));
        lineEditNetmask->setEnabled(false);
        sizePolicy4.setHeightForWidth(lineEditNetmask->sizePolicy().hasHeightForWidth());
        lineEditNetmask->setSizePolicy(sizePolicy4);
        lineEditNetmask->setAlignment(Qt::AlignHCenter);

        hboxLayout4->addWidget(lineEditNetmask);


        vboxLayout7->addLayout(hboxLayout4);


        hboxLayout2->addLayout(vboxLayout7);


        gridLayout->addLayout(hboxLayout2, 1, 1, 1, 1);


        vboxLayout1->addWidget(groupBoxLocalHost);

        spacerItem2 = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem2);

        tabWidget->addTab(tabGeneral, QString());
        tabClient = new QWidget();
        tabClient->setObjectName(QString::fromUtf8("tabClient"));
        vboxLayout8 = new QVBoxLayout(tabClient);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        groupBoxFirewall = new QGroupBox(tabClient);
        groupBoxFirewall->setObjectName(QString::fromUtf8("groupBoxFirewall"));
        vboxLayout9 = new QVBoxLayout(groupBoxFirewall);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        textLabelNATTMode = new QLabel(groupBoxFirewall);
        textLabelNATTMode->setObjectName(QString::fromUtf8("textLabelNATTMode"));
        textLabelNATTMode->setEnabled(false);
        textLabelNATTMode->setWordWrap(false);

        hboxLayout5->addWidget(textLabelNATTMode);

        comboBoxNATTMode = new QComboBox(groupBoxFirewall);
        comboBoxNATTMode->addItem(QString());
        comboBoxNATTMode->addItem(QString());
        comboBoxNATTMode->addItem(QString());
        comboBoxNATTMode->addItem(QString());
        comboBoxNATTMode->addItem(QString());
        comboBoxNATTMode->setObjectName(QString::fromUtf8("comboBoxNATTMode"));
        comboBoxNATTMode->setEnabled(false);

        hboxLayout5->addWidget(comboBoxNATTMode);


        vboxLayout9->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        textLabelNATTPort = new QLabel(groupBoxFirewall);
        textLabelNATTPort->setObjectName(QString::fromUtf8("textLabelNATTPort"));
        textLabelNATTPort->setEnabled(false);
        textLabelNATTPort->setWordWrap(false);

        hboxLayout6->addWidget(textLabelNATTPort);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        lineEditNATTPort = new QLineEdit(groupBoxFirewall);
        lineEditNATTPort->setObjectName(QString::fromUtf8("lineEditNATTPort"));
        lineEditNATTPort->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineEditNATTPort->sizePolicy().hasHeightForWidth());
        lineEditNATTPort->setSizePolicy(sizePolicy5);
        lineEditNATTPort->setMaximumSize(QSize(50, 16777215));
        lineEditNATTPort->setAlignment(Qt::AlignRight);

        hboxLayout7->addWidget(lineEditNATTPort);

        label = new QLabel(groupBoxFirewall);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout7->addWidget(label);


        hboxLayout6->addLayout(hboxLayout7);


        vboxLayout9->addLayout(hboxLayout6);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        textLabelNATTRate = new QLabel(groupBoxFirewall);
        textLabelNATTRate->setObjectName(QString::fromUtf8("textLabelNATTRate"));
        textLabelNATTRate->setEnabled(false);
        textLabelNATTRate->setWordWrap(false);

        hboxLayout8->addWidget(textLabelNATTRate);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        lineEditNATTRate = new QLineEdit(groupBoxFirewall);
        lineEditNATTRate->setObjectName(QString::fromUtf8("lineEditNATTRate"));
        lineEditNATTRate->setEnabled(false);
        sizePolicy5.setHeightForWidth(lineEditNATTRate->sizePolicy().hasHeightForWidth());
        lineEditNATTRate->setSizePolicy(sizePolicy5);
        lineEditNATTRate->setMaximumSize(QSize(50, 16777215));
        lineEditNATTRate->setAlignment(Qt::AlignRight);

        hboxLayout9->addWidget(lineEditNATTRate);

        textLabelNATTSecs = new QLabel(groupBoxFirewall);
        textLabelNATTSecs->setObjectName(QString::fromUtf8("textLabelNATTSecs"));
        textLabelNATTSecs->setEnabled(false);
        sizePolicy.setHeightForWidth(textLabelNATTSecs->sizePolicy().hasHeightForWidth());
        textLabelNATTSecs->setSizePolicy(sizePolicy);
        textLabelNATTSecs->setWordWrap(false);

        hboxLayout9->addWidget(textLabelNATTSecs);


        hboxLayout8->addLayout(hboxLayout9);


        vboxLayout9->addLayout(hboxLayout8);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        textLabelFragMode = new QLabel(groupBoxFirewall);
        textLabelFragMode->setObjectName(QString::fromUtf8("textLabelFragMode"));
        textLabelFragMode->setWordWrap(false);

        hboxLayout10->addWidget(textLabelFragMode);

        comboBoxFragMode = new QComboBox(groupBoxFirewall);
        comboBoxFragMode->addItem(QString());
        comboBoxFragMode->addItem(QString());
        comboBoxFragMode->addItem(QString());
        comboBoxFragMode->setObjectName(QString::fromUtf8("comboBoxFragMode"));

        hboxLayout10->addWidget(comboBoxFragMode);


        vboxLayout9->addLayout(hboxLayout10);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        textLabelFragSize = new QLabel(groupBoxFirewall);
        textLabelFragSize->setObjectName(QString::fromUtf8("textLabelFragSize"));
        textLabelFragSize->setWordWrap(false);

        hboxLayout11->addWidget(textLabelFragSize);

        hboxLayout12 = new QHBoxLayout();
        hboxLayout12->setObjectName(QString::fromUtf8("hboxLayout12"));
        lineEditFragSize = new QLineEdit(groupBoxFirewall);
        lineEditFragSize->setObjectName(QString::fromUtf8("lineEditFragSize"));
        sizePolicy5.setHeightForWidth(lineEditFragSize->sizePolicy().hasHeightForWidth());
        lineEditFragSize->setSizePolicy(sizePolicy5);
        lineEditFragSize->setMaximumSize(QSize(50, 16777215));
        lineEditFragSize->setLayoutDirection(Qt::RightToLeft);

        hboxLayout12->addWidget(lineEditFragSize);

        textLabelFragBytes = new QLabel(groupBoxFirewall);
        textLabelFragBytes->setObjectName(QString::fromUtf8("textLabelFragBytes"));
        sizePolicy.setHeightForWidth(textLabelFragBytes->sizePolicy().hasHeightForWidth());
        textLabelFragBytes->setSizePolicy(sizePolicy);
        textLabelFragBytes->setWordWrap(false);

        hboxLayout12->addWidget(textLabelFragBytes);


        hboxLayout11->addLayout(hboxLayout12);


        vboxLayout9->addLayout(hboxLayout11);


        vboxLayout8->addWidget(groupBoxFirewall);

        groupBoxOther = new QGroupBox(tabClient);
        groupBoxOther->setObjectName(QString::fromUtf8("groupBoxOther"));
        vboxLayout10 = new QVBoxLayout(groupBoxOther);
        vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
        checkBoxDPD = new QCheckBox(groupBoxOther);
        checkBoxDPD->setObjectName(QString::fromUtf8("checkBoxDPD"));
        checkBoxDPD->setChecked(true);

        vboxLayout10->addWidget(checkBoxDPD);

        checkBoxNotify = new QCheckBox(groupBoxOther);
        checkBoxNotify->setObjectName(QString::fromUtf8("checkBoxNotify"));
        checkBoxNotify->setChecked(true);

        vboxLayout10->addWidget(checkBoxNotify);

        checkBoxBanner = new QCheckBox(groupBoxOther);
        checkBoxBanner->setObjectName(QString::fromUtf8("checkBoxBanner"));
        checkBoxBanner->setChecked(true);

        vboxLayout10->addWidget(checkBoxBanner);


        vboxLayout8->addWidget(groupBoxOther);

        spacerItem3 = new QSpacerItem(20, 291, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout8->addItem(spacerItem3);

        tabWidget->addTab(tabClient, QString());
        tabNameResolution = new QWidget();
        tabNameResolution->setObjectName(QString::fromUtf8("tabNameResolution"));
        gridLayout1 = new QGridLayout(tabNameResolution);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout13 = new QHBoxLayout();
        hboxLayout13->setObjectName(QString::fromUtf8("hboxLayout13"));
        checkBoxDNSEnable = new QCheckBox(tabNameResolution);
        checkBoxDNSEnable->setObjectName(QString::fromUtf8("checkBoxDNSEnable"));
        checkBoxDNSEnable->setChecked(true);

        hboxLayout13->addWidget(checkBoxDNSEnable);

        checkBoxDNSAuto = new QCheckBox(tabNameResolution);
        checkBoxDNSAuto->setObjectName(QString::fromUtf8("checkBoxDNSAuto"));
        checkBoxDNSAuto->setChecked(true);

        hboxLayout13->addWidget(checkBoxDNSAuto);


        gridLayout1->addLayout(hboxLayout13, 0, 0, 1, 2);

        hboxLayout14 = new QHBoxLayout();
        hboxLayout14->setObjectName(QString::fromUtf8("hboxLayout14"));
        textLabelDNSServer1 = new QLabel(tabNameResolution);
        textLabelDNSServer1->setObjectName(QString::fromUtf8("textLabelDNSServer1"));
        textLabelDNSServer1->setWordWrap(false);

        hboxLayout14->addWidget(textLabelDNSServer1);

        lineEditDNSServer1 = new QLineEdit(tabNameResolution);
        lineEditDNSServer1->setObjectName(QString::fromUtf8("lineEditDNSServer1"));
        lineEditDNSServer1->setEnabled(false);
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lineEditDNSServer1->sizePolicy().hasHeightForWidth());
        lineEditDNSServer1->setSizePolicy(sizePolicy6);
        lineEditDNSServer1->setAlignment(Qt::AlignHCenter);

        hboxLayout14->addWidget(lineEditDNSServer1);


        gridLayout1->addLayout(hboxLayout14, 1, 0, 1, 2);

        hboxLayout15 = new QHBoxLayout();
        hboxLayout15->setObjectName(QString::fromUtf8("hboxLayout15"));
        textLabelDNSServer2 = new QLabel(tabNameResolution);
        textLabelDNSServer2->setObjectName(QString::fromUtf8("textLabelDNSServer2"));
        textLabelDNSServer2->setWordWrap(false);

        hboxLayout15->addWidget(textLabelDNSServer2);

        lineEditDNSServer2 = new QLineEdit(tabNameResolution);
        lineEditDNSServer2->setObjectName(QString::fromUtf8("lineEditDNSServer2"));
        lineEditDNSServer2->setEnabled(false);
        sizePolicy6.setHeightForWidth(lineEditDNSServer2->sizePolicy().hasHeightForWidth());
        lineEditDNSServer2->setSizePolicy(sizePolicy6);
        lineEditDNSServer2->setAlignment(Qt::AlignHCenter);

        hboxLayout15->addWidget(lineEditDNSServer2);


        gridLayout1->addLayout(hboxLayout15, 2, 0, 1, 2);

        hboxLayout16 = new QHBoxLayout();
        hboxLayout16->setObjectName(QString::fromUtf8("hboxLayout16"));
        textLabelDNSServer3 = new QLabel(tabNameResolution);
        textLabelDNSServer3->setObjectName(QString::fromUtf8("textLabelDNSServer3"));
        textLabelDNSServer3->setWordWrap(false);

        hboxLayout16->addWidget(textLabelDNSServer3);

        lineEditDNSServer3 = new QLineEdit(tabNameResolution);
        lineEditDNSServer3->setObjectName(QString::fromUtf8("lineEditDNSServer3"));
        lineEditDNSServer3->setEnabled(false);
        sizePolicy6.setHeightForWidth(lineEditDNSServer3->sizePolicy().hasHeightForWidth());
        lineEditDNSServer3->setSizePolicy(sizePolicy6);
        lineEditDNSServer3->setAlignment(Qt::AlignHCenter);

        hboxLayout16->addWidget(lineEditDNSServer3);


        gridLayout1->addLayout(hboxLayout16, 3, 0, 1, 2);

        hboxLayout17 = new QHBoxLayout();
        hboxLayout17->setObjectName(QString::fromUtf8("hboxLayout17"));
        textLabelDNSServer4 = new QLabel(tabNameResolution);
        textLabelDNSServer4->setObjectName(QString::fromUtf8("textLabelDNSServer4"));
        textLabelDNSServer4->setWordWrap(false);

        hboxLayout17->addWidget(textLabelDNSServer4);

        lineEditDNSServer4 = new QLineEdit(tabNameResolution);
        lineEditDNSServer4->setObjectName(QString::fromUtf8("lineEditDNSServer4"));
        lineEditDNSServer4->setEnabled(false);
        sizePolicy6.setHeightForWidth(lineEditDNSServer4->sizePolicy().hasHeightForWidth());
        lineEditDNSServer4->setSizePolicy(sizePolicy6);
        lineEditDNSServer4->setAlignment(Qt::AlignHCenter);

        hboxLayout17->addWidget(lineEditDNSServer4);


        gridLayout1->addLayout(hboxLayout17, 4, 0, 1, 2);

        checkBoxSuffixAuto = new QCheckBox(tabNameResolution);
        checkBoxSuffixAuto->setObjectName(QString::fromUtf8("checkBoxSuffixAuto"));
        checkBoxSuffixAuto->setChecked(true);

        gridLayout1->addWidget(checkBoxSuffixAuto, 5, 1, 1, 1);

        hboxLayout18 = new QHBoxLayout();
        hboxLayout18->setObjectName(QString::fromUtf8("hboxLayout18"));
        textLabelDNSSuffix = new QLabel(tabNameResolution);
        textLabelDNSSuffix->setObjectName(QString::fromUtf8("textLabelDNSSuffix"));
        textLabelDNSSuffix->setWordWrap(false);

        hboxLayout18->addWidget(textLabelDNSSuffix);

        lineEditDNSSuffix = new QLineEdit(tabNameResolution);
        lineEditDNSSuffix->setObjectName(QString::fromUtf8("lineEditDNSSuffix"));
        lineEditDNSSuffix->setEnabled(false);
        sizePolicy6.setHeightForWidth(lineEditDNSSuffix->sizePolicy().hasHeightForWidth());
        lineEditDNSSuffix->setSizePolicy(sizePolicy6);

        hboxLayout18->addWidget(lineEditDNSSuffix);


        gridLayout1->addLayout(hboxLayout18, 6, 0, 1, 2);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem4, 7, 0, 1, 1);

        tabWidget->addTab(tabNameResolution, QString());
        tabAuthentication = new QWidget();
        tabAuthentication->setObjectName(QString::fromUtf8("tabAuthentication"));
        vboxLayout11 = new QVBoxLayout(tabAuthentication);
        vboxLayout11->setObjectName(QString::fromUtf8("vboxLayout11"));
        hboxLayout19 = new QHBoxLayout();
        hboxLayout19->setObjectName(QString::fromUtf8("hboxLayout19"));
        textLabelAuthMethod = new QLabel(tabAuthentication);
        textLabelAuthMethod->setObjectName(QString::fromUtf8("textLabelAuthMethod"));
        textLabelAuthMethod->setWordWrap(false);

        hboxLayout19->addWidget(textLabelAuthMethod);

        comboBoxAuthMethod = new QComboBox(tabAuthentication);
        comboBoxAuthMethod->addItem(QString());
        comboBoxAuthMethod->addItem(QString());
        comboBoxAuthMethod->addItem(QString());
        comboBoxAuthMethod->addItem(QString());
        comboBoxAuthMethod->addItem(QString());
        comboBoxAuthMethod->addItem(QString());
        comboBoxAuthMethod->setObjectName(QString::fromUtf8("comboBoxAuthMethod"));

        hboxLayout19->addWidget(comboBoxAuthMethod);


        vboxLayout11->addLayout(hboxLayout19);

        tabWidgetAuthInfo = new QTabWidget(tabAuthentication);
        tabWidgetAuthInfo->setObjectName(QString::fromUtf8("tabWidgetAuthInfo"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout12 = new QVBoxLayout(tab);
        vboxLayout12->setObjectName(QString::fromUtf8("vboxLayout12"));
        textLabelLocalIDType = new QLabel(tab);
        textLabelLocalIDType->setObjectName(QString::fromUtf8("textLabelLocalIDType"));
        textLabelLocalIDType->setWordWrap(false);

        vboxLayout12->addWidget(textLabelLocalIDType);

        comboBoxLocalIDType = new QComboBox(tab);
        comboBoxLocalIDType->addItem(QString());
        comboBoxLocalIDType->addItem(QString());
        comboBoxLocalIDType->addItem(QString());
        comboBoxLocalIDType->addItem(QString());
        comboBoxLocalIDType->addItem(QString());
        comboBoxLocalIDType->setObjectName(QString::fromUtf8("comboBoxLocalIDType"));

        vboxLayout12->addWidget(comboBoxLocalIDType);

        textLabelLocalIDData = new QLabel(tab);
        textLabelLocalIDData->setObjectName(QString::fromUtf8("textLabelLocalIDData"));
        textLabelLocalIDData->setWordWrap(false);

        vboxLayout12->addWidget(textLabelLocalIDData);

        lineEditLocalIDData = new QLineEdit(tab);
        lineEditLocalIDData->setObjectName(QString::fromUtf8("lineEditLocalIDData"));
        lineEditLocalIDData->setEnabled(false);

        vboxLayout12->addWidget(lineEditLocalIDData);

        checkBoxLocalIDOption = new QCheckBox(tab);
        checkBoxLocalIDOption->setObjectName(QString::fromUtf8("checkBoxLocalIDOption"));
        checkBoxLocalIDOption->setChecked(true);

        vboxLayout12->addWidget(checkBoxLocalIDOption);

        spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout12->addItem(spacerItem5);

        tabWidgetAuthInfo->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        vboxLayout13 = new QVBoxLayout(tab_2);
        vboxLayout13->setObjectName(QString::fromUtf8("vboxLayout13"));
        textLabelRemoteIDType = new QLabel(tab_2);
        textLabelRemoteIDType->setObjectName(QString::fromUtf8("textLabelRemoteIDType"));
        textLabelRemoteIDType->setWordWrap(false);

        vboxLayout13->addWidget(textLabelRemoteIDType);

        comboBoxRemoteIDType = new QComboBox(tab_2);
        comboBoxRemoteIDType->addItem(QString());
        comboBoxRemoteIDType->addItem(QString());
        comboBoxRemoteIDType->addItem(QString());
        comboBoxRemoteIDType->addItem(QString());
        comboBoxRemoteIDType->addItem(QString());
        comboBoxRemoteIDType->addItem(QString());
        comboBoxRemoteIDType->setObjectName(QString::fromUtf8("comboBoxRemoteIDType"));

        vboxLayout13->addWidget(comboBoxRemoteIDType);

        textLabelRemoteIDData = new QLabel(tab_2);
        textLabelRemoteIDData->setObjectName(QString::fromUtf8("textLabelRemoteIDData"));
        textLabelRemoteIDData->setWordWrap(false);

        vboxLayout13->addWidget(textLabelRemoteIDData);

        lineEditRemoteIDData = new QLineEdit(tab_2);
        lineEditRemoteIDData->setObjectName(QString::fromUtf8("lineEditRemoteIDData"));
        lineEditRemoteIDData->setEnabled(false);

        vboxLayout13->addWidget(lineEditRemoteIDData);

        checkBoxRemoteIDOption = new QCheckBox(tab_2);
        checkBoxRemoteIDOption->setObjectName(QString::fromUtf8("checkBoxRemoteIDOption"));
        checkBoxRemoteIDOption->setChecked(true);

        vboxLayout13->addWidget(checkBoxRemoteIDOption);

        spacerItem6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout13->addItem(spacerItem6);

        tabWidgetAuthInfo->addTab(tab_2, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout14 = new QVBoxLayout(TabPage);
        vboxLayout14->setObjectName(QString::fromUtf8("vboxLayout14"));
        textLabelCAFile = new QLabel(TabPage);
        textLabelCAFile->setObjectName(QString::fromUtf8("textLabelCAFile"));
        textLabelCAFile->setWordWrap(false);

        vboxLayout14->addWidget(textLabelCAFile);

        hboxLayout20 = new QHBoxLayout();
        hboxLayout20->setObjectName(QString::fromUtf8("hboxLayout20"));
        lineEditCAName = new QLineEdit(TabPage);
        lineEditCAName->setObjectName(QString::fromUtf8("lineEditCAName"));
        lineEditCAName->setEnabled(true);
        lineEditCAName->setReadOnly(true);

        hboxLayout20->addWidget(lineEditCAName);

        toolButtonCAFile = new QToolButton(TabPage);
        toolButtonCAFile->setObjectName(QString::fromUtf8("toolButtonCAFile"));

        hboxLayout20->addWidget(toolButtonCAFile);


        vboxLayout14->addLayout(hboxLayout20);

        textLabelCertFile = new QLabel(TabPage);
        textLabelCertFile->setObjectName(QString::fromUtf8("textLabelCertFile"));
        textLabelCertFile->setWordWrap(false);

        vboxLayout14->addWidget(textLabelCertFile);

        hboxLayout21 = new QHBoxLayout();
        hboxLayout21->setObjectName(QString::fromUtf8("hboxLayout21"));
        lineEditCertName = new QLineEdit(TabPage);
        lineEditCertName->setObjectName(QString::fromUtf8("lineEditCertName"));
        lineEditCertName->setEnabled(true);
        lineEditCertName->setReadOnly(true);

        hboxLayout21->addWidget(lineEditCertName);

        toolButtonCertFile = new QToolButton(TabPage);
        toolButtonCertFile->setObjectName(QString::fromUtf8("toolButtonCertFile"));

        hboxLayout21->addWidget(toolButtonCertFile);


        vboxLayout14->addLayout(hboxLayout21);

        textLabelPKeyFile = new QLabel(TabPage);
        textLabelPKeyFile->setObjectName(QString::fromUtf8("textLabelPKeyFile"));
        textLabelPKeyFile->setWordWrap(false);

        vboxLayout14->addWidget(textLabelPKeyFile);

        hboxLayout22 = new QHBoxLayout();
        hboxLayout22->setObjectName(QString::fromUtf8("hboxLayout22"));
        lineEditPKeyName = new QLineEdit(TabPage);
        lineEditPKeyName->setObjectName(QString::fromUtf8("lineEditPKeyName"));
        lineEditPKeyName->setEnabled(true);
        lineEditPKeyName->setFrame(true);
        lineEditPKeyName->setReadOnly(true);

        hboxLayout22->addWidget(lineEditPKeyName);

        toolButtonPKeyFile = new QToolButton(TabPage);
        toolButtonPKeyFile->setObjectName(QString::fromUtf8("toolButtonPKeyFile"));

        hboxLayout22->addWidget(toolButtonPKeyFile);


        vboxLayout14->addLayout(hboxLayout22);

        textLabelPSK = new QLabel(TabPage);
        textLabelPSK->setObjectName(QString::fromUtf8("textLabelPSK"));
        textLabelPSK->setWordWrap(false);

        vboxLayout14->addWidget(textLabelPSK);

        lineEditPSK = new QLineEdit(TabPage);
        lineEditPSK->setObjectName(QString::fromUtf8("lineEditPSK"));
        lineEditPSK->setEchoMode(QLineEdit::Password);

        vboxLayout14->addWidget(lineEditPSK);

        spacerItem7 = new QSpacerItem(254, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout14->addItem(spacerItem7);

        tabWidgetAuthInfo->addTab(TabPage, QString());

        vboxLayout11->addWidget(tabWidgetAuthInfo);

        spacerItem8 = new QSpacerItem(278, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout11->addItem(spacerItem8);

        tabWidget->addTab(tabAuthentication, QString());
        tabPhase1 = new QWidget();
        tabPhase1->setObjectName(QString::fromUtf8("tabPhase1"));
        vboxLayout15 = new QVBoxLayout(tabPhase1);
        vboxLayout15->setObjectName(QString::fromUtf8("vboxLayout15"));
        groupBoxP1Proposal = new QGroupBox(tabPhase1);
        groupBoxP1Proposal->setObjectName(QString::fromUtf8("groupBoxP1Proposal"));
        vboxLayout16 = new QVBoxLayout(groupBoxP1Proposal);
        vboxLayout16->setObjectName(QString::fromUtf8("vboxLayout16"));
        hboxLayout23 = new QHBoxLayout();
        hboxLayout23->setObjectName(QString::fromUtf8("hboxLayout23"));
        textLabelP1Exchange = new QLabel(groupBoxP1Proposal);
        textLabelP1Exchange->setObjectName(QString::fromUtf8("textLabelP1Exchange"));
        sizePolicy.setHeightForWidth(textLabelP1Exchange->sizePolicy().hasHeightForWidth());
        textLabelP1Exchange->setSizePolicy(sizePolicy);
        textLabelP1Exchange->setWordWrap(false);

        hboxLayout23->addWidget(textLabelP1Exchange);

        comboBoxP1Exchange = new QComboBox(groupBoxP1Proposal);
        comboBoxP1Exchange->addItem(QString());
        comboBoxP1Exchange->addItem(QString());
        comboBoxP1Exchange->setObjectName(QString::fromUtf8("comboBoxP1Exchange"));

        hboxLayout23->addWidget(comboBoxP1Exchange);


        vboxLayout16->addLayout(hboxLayout23);

        hboxLayout24 = new QHBoxLayout();
        hboxLayout24->setObjectName(QString::fromUtf8("hboxLayout24"));
        textLabelP1DHGroup = new QLabel(groupBoxP1Proposal);
        textLabelP1DHGroup->setObjectName(QString::fromUtf8("textLabelP1DHGroup"));
        sizePolicy.setHeightForWidth(textLabelP1DHGroup->sizePolicy().hasHeightForWidth());
        textLabelP1DHGroup->setSizePolicy(sizePolicy);
        textLabelP1DHGroup->setWordWrap(false);

        hboxLayout24->addWidget(textLabelP1DHGroup);

        comboBoxP1DHGroup = new QComboBox(groupBoxP1Proposal);
        comboBoxP1DHGroup->addItem(QString());
        comboBoxP1DHGroup->addItem(QString());
        comboBoxP1DHGroup->addItem(QString());
        comboBoxP1DHGroup->addItem(QString());
        comboBoxP1DHGroup->addItem(QString());
        comboBoxP1DHGroup->addItem(QString());
        comboBoxP1DHGroup->addItem(QString());
        comboBoxP1DHGroup->addItem(QString());
        comboBoxP1DHGroup->addItem(QString());
        comboBoxP1DHGroup->setObjectName(QString::fromUtf8("comboBoxP1DHGroup"));

        hboxLayout24->addWidget(comboBoxP1DHGroup);


        vboxLayout16->addLayout(hboxLayout24);

        hboxLayout25 = new QHBoxLayout();
        hboxLayout25->setObjectName(QString::fromUtf8("hboxLayout25"));
        textLabelP1Cipher = new QLabel(groupBoxP1Proposal);
        textLabelP1Cipher->setObjectName(QString::fromUtf8("textLabelP1Cipher"));
        sizePolicy.setHeightForWidth(textLabelP1Cipher->sizePolicy().hasHeightForWidth());
        textLabelP1Cipher->setSizePolicy(sizePolicy);
        textLabelP1Cipher->setWordWrap(false);

        hboxLayout25->addWidget(textLabelP1Cipher);

        comboBoxP1Cipher = new QComboBox(groupBoxP1Proposal);
        comboBoxP1Cipher->addItem(QString());
        comboBoxP1Cipher->addItem(QString());
        comboBoxP1Cipher->addItem(QString());
        comboBoxP1Cipher->addItem(QString());
        comboBoxP1Cipher->addItem(QString());
        comboBoxP1Cipher->addItem(QString());
        comboBoxP1Cipher->setObjectName(QString::fromUtf8("comboBoxP1Cipher"));

        hboxLayout25->addWidget(comboBoxP1Cipher);


        vboxLayout16->addLayout(hboxLayout25);

        hboxLayout26 = new QHBoxLayout();
        hboxLayout26->setObjectName(QString::fromUtf8("hboxLayout26"));
        textLabelP1Keylen = new QLabel(groupBoxP1Proposal);
        textLabelP1Keylen->setObjectName(QString::fromUtf8("textLabelP1Keylen"));
        sizePolicy.setHeightForWidth(textLabelP1Keylen->sizePolicy().hasHeightForWidth());
        textLabelP1Keylen->setSizePolicy(sizePolicy);
        textLabelP1Keylen->setWordWrap(false);

        hboxLayout26->addWidget(textLabelP1Keylen);

        hboxLayout27 = new QHBoxLayout();
        hboxLayout27->setObjectName(QString::fromUtf8("hboxLayout27"));
        comboBoxP1Keylen = new QComboBox(groupBoxP1Proposal);
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->addItem(QString());
        comboBoxP1Keylen->setObjectName(QString::fromUtf8("comboBoxP1Keylen"));
        comboBoxP1Keylen->setEnabled(false);

        hboxLayout27->addWidget(comboBoxP1Keylen);

        textLabelP1KeyBits = new QLabel(groupBoxP1Proposal);
        textLabelP1KeyBits->setObjectName(QString::fromUtf8("textLabelP1KeyBits"));
        textLabelP1KeyBits->setWordWrap(false);

        hboxLayout27->addWidget(textLabelP1KeyBits);


        hboxLayout26->addLayout(hboxLayout27);


        vboxLayout16->addLayout(hboxLayout26);

        hboxLayout28 = new QHBoxLayout();
        hboxLayout28->setObjectName(QString::fromUtf8("hboxLayout28"));
        textLabelP1Hash = new QLabel(groupBoxP1Proposal);
        textLabelP1Hash->setObjectName(QString::fromUtf8("textLabelP1Hash"));
        sizePolicy.setHeightForWidth(textLabelP1Hash->sizePolicy().hasHeightForWidth());
        textLabelP1Hash->setSizePolicy(sizePolicy);
        textLabelP1Hash->setWordWrap(false);

        hboxLayout28->addWidget(textLabelP1Hash);

        comboBoxP1Hash = new QComboBox(groupBoxP1Proposal);
        comboBoxP1Hash->addItem(QString());
        comboBoxP1Hash->addItem(QString());
        comboBoxP1Hash->addItem(QString());
        comboBoxP1Hash->addItem(QString());
        comboBoxP1Hash->addItem(QString());
        comboBoxP1Hash->addItem(QString());
        comboBoxP1Hash->setObjectName(QString::fromUtf8("comboBoxP1Hash"));

        hboxLayout28->addWidget(comboBoxP1Hash);


        vboxLayout16->addLayout(hboxLayout28);

        hboxLayout29 = new QHBoxLayout();
        hboxLayout29->setObjectName(QString::fromUtf8("hboxLayout29"));
        textLabelP1LifeTime = new QLabel(groupBoxP1Proposal);
        textLabelP1LifeTime->setObjectName(QString::fromUtf8("textLabelP1LifeTime"));
        sizePolicy.setHeightForWidth(textLabelP1LifeTime->sizePolicy().hasHeightForWidth());
        textLabelP1LifeTime->setSizePolicy(sizePolicy);
        textLabelP1LifeTime->setWordWrap(false);

        hboxLayout29->addWidget(textLabelP1LifeTime);

        hboxLayout30 = new QHBoxLayout();
        hboxLayout30->setObjectName(QString::fromUtf8("hboxLayout30"));
        lineEditP1LifeTime = new QLineEdit(groupBoxP1Proposal);
        lineEditP1LifeTime->setObjectName(QString::fromUtf8("lineEditP1LifeTime"));
        sizePolicy5.setHeightForWidth(lineEditP1LifeTime->sizePolicy().hasHeightForWidth());
        lineEditP1LifeTime->setSizePolicy(sizePolicy5);
        lineEditP1LifeTime->setMaximumSize(QSize(50, 16777215));
        lineEditP1LifeTime->setAlignment(Qt::AlignRight);

        hboxLayout30->addWidget(lineEditP1LifeTime);

        textLabelLifeSecs = new QLabel(groupBoxP1Proposal);
        textLabelLifeSecs->setObjectName(QString::fromUtf8("textLabelLifeSecs"));
        sizePolicy.setHeightForWidth(textLabelLifeSecs->sizePolicy().hasHeightForWidth());
        textLabelLifeSecs->setSizePolicy(sizePolicy);
        textLabelLifeSecs->setWordWrap(false);

        hboxLayout30->addWidget(textLabelLifeSecs);


        hboxLayout29->addLayout(hboxLayout30);


        vboxLayout16->addLayout(hboxLayout29);

        hboxLayout31 = new QHBoxLayout();
        hboxLayout31->setObjectName(QString::fromUtf8("hboxLayout31"));
        textLabelLifeData = new QLabel(groupBoxP1Proposal);
        textLabelLifeData->setObjectName(QString::fromUtf8("textLabelLifeData"));
        sizePolicy.setHeightForWidth(textLabelLifeData->sizePolicy().hasHeightForWidth());
        textLabelLifeData->setSizePolicy(sizePolicy);
        textLabelLifeData->setWordWrap(false);

        hboxLayout31->addWidget(textLabelLifeData);

        hboxLayout32 = new QHBoxLayout();
        hboxLayout32->setObjectName(QString::fromUtf8("hboxLayout32"));
        lineEditP1LifeData = new QLineEdit(groupBoxP1Proposal);
        lineEditP1LifeData->setObjectName(QString::fromUtf8("lineEditP1LifeData"));
        sizePolicy5.setHeightForWidth(lineEditP1LifeData->sizePolicy().hasHeightForWidth());
        lineEditP1LifeData->setSizePolicy(sizePolicy5);
        lineEditP1LifeData->setMaximumSize(QSize(50, 16777215));
        lineEditP1LifeData->setAlignment(Qt::AlignRight);

        hboxLayout32->addWidget(lineEditP1LifeData);

        textLabelLifeKBs = new QLabel(groupBoxP1Proposal);
        textLabelLifeKBs->setObjectName(QString::fromUtf8("textLabelLifeKBs"));
        textLabelLifeKBs->setWordWrap(false);

        hboxLayout32->addWidget(textLabelLifeKBs);


        hboxLayout31->addLayout(hboxLayout32);


        vboxLayout16->addLayout(hboxLayout31);


        vboxLayout15->addWidget(groupBoxP1Proposal);

        checkBoxCheckpointID = new QCheckBox(tabPhase1);
        checkBoxCheckpointID->setObjectName(QString::fromUtf8("checkBoxCheckpointID"));
        checkBoxCheckpointID->setChecked(false);

        vboxLayout15->addWidget(checkBoxCheckpointID);

        spacerItem9 = new QSpacerItem(21, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout15->addItem(spacerItem9);

        tabWidget->addTab(tabPhase1, QString());
        tabPhase2 = new QWidget();
        tabPhase2->setObjectName(QString::fromUtf8("tabPhase2"));
        vboxLayout17 = new QVBoxLayout(tabPhase2);
        vboxLayout17->setObjectName(QString::fromUtf8("vboxLayout17"));
        groupBoxP2Proposal = new QGroupBox(tabPhase2);
        groupBoxP2Proposal->setObjectName(QString::fromUtf8("groupBoxP2Proposal"));
        vboxLayout18 = new QVBoxLayout(groupBoxP2Proposal);
        vboxLayout18->setObjectName(QString::fromUtf8("vboxLayout18"));
        hboxLayout33 = new QHBoxLayout();
        hboxLayout33->setObjectName(QString::fromUtf8("hboxLayout33"));
        textLabelP2Transform = new QLabel(groupBoxP2Proposal);
        textLabelP2Transform->setObjectName(QString::fromUtf8("textLabelP2Transform"));
        textLabelP2Transform->setWordWrap(false);

        hboxLayout33->addWidget(textLabelP2Transform);

        comboBoxP2Transform = new QComboBox(groupBoxP2Proposal);
        comboBoxP2Transform->addItem(QString());
        comboBoxP2Transform->addItem(QString());
        comboBoxP2Transform->addItem(QString());
        comboBoxP2Transform->addItem(QString());
        comboBoxP2Transform->addItem(QString());
        comboBoxP2Transform->addItem(QString());
        comboBoxP2Transform->setObjectName(QString::fromUtf8("comboBoxP2Transform"));

        hboxLayout33->addWidget(comboBoxP2Transform);


        vboxLayout18->addLayout(hboxLayout33);

        hboxLayout34 = new QHBoxLayout();
        hboxLayout34->setObjectName(QString::fromUtf8("hboxLayout34"));
        textLabelP2Keylen = new QLabel(groupBoxP2Proposal);
        textLabelP2Keylen->setObjectName(QString::fromUtf8("textLabelP2Keylen"));
        textLabelP2Keylen->setWordWrap(false);

        hboxLayout34->addWidget(textLabelP2Keylen);

        hboxLayout35 = new QHBoxLayout();
        hboxLayout35->setObjectName(QString::fromUtf8("hboxLayout35"));
        comboBoxP2Keylen = new QComboBox(groupBoxP2Proposal);
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->addItem(QString());
        comboBoxP2Keylen->setObjectName(QString::fromUtf8("comboBoxP2Keylen"));
        comboBoxP2Keylen->setEnabled(false);

        hboxLayout35->addWidget(comboBoxP2Keylen);

        textLabelP2KeyBits = new QLabel(groupBoxP2Proposal);
        textLabelP2KeyBits->setObjectName(QString::fromUtf8("textLabelP2KeyBits"));
        textLabelP2KeyBits->setWordWrap(false);

        hboxLayout35->addWidget(textLabelP2KeyBits);


        hboxLayout34->addLayout(hboxLayout35);


        vboxLayout18->addLayout(hboxLayout34);

        hboxLayout36 = new QHBoxLayout();
        hboxLayout36->setObjectName(QString::fromUtf8("hboxLayout36"));
        textLabelP2HMAC = new QLabel(groupBoxP2Proposal);
        textLabelP2HMAC->setObjectName(QString::fromUtf8("textLabelP2HMAC"));
        textLabelP2HMAC->setWordWrap(false);

        hboxLayout36->addWidget(textLabelP2HMAC);

        comboBoxP2HMAC = new QComboBox(groupBoxP2Proposal);
        comboBoxP2HMAC->addItem(QString());
        comboBoxP2HMAC->addItem(QString());
        comboBoxP2HMAC->addItem(QString());
        comboBoxP2HMAC->addItem(QString());
        comboBoxP2HMAC->addItem(QString());
        comboBoxP2HMAC->addItem(QString());
        comboBoxP2HMAC->setObjectName(QString::fromUtf8("comboBoxP2HMAC"));

        hboxLayout36->addWidget(comboBoxP2HMAC);


        vboxLayout18->addLayout(hboxLayout36);

        hboxLayout37 = new QHBoxLayout();
        hboxLayout37->setObjectName(QString::fromUtf8("hboxLayout37"));
        textLabelP2PFSGroup = new QLabel(groupBoxP2Proposal);
        textLabelP2PFSGroup->setObjectName(QString::fromUtf8("textLabelP2PFSGroup"));
        textLabelP2PFSGroup->setWordWrap(false);

        hboxLayout37->addWidget(textLabelP2PFSGroup);

        comboBoxP2PFSGroup = new QComboBox(groupBoxP2Proposal);
        comboBoxP2PFSGroup->addItem(QString());
        comboBoxP2PFSGroup->addItem(QString());
        comboBoxP2PFSGroup->addItem(QString());
        comboBoxP2PFSGroup->addItem(QString());
        comboBoxP2PFSGroup->addItem(QString());
        comboBoxP2PFSGroup->addItem(QString());
        comboBoxP2PFSGroup->addItem(QString());
        comboBoxP2PFSGroup->addItem(QString());
        comboBoxP2PFSGroup->addItem(QString());
        comboBoxP2PFSGroup->addItem(QString());
        comboBoxP2PFSGroup->setObjectName(QString::fromUtf8("comboBoxP2PFSGroup"));

        hboxLayout37->addWidget(comboBoxP2PFSGroup);


        vboxLayout18->addLayout(hboxLayout37);

        hboxLayout38 = new QHBoxLayout();
        hboxLayout38->setObjectName(QString::fromUtf8("hboxLayout38"));
        textLabelP2Compress = new QLabel(groupBoxP2Proposal);
        textLabelP2Compress->setObjectName(QString::fromUtf8("textLabelP2Compress"));
        textLabelP2Compress->setWordWrap(false);

        hboxLayout38->addWidget(textLabelP2Compress);

        comboBoxP2Compress = new QComboBox(groupBoxP2Proposal);
        comboBoxP2Compress->addItem(QString());
        comboBoxP2Compress->addItem(QString());
        comboBoxP2Compress->setObjectName(QString::fromUtf8("comboBoxP2Compress"));

        hboxLayout38->addWidget(comboBoxP2Compress);


        vboxLayout18->addLayout(hboxLayout38);

        hboxLayout39 = new QHBoxLayout();
        hboxLayout39->setObjectName(QString::fromUtf8("hboxLayout39"));
        textLabelP2LifeTime = new QLabel(groupBoxP2Proposal);
        textLabelP2LifeTime->setObjectName(QString::fromUtf8("textLabelP2LifeTime"));
        textLabelP2LifeTime->setWordWrap(false);

        hboxLayout39->addWidget(textLabelP2LifeTime);

        hboxLayout40 = new QHBoxLayout();
        hboxLayout40->setObjectName(QString::fromUtf8("hboxLayout40"));
        lineEditP2LifeTime = new QLineEdit(groupBoxP2Proposal);
        lineEditP2LifeTime->setObjectName(QString::fromUtf8("lineEditP2LifeTime"));
        sizePolicy5.setHeightForWidth(lineEditP2LifeTime->sizePolicy().hasHeightForWidth());
        lineEditP2LifeTime->setSizePolicy(sizePolicy5);
        lineEditP2LifeTime->setMaximumSize(QSize(50, 16777215));
        lineEditP2LifeTime->setAlignment(Qt::AlignRight);

        hboxLayout40->addWidget(lineEditP2LifeTime);

        textLabelP2LifeSecs = new QLabel(groupBoxP2Proposal);
        textLabelP2LifeSecs->setObjectName(QString::fromUtf8("textLabelP2LifeSecs"));
        textLabelP2LifeSecs->setWordWrap(false);

        hboxLayout40->addWidget(textLabelP2LifeSecs);


        hboxLayout39->addLayout(hboxLayout40);


        vboxLayout18->addLayout(hboxLayout39);

        hboxLayout41 = new QHBoxLayout();
        hboxLayout41->setObjectName(QString::fromUtf8("hboxLayout41"));
        textLabelP2LifeData = new QLabel(groupBoxP2Proposal);
        textLabelP2LifeData->setObjectName(QString::fromUtf8("textLabelP2LifeData"));
        textLabelP2LifeData->setWordWrap(false);

        hboxLayout41->addWidget(textLabelP2LifeData);

        hboxLayout42 = new QHBoxLayout();
        hboxLayout42->setObjectName(QString::fromUtf8("hboxLayout42"));
        lineEditP2LifeData = new QLineEdit(groupBoxP2Proposal);
        lineEditP2LifeData->setObjectName(QString::fromUtf8("lineEditP2LifeData"));
        sizePolicy5.setHeightForWidth(lineEditP2LifeData->sizePolicy().hasHeightForWidth());
        lineEditP2LifeData->setSizePolicy(sizePolicy5);
        lineEditP2LifeData->setMaximumSize(QSize(50, 16777215));
        lineEditP2LifeData->setAlignment(Qt::AlignRight);

        hboxLayout42->addWidget(lineEditP2LifeData);

        textLabelP2LifeKBs = new QLabel(groupBoxP2Proposal);
        textLabelP2LifeKBs->setObjectName(QString::fromUtf8("textLabelP2LifeKBs"));
        textLabelP2LifeKBs->setWordWrap(false);

        hboxLayout42->addWidget(textLabelP2LifeKBs);


        hboxLayout41->addLayout(hboxLayout42);


        vboxLayout18->addLayout(hboxLayout41);


        vboxLayout17->addWidget(groupBoxP2Proposal);

        spacerItem10 = new QSpacerItem(20, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout17->addItem(spacerItem10);

        tabWidget->addTab(tabPhase2, QString());
        tabPolicy = new QWidget();
        tabPolicy->setObjectName(QString::fromUtf8("tabPolicy"));
        vboxLayout19 = new QVBoxLayout(tabPolicy);
        vboxLayout19->setObjectName(QString::fromUtf8("vboxLayout19"));
        groupBoxPolicy = new QGroupBox(tabPolicy);
        groupBoxPolicy->setObjectName(QString::fromUtf8("groupBoxPolicy"));
        verticalLayout = new QVBoxLayout(groupBoxPolicy);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textLabelPolicyLevel = new QLabel(groupBoxPolicy);
        textLabelPolicyLevel->setObjectName(QString::fromUtf8("textLabelPolicyLevel"));
        textLabelPolicyLevel->setWordWrap(false);

        horizontalLayout->addWidget(textLabelPolicyLevel);

        comboBoxPolicyLevel = new QComboBox(groupBoxPolicy);
        comboBoxPolicyLevel->addItem(QString());
        comboBoxPolicyLevel->addItem(QString());
        comboBoxPolicyLevel->addItem(QString());
        comboBoxPolicyLevel->addItem(QString());
        comboBoxPolicyLevel->setObjectName(QString::fromUtf8("comboBoxPolicyLevel"));

        horizontalLayout->addWidget(comboBoxPolicyLevel);


        verticalLayout->addLayout(horizontalLayout);

        checkBoxPolicyNailed = new QCheckBox(groupBoxPolicy);
        checkBoxPolicyNailed->setObjectName(QString::fromUtf8("checkBoxPolicyNailed"));
        checkBoxPolicyNailed->setChecked(false);
        checkBoxPolicyNailed->setAutoRepeat(false);

        verticalLayout->addWidget(checkBoxPolicyNailed);

        checkBoxPolicyAuto = new QCheckBox(groupBoxPolicy);
        checkBoxPolicyAuto->setObjectName(QString::fromUtf8("checkBoxPolicyAuto"));
        checkBoxPolicyAuto->setChecked(true);
        checkBoxPolicyAuto->setAutoRepeat(false);

        verticalLayout->addWidget(checkBoxPolicyAuto);

        treeWidgetPolicies = new QTreeWidget(groupBoxPolicy);
        treeWidgetPolicies->setObjectName(QString::fromUtf8("treeWidgetPolicies"));

        verticalLayout->addWidget(treeWidgetPolicies);

        hboxLayout43 = new QHBoxLayout();
        hboxLayout43->setObjectName(QString::fromUtf8("hboxLayout43"));
        pushButtonPolicyAdd = new QPushButton(groupBoxPolicy);
        pushButtonPolicyAdd->setObjectName(QString::fromUtf8("pushButtonPolicyAdd"));
        pushButtonPolicyAdd->setEnabled(false);
        sizePolicy4.setHeightForWidth(pushButtonPolicyAdd->sizePolicy().hasHeightForWidth());
        pushButtonPolicyAdd->setSizePolicy(sizePolicy4);

        hboxLayout43->addWidget(pushButtonPolicyAdd);

        pushButtonPolicyMod = new QPushButton(groupBoxPolicy);
        pushButtonPolicyMod->setObjectName(QString::fromUtf8("pushButtonPolicyMod"));
        pushButtonPolicyMod->setEnabled(false);
        sizePolicy4.setHeightForWidth(pushButtonPolicyMod->sizePolicy().hasHeightForWidth());
        pushButtonPolicyMod->setSizePolicy(sizePolicy4);

        hboxLayout43->addWidget(pushButtonPolicyMod);

        pushButtonPolicyDel = new QPushButton(groupBoxPolicy);
        pushButtonPolicyDel->setObjectName(QString::fromUtf8("pushButtonPolicyDel"));
        pushButtonPolicyDel->setEnabled(false);
        sizePolicy4.setHeightForWidth(pushButtonPolicyDel->sizePolicy().hasHeightForWidth());
        pushButtonPolicyDel->setSizePolicy(sizePolicy4);

        hboxLayout43->addWidget(pushButtonPolicyDel);


        verticalLayout->addLayout(hboxLayout43);


        vboxLayout19->addWidget(groupBoxPolicy);

        tabWidget->addTab(tabPolicy, QString());

        vboxLayout->addWidget(tabWidget);

        hboxLayout44 = new QHBoxLayout();
        hboxLayout44->setObjectName(QString::fromUtf8("hboxLayout44"));
        spacerItem11 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout44->addItem(spacerItem11);

        buttonSave = new QPushButton(qikeaSite);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));
        buttonSave->setAutoDefault(true);

        hboxLayout44->addWidget(buttonSave);

        buttonCancel = new QPushButton(qikeaSite);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout44->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout44);

        QWidget::setTabOrder(tabWidget, lineEditHost);
        QWidget::setTabOrder(lineEditHost, lineEditPort);
        QWidget::setTabOrder(lineEditPort, comboBoxConfigMethod);
        QWidget::setTabOrder(comboBoxConfigMethod, comboBoxAddressMethod);
        QWidget::setTabOrder(comboBoxAddressMethod, checkBoxAddressAuto);
        QWidget::setTabOrder(checkBoxAddressAuto, lineEditMTU);
        QWidget::setTabOrder(lineEditMTU, lineEditAddress);
        QWidget::setTabOrder(lineEditAddress, lineEditNetmask);
        QWidget::setTabOrder(lineEditNetmask, comboBoxNATTMode);
        QWidget::setTabOrder(comboBoxNATTMode, lineEditNATTPort);
        QWidget::setTabOrder(lineEditNATTPort, lineEditNATTRate);
        QWidget::setTabOrder(lineEditNATTRate, comboBoxFragMode);
        QWidget::setTabOrder(comboBoxFragMode, lineEditFragSize);
        QWidget::setTabOrder(lineEditFragSize, checkBoxDPD);
        QWidget::setTabOrder(checkBoxDPD, checkBoxNotify);
        QWidget::setTabOrder(checkBoxNotify, checkBoxBanner);
        QWidget::setTabOrder(checkBoxBanner, checkBoxDNSEnable);
        QWidget::setTabOrder(checkBoxDNSEnable, checkBoxDNSAuto);
        QWidget::setTabOrder(checkBoxDNSAuto, lineEditDNSServer1);
        QWidget::setTabOrder(lineEditDNSServer1, lineEditDNSServer2);
        QWidget::setTabOrder(lineEditDNSServer2, lineEditDNSServer3);
        QWidget::setTabOrder(lineEditDNSServer3, lineEditDNSServer4);
        QWidget::setTabOrder(lineEditDNSServer4, checkBoxSuffixAuto);
        QWidget::setTabOrder(checkBoxSuffixAuto, lineEditDNSSuffix);
        QWidget::setTabOrder(lineEditDNSSuffix, comboBoxAuthMethod);
        QWidget::setTabOrder(comboBoxAuthMethod, tabWidgetAuthInfo);
        QWidget::setTabOrder(tabWidgetAuthInfo, comboBoxLocalIDType);
        QWidget::setTabOrder(comboBoxLocalIDType, lineEditLocalIDData);
        QWidget::setTabOrder(lineEditLocalIDData, checkBoxLocalIDOption);
        QWidget::setTabOrder(checkBoxLocalIDOption, comboBoxRemoteIDType);
        QWidget::setTabOrder(comboBoxRemoteIDType, lineEditRemoteIDData);
        QWidget::setTabOrder(lineEditRemoteIDData, checkBoxRemoteIDOption);
        QWidget::setTabOrder(checkBoxRemoteIDOption, lineEditCAName);
        QWidget::setTabOrder(lineEditCAName, toolButtonCAFile);
        QWidget::setTabOrder(toolButtonCAFile, lineEditCertName);
        QWidget::setTabOrder(lineEditCertName, toolButtonCertFile);
        QWidget::setTabOrder(toolButtonCertFile, lineEditPKeyName);
        QWidget::setTabOrder(lineEditPKeyName, toolButtonPKeyFile);
        QWidget::setTabOrder(toolButtonPKeyFile, lineEditPSK);
        QWidget::setTabOrder(lineEditPSK, comboBoxP1Exchange);
        QWidget::setTabOrder(comboBoxP1Exchange, comboBoxP1DHGroup);
        QWidget::setTabOrder(comboBoxP1DHGroup, comboBoxP1Cipher);
        QWidget::setTabOrder(comboBoxP1Cipher, comboBoxP1Keylen);
        QWidget::setTabOrder(comboBoxP1Keylen, comboBoxP1Hash);
        QWidget::setTabOrder(comboBoxP1Hash, lineEditP1LifeTime);
        QWidget::setTabOrder(lineEditP1LifeTime, lineEditP1LifeData);
        QWidget::setTabOrder(lineEditP1LifeData, checkBoxCheckpointID);
        QWidget::setTabOrder(checkBoxCheckpointID, comboBoxP2Transform);
        QWidget::setTabOrder(comboBoxP2Transform, comboBoxP2Keylen);
        QWidget::setTabOrder(comboBoxP2Keylen, comboBoxP2HMAC);
        QWidget::setTabOrder(comboBoxP2HMAC, comboBoxP2PFSGroup);
        QWidget::setTabOrder(comboBoxP2PFSGroup, comboBoxP2Compress);
        QWidget::setTabOrder(comboBoxP2Compress, lineEditP2LifeTime);
        QWidget::setTabOrder(lineEditP2LifeTime, lineEditP2LifeData);
        QWidget::setTabOrder(lineEditP2LifeData, comboBoxPolicyLevel);
        QWidget::setTabOrder(comboBoxPolicyLevel, checkBoxPolicyNailed);
        QWidget::setTabOrder(checkBoxPolicyNailed, checkBoxPolicyAuto);
        QWidget::setTabOrder(checkBoxPolicyAuto, treeWidgetPolicies);
        QWidget::setTabOrder(treeWidgetPolicies, pushButtonPolicyAdd);
        QWidget::setTabOrder(pushButtonPolicyAdd, pushButtonPolicyMod);
        QWidget::setTabOrder(pushButtonPolicyMod, pushButtonPolicyDel);
        QWidget::setTabOrder(pushButtonPolicyDel, buttonSave);
        QWidget::setTabOrder(buttonSave, buttonCancel);

        retranslateUi(qikeaSite);

        tabWidget->setCurrentIndex(0);
        comboBoxNATTMode->setCurrentIndex(0);
        comboBoxFragMode->setCurrentIndex(1);
        tabWidgetAuthInfo->setCurrentIndex(0);
        buttonSave->setDefault(true);


        QMetaObject::connectSlotsByName(qikeaSite);
    } // setupUi

    void retranslateUi(QDialog *qikeaSite)
    {
        qikeaSite->setWindowTitle(QApplication::translate("qikeaSite", "VPN Site Configuration", nullptr));
        groupBoxRemoteHost->setTitle(QApplication::translate("qikeaSite", "Remote Host", nullptr));
        textLabelHost->setText(QApplication::translate("qikeaSite", "Host Name or IP Address", nullptr));
        textLabelPort->setText(QApplication::translate("qikeaSite", "Port", nullptr));
        lineEditPort->setText(QApplication::translate("qikeaSite", "500", nullptr));
        textLabelConfigMethod->setText(QApplication::translate("qikeaSite", "Auto Configuration", nullptr));
        comboBoxConfigMethod->setItemText(0, QApplication::translate("qikeaSite", "disabled", nullptr));
        comboBoxConfigMethod->setItemText(1, QApplication::translate("qikeaSite", "ike config pull", nullptr));
        comboBoxConfigMethod->setItemText(2, QApplication::translate("qikeaSite", "ike config push", nullptr));
        comboBoxConfigMethod->setItemText(3, QApplication::translate("qikeaSite", "dhcp over ipsec", nullptr));

        groupBoxLocalHost->setTitle(QApplication::translate("qikeaSite", "Local Host", nullptr));
        textLabelAddressMethod->setText(QApplication::translate("qikeaSite", "Address Method", nullptr));
        comboBoxAddressMethod->setItemText(0, QApplication::translate("qikeaSite", "Use a virtual adapter and assigned address", nullptr));
        comboBoxAddressMethod->setItemText(1, QApplication::translate("qikeaSite", "Use a virtual adapter and random address", nullptr));
        comboBoxAddressMethod->setItemText(2, QApplication::translate("qikeaSite", "Use an existing adapter and current address", nullptr));

        textLabelMTU->setText(QApplication::translate("qikeaSite", "MTU", nullptr));
        lineEditMTU->setText(QApplication::translate("qikeaSite", "1380", nullptr));
        checkBoxAddressAuto->setText(QApplication::translate("qikeaSite", "Obtain Automatically", nullptr));
        textLabelAddress->setText(QApplication::translate("qikeaSite", "Address", nullptr));
        lineEditAddress->setInputMask(QApplication::translate("qikeaSite", "009 . 009 . 009 . 009; ", nullptr));
        lineEditAddress->setText(QApplication::translate("qikeaSite", "0 . 0 . 0 . 0", nullptr));
        textLabelNetmask->setText(QApplication::translate("qikeaSite", "Netmask", nullptr));
        lineEditNetmask->setInputMask(QApplication::translate("qikeaSite", "009 . 009 . 009 . 009; ", nullptr));
        lineEditNetmask->setText(QApplication::translate("qikeaSite", "0 . 0 . 0 . 0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QApplication::translate("qikeaSite", "General", nullptr));
        groupBoxFirewall->setTitle(QApplication::translate("qikeaSite", "Firewall Options", nullptr));
        textLabelNATTMode->setText(QApplication::translate("qikeaSite", "NAT Traversal", nullptr));
        comboBoxNATTMode->setItemText(0, QApplication::translate("qikeaSite", "disable", nullptr));
        comboBoxNATTMode->setItemText(1, QApplication::translate("qikeaSite", "enable", nullptr));
        comboBoxNATTMode->setItemText(2, QApplication::translate("qikeaSite", "force-draft", nullptr));
        comboBoxNATTMode->setItemText(3, QApplication::translate("qikeaSite", "force-rfc", nullptr));
        comboBoxNATTMode->setItemText(4, QApplication::translate("qikeaSite", "force-cisco-udp", nullptr));

        textLabelNATTPort->setText(QApplication::translate("qikeaSite", "NAT Traversal Port", nullptr));
        lineEditNATTPort->setText(QApplication::translate("qikeaSite", "4500", nullptr));
        label->setText(QString());
        textLabelNATTRate->setText(QApplication::translate("qikeaSite", "Keep-Alive Packet Rate", nullptr));
        lineEditNATTRate->setText(QApplication::translate("qikeaSite", "15", nullptr));
        textLabelNATTSecs->setText(QApplication::translate("qikeaSite", "Secs", nullptr));
        textLabelFragMode->setText(QApplication::translate("qikeaSite", "IKE Fragmentation", nullptr));
        comboBoxFragMode->setItemText(0, QApplication::translate("qikeaSite", "disable", nullptr));
        comboBoxFragMode->setItemText(1, QApplication::translate("qikeaSite", "enable", nullptr));
        comboBoxFragMode->setItemText(2, QApplication::translate("qikeaSite", "force", nullptr));

        textLabelFragSize->setText(QApplication::translate("qikeaSite", "Maximum Packet Size", nullptr));
        lineEditFragSize->setText(QApplication::translate("qikeaSite", "540", nullptr));
        textLabelFragBytes->setText(QApplication::translate("qikeaSite", "Bytes", nullptr));
        groupBoxOther->setTitle(QApplication::translate("qikeaSite", "Other Options", nullptr));
        checkBoxDPD->setText(QApplication::translate("qikeaSite", "Enable Dead Peer Detection", nullptr));
        checkBoxNotify->setText(QApplication::translate("qikeaSite", "Enable IKSAMP Failure Notifications", nullptr));
        checkBoxBanner->setText(QApplication::translate("qikeaSite", "Enable Client Login Banner", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabClient), QApplication::translate("qikeaSite", "Client", nullptr));
        checkBoxDNSEnable->setText(QApplication::translate("qikeaSite", "Enable DNS", nullptr));
        checkBoxDNSAuto->setText(QApplication::translate("qikeaSite", "Obtain Automatically", nullptr));
        textLabelDNSServer1->setText(QApplication::translate("qikeaSite", "Server Address #1", nullptr));
        lineEditDNSServer1->setInputMask(QApplication::translate("qikeaSite", "009 . 009 . 009 . 009; ", nullptr));
        lineEditDNSServer1->setText(QApplication::translate("qikeaSite", "0 . 0 . 0 . 0", nullptr));
        textLabelDNSServer2->setText(QApplication::translate("qikeaSite", "Server Address #2", nullptr));
        lineEditDNSServer2->setInputMask(QApplication::translate("qikeaSite", "009 . 009 . 009 . 009; ", nullptr));
        lineEditDNSServer2->setText(QApplication::translate("qikeaSite", "0 . 0 . 0 . 0", nullptr));
        textLabelDNSServer3->setText(QApplication::translate("qikeaSite", "Server Address #3", nullptr));
        lineEditDNSServer3->setInputMask(QApplication::translate("qikeaSite", "009 . 009 . 009 . 009; ", nullptr));
        lineEditDNSServer3->setText(QApplication::translate("qikeaSite", "0 . 0 . 0 . 0", nullptr));
        textLabelDNSServer4->setText(QApplication::translate("qikeaSite", "Server Address #4", nullptr));
        lineEditDNSServer4->setInputMask(QApplication::translate("qikeaSite", "009 . 009 . 009 . 009; ", nullptr));
        lineEditDNSServer4->setText(QApplication::translate("qikeaSite", "0 . 0 . 0 . 0", nullptr));
        checkBoxSuffixAuto->setText(QApplication::translate("qikeaSite", "Obtain Automatically", nullptr));
        textLabelDNSSuffix->setText(QApplication::translate("qikeaSite", "DNS Suffix", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabNameResolution), QApplication::translate("qikeaSite", "NameResolution", nullptr));
        textLabelAuthMethod->setText(QApplication::translate("qikeaSite", "Authentication Method", nullptr));
        comboBoxAuthMethod->setItemText(0, QApplication::translate("qikeaSite", "Hybrid RSA + XAuth", nullptr));
        comboBoxAuthMethod->setItemText(1, QApplication::translate("qikeaSite", "Hybrid GRP + XAuth", nullptr));
        comboBoxAuthMethod->setItemText(2, QApplication::translate("qikeaSite", "Mutual RSA + XAuth", nullptr));
        comboBoxAuthMethod->setItemText(3, QApplication::translate("qikeaSite", "Mutual PSK + XAuth", nullptr));
        comboBoxAuthMethod->setItemText(4, QApplication::translate("qikeaSite", "Mutual RSA", nullptr));
        comboBoxAuthMethod->setItemText(5, QApplication::translate("qikeaSite", "Mutual PSK", nullptr));

        textLabelLocalIDType->setText(QApplication::translate("qikeaSite", "Identification Type", nullptr));
        comboBoxLocalIDType->setItemText(0, QApplication::translate("qikeaSite", "ASN.1 Distinguished Name", nullptr));
        comboBoxLocalIDType->setItemText(1, QApplication::translate("qikeaSite", "Fully Qualified Domain Name", nullptr));
        comboBoxLocalIDType->setItemText(2, QApplication::translate("qikeaSite", "User Fully Qualified Domain Name", nullptr));
        comboBoxLocalIDType->setItemText(3, QApplication::translate("qikeaSite", "IP Address", nullptr));
        comboBoxLocalIDType->setItemText(4, QApplication::translate("qikeaSite", "Key Identifier", nullptr));

        textLabelLocalIDData->setText(QApplication::translate("qikeaSite", "Identification Data", nullptr));
        checkBoxLocalIDOption->setText(QApplication::translate("qikeaSite", "Obtain Identification Automatically", nullptr));
        tabWidgetAuthInfo->setTabText(tabWidgetAuthInfo->indexOf(tab), QApplication::translate("qikeaSite", "Local Identity", nullptr));
        textLabelRemoteIDType->setText(QApplication::translate("qikeaSite", "Identification Type", nullptr));
        comboBoxRemoteIDType->setItemText(0, QApplication::translate("qikeaSite", "Any", nullptr));
        comboBoxRemoteIDType->setItemText(1, QApplication::translate("qikeaSite", "ASN.1 Distinguished Name", nullptr));
        comboBoxRemoteIDType->setItemText(2, QApplication::translate("qikeaSite", "Fully Qualified Domain Name", nullptr));
        comboBoxRemoteIDType->setItemText(3, QApplication::translate("qikeaSite", "User Fully Qualified Domain Name", nullptr));
        comboBoxRemoteIDType->setItemText(4, QApplication::translate("qikeaSite", "IP Address", nullptr));
        comboBoxRemoteIDType->setItemText(5, QApplication::translate("qikeaSite", "Key Identifier", nullptr));

        textLabelRemoteIDData->setText(QApplication::translate("qikeaSite", "Identification Data", nullptr));
        checkBoxRemoteIDOption->setText(QApplication::translate("qikeaSite", "Identification Option", nullptr));
        tabWidgetAuthInfo->setTabText(tabWidgetAuthInfo->indexOf(tab_2), QApplication::translate("qikeaSite", "Remote Identity", nullptr));
        textLabelCAFile->setText(QApplication::translate("qikeaSite", "Server Certificate Authority File", nullptr));
        toolButtonCAFile->setText(QApplication::translate("qikeaSite", "...", nullptr));
        textLabelCertFile->setText(QApplication::translate("qikeaSite", "Client Certificate File", nullptr));
        toolButtonCertFile->setText(QApplication::translate("qikeaSite", "...", nullptr));
        textLabelPKeyFile->setText(QApplication::translate("qikeaSite", "Client Private Key File", nullptr));
        toolButtonPKeyFile->setText(QApplication::translate("qikeaSite", "...", nullptr));
        textLabelPSK->setText(QApplication::translate("qikeaSite", "Pre Shared Key", nullptr));
        tabWidgetAuthInfo->setTabText(tabWidgetAuthInfo->indexOf(TabPage), QApplication::translate("qikeaSite", "Credentials", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAuthentication), QApplication::translate("qikeaSite", "Authentication", nullptr));
        groupBoxP1Proposal->setTitle(QApplication::translate("qikeaSite", "Proposal Parameters", nullptr));
        textLabelP1Exchange->setText(QApplication::translate("qikeaSite", "Exchange Type", nullptr));
        comboBoxP1Exchange->setItemText(0, QApplication::translate("qikeaSite", "aggressive", nullptr));
        comboBoxP1Exchange->setItemText(1, QApplication::translate("qikeaSite", "main", nullptr));

        textLabelP1DHGroup->setText(QApplication::translate("qikeaSite", "DH Exchange", nullptr));
        comboBoxP1DHGroup->setItemText(0, QApplication::translate("qikeaSite", "auto", nullptr));
        comboBoxP1DHGroup->setItemText(1, QApplication::translate("qikeaSite", "group 1", nullptr));
        comboBoxP1DHGroup->setItemText(2, QApplication::translate("qikeaSite", "group 2", nullptr));
        comboBoxP1DHGroup->setItemText(3, QApplication::translate("qikeaSite", "group 5", nullptr));
        comboBoxP1DHGroup->setItemText(4, QApplication::translate("qikeaSite", "group 14", nullptr));
        comboBoxP1DHGroup->setItemText(5, QApplication::translate("qikeaSite", "group 15", nullptr));
        comboBoxP1DHGroup->setItemText(6, QApplication::translate("qikeaSite", "group 16", nullptr));
        comboBoxP1DHGroup->setItemText(7, QApplication::translate("qikeaSite", "group 17", nullptr));
        comboBoxP1DHGroup->setItemText(8, QApplication::translate("qikeaSite", "group 18", nullptr));

        textLabelP1Cipher->setText(QApplication::translate("qikeaSite", "Cipher Algorithm", nullptr));
        comboBoxP1Cipher->setItemText(0, QApplication::translate("qikeaSite", "auto", nullptr));
        comboBoxP1Cipher->setItemText(1, QApplication::translate("qikeaSite", "aes", nullptr));
        comboBoxP1Cipher->setItemText(2, QApplication::translate("qikeaSite", "blowfish", nullptr));
        comboBoxP1Cipher->setItemText(3, QApplication::translate("qikeaSite", "3des", nullptr));
        comboBoxP1Cipher->setItemText(4, QApplication::translate("qikeaSite", "des", nullptr));
        comboBoxP1Cipher->setItemText(5, QApplication::translate("qikeaSite", "cast", nullptr));

        textLabelP1Keylen->setText(QApplication::translate("qikeaSite", "Cipher Key Length", nullptr));
        comboBoxP1Keylen->setItemText(0, QApplication::translate("qikeaSite", "auto", nullptr));
        comboBoxP1Keylen->setItemText(1, QApplication::translate("qikeaSite", "128", nullptr));
        comboBoxP1Keylen->setItemText(2, QApplication::translate("qikeaSite", "136", nullptr));
        comboBoxP1Keylen->setItemText(3, QApplication::translate("qikeaSite", "144", nullptr));
        comboBoxP1Keylen->setItemText(4, QApplication::translate("qikeaSite", "152", nullptr));
        comboBoxP1Keylen->setItemText(5, QApplication::translate("qikeaSite", "160", nullptr));
        comboBoxP1Keylen->setItemText(6, QApplication::translate("qikeaSite", "168", nullptr));
        comboBoxP1Keylen->setItemText(7, QApplication::translate("qikeaSite", "176", nullptr));
        comboBoxP1Keylen->setItemText(8, QApplication::translate("qikeaSite", "184", nullptr));
        comboBoxP1Keylen->setItemText(9, QApplication::translate("qikeaSite", "192", nullptr));
        comboBoxP1Keylen->setItemText(10, QApplication::translate("qikeaSite", "200", nullptr));
        comboBoxP1Keylen->setItemText(11, QApplication::translate("qikeaSite", "208", nullptr));
        comboBoxP1Keylen->setItemText(12, QApplication::translate("qikeaSite", "216", nullptr));
        comboBoxP1Keylen->setItemText(13, QApplication::translate("qikeaSite", "224", nullptr));
        comboBoxP1Keylen->setItemText(14, QApplication::translate("qikeaSite", "232", nullptr));
        comboBoxP1Keylen->setItemText(15, QApplication::translate("qikeaSite", "240", nullptr));
        comboBoxP1Keylen->setItemText(16, QApplication::translate("qikeaSite", "248", nullptr));
        comboBoxP1Keylen->setItemText(17, QApplication::translate("qikeaSite", "256", nullptr));

        textLabelP1KeyBits->setText(QApplication::translate("qikeaSite", "Bits", nullptr));
        textLabelP1Hash->setText(QApplication::translate("qikeaSite", "Hash Algorithm", nullptr));
        comboBoxP1Hash->setItemText(0, QApplication::translate("qikeaSite", "auto", nullptr));
        comboBoxP1Hash->setItemText(1, QApplication::translate("qikeaSite", "sha1", nullptr));
        comboBoxP1Hash->setItemText(2, QApplication::translate("qikeaSite", "md5", nullptr));
        comboBoxP1Hash->setItemText(3, QApplication::translate("qikeaSite", "sha2-256", nullptr));
        comboBoxP1Hash->setItemText(4, QApplication::translate("qikeaSite", "sha2-384", nullptr));
        comboBoxP1Hash->setItemText(5, QApplication::translate("qikeaSite", "sha2-512", nullptr));

        textLabelP1LifeTime->setText(QApplication::translate("qikeaSite", "Key Life Time Limit", nullptr));
        lineEditP1LifeTime->setText(QApplication::translate("qikeaSite", "86400", nullptr));
        textLabelLifeSecs->setText(QApplication::translate("qikeaSite", "Secs", nullptr));
        textLabelLifeData->setText(QApplication::translate("qikeaSite", "Key Life Data Limit", nullptr));
        lineEditP1LifeData->setText(QApplication::translate("qikeaSite", "0", nullptr));
        textLabelLifeKBs->setText(QApplication::translate("qikeaSite", "KBs", nullptr));
        checkBoxCheckpointID->setText(QApplication::translate("qikeaSite", "Enable Check Point Compatible Vendor ID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPhase1), QApplication::translate("qikeaSite", "Phase 1", nullptr));
        groupBoxP2Proposal->setTitle(QApplication::translate("qikeaSite", "Proposal Parameters", nullptr));
        textLabelP2Transform->setText(QApplication::translate("qikeaSite", "Transform Algorithm", nullptr));
        comboBoxP2Transform->setItemText(0, QApplication::translate("qikeaSite", "auto", nullptr));
        comboBoxP2Transform->setItemText(1, QApplication::translate("qikeaSite", "esp-aes", nullptr));
        comboBoxP2Transform->setItemText(2, QApplication::translate("qikeaSite", "esp-blowfish", nullptr));
        comboBoxP2Transform->setItemText(3, QApplication::translate("qikeaSite", "esp-3des", nullptr));
        comboBoxP2Transform->setItemText(4, QApplication::translate("qikeaSite", "esp-des", nullptr));
        comboBoxP2Transform->setItemText(5, QApplication::translate("qikeaSite", "esp-cast", nullptr));

        textLabelP2Keylen->setText(QApplication::translate("qikeaSite", "Transform Key Length", nullptr));
        comboBoxP2Keylen->setItemText(0, QApplication::translate("qikeaSite", "auto", nullptr));
        comboBoxP2Keylen->setItemText(1, QApplication::translate("qikeaSite", "128", nullptr));
        comboBoxP2Keylen->setItemText(2, QApplication::translate("qikeaSite", "136", nullptr));
        comboBoxP2Keylen->setItemText(3, QApplication::translate("qikeaSite", "144", nullptr));
        comboBoxP2Keylen->setItemText(4, QApplication::translate("qikeaSite", "152", nullptr));
        comboBoxP2Keylen->setItemText(5, QApplication::translate("qikeaSite", "160", nullptr));
        comboBoxP2Keylen->setItemText(6, QApplication::translate("qikeaSite", "168", nullptr));
        comboBoxP2Keylen->setItemText(7, QApplication::translate("qikeaSite", "176", nullptr));
        comboBoxP2Keylen->setItemText(8, QApplication::translate("qikeaSite", "184", nullptr));
        comboBoxP2Keylen->setItemText(9, QApplication::translate("qikeaSite", "192", nullptr));
        comboBoxP2Keylen->setItemText(10, QApplication::translate("qikeaSite", "200", nullptr));
        comboBoxP2Keylen->setItemText(11, QApplication::translate("qikeaSite", "208", nullptr));
        comboBoxP2Keylen->setItemText(12, QApplication::translate("qikeaSite", "216", nullptr));
        comboBoxP2Keylen->setItemText(13, QApplication::translate("qikeaSite", "224", nullptr));
        comboBoxP2Keylen->setItemText(14, QApplication::translate("qikeaSite", "232", nullptr));
        comboBoxP2Keylen->setItemText(15, QApplication::translate("qikeaSite", "240", nullptr));
        comboBoxP2Keylen->setItemText(16, QApplication::translate("qikeaSite", "248", nullptr));
        comboBoxP2Keylen->setItemText(17, QApplication::translate("qikeaSite", "256", nullptr));

        textLabelP2KeyBits->setText(QApplication::translate("qikeaSite", "Bits", nullptr));
        textLabelP2HMAC->setText(QApplication::translate("qikeaSite", "HMAC Algorithm", nullptr));
        comboBoxP2HMAC->setItemText(0, QApplication::translate("qikeaSite", "auto", nullptr));
        comboBoxP2HMAC->setItemText(1, QApplication::translate("qikeaSite", "sha1", nullptr));
        comboBoxP2HMAC->setItemText(2, QApplication::translate("qikeaSite", "md5", nullptr));
        comboBoxP2HMAC->setItemText(3, QApplication::translate("qikeaSite", "sha2-256", nullptr));
        comboBoxP2HMAC->setItemText(4, QApplication::translate("qikeaSite", "sha2-384", nullptr));
        comboBoxP2HMAC->setItemText(5, QApplication::translate("qikeaSite", "sha2-512", nullptr));

        textLabelP2PFSGroup->setText(QApplication::translate("qikeaSite", "PFS Exchange", nullptr));
        comboBoxP2PFSGroup->setItemText(0, QApplication::translate("qikeaSite", "disabled", nullptr));
        comboBoxP2PFSGroup->setItemText(1, QApplication::translate("qikeaSite", "auto", nullptr));
        comboBoxP2PFSGroup->setItemText(2, QApplication::translate("qikeaSite", "group 1", nullptr));
        comboBoxP2PFSGroup->setItemText(3, QApplication::translate("qikeaSite", "group 2", nullptr));
        comboBoxP2PFSGroup->setItemText(4, QApplication::translate("qikeaSite", "group 5", nullptr));
        comboBoxP2PFSGroup->setItemText(5, QApplication::translate("qikeaSite", "group 14", nullptr));
        comboBoxP2PFSGroup->setItemText(6, QApplication::translate("qikeaSite", "group 15", nullptr));
        comboBoxP2PFSGroup->setItemText(7, QApplication::translate("qikeaSite", "group 16", nullptr));
        comboBoxP2PFSGroup->setItemText(8, QApplication::translate("qikeaSite", "group 17", nullptr));
        comboBoxP2PFSGroup->setItemText(9, QApplication::translate("qikeaSite", "group 18", nullptr));

        textLabelP2Compress->setText(QApplication::translate("qikeaSite", "Compression Algorithm", nullptr));
        comboBoxP2Compress->setItemText(0, QApplication::translate("qikeaSite", "disabled", nullptr));
        comboBoxP2Compress->setItemText(1, QApplication::translate("qikeaSite", "deflate", nullptr));

        textLabelP2LifeTime->setText(QApplication::translate("qikeaSite", "Key Life Time Limit", nullptr));
        lineEditP2LifeTime->setText(QApplication::translate("qikeaSite", "3600", nullptr));
        textLabelP2LifeSecs->setText(QApplication::translate("qikeaSite", "Secs", nullptr));
        textLabelP2LifeData->setText(QApplication::translate("qikeaSite", "Key Life Data Limit", nullptr));
        lineEditP2LifeData->setText(QApplication::translate("qikeaSite", "0", nullptr));
        textLabelP2LifeKBs->setText(QApplication::translate("qikeaSite", "KBs", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPhase2), QApplication::translate("qikeaSite", "Phase 2", nullptr));
        groupBoxPolicy->setTitle(QApplication::translate("qikeaSite", "IPsec Policy Configuration", nullptr));
        textLabelPolicyLevel->setText(QApplication::translate("qikeaSite", "Policy Generation Level", nullptr));
        comboBoxPolicyLevel->setItemText(0, QApplication::translate("qikeaSite", "auto", nullptr));
        comboBoxPolicyLevel->setItemText(1, QApplication::translate("qikeaSite", "require", nullptr));
        comboBoxPolicyLevel->setItemText(2, QApplication::translate("qikeaSite", "unique", nullptr));
        comboBoxPolicyLevel->setItemText(3, QApplication::translate("qikeaSite", "shared", nullptr));

        checkBoxPolicyNailed->setText(QApplication::translate("qikeaSite", "Maintain Persistent Security Associations", nullptr));
        checkBoxPolicyAuto->setText(QApplication::translate("qikeaSite", "Obtain Topology Automatically or Tunnel All", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetPolicies->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("qikeaSite", "Remote Network Resources", nullptr));
        pushButtonPolicyAdd->setText(QApplication::translate("qikeaSite", "Add", nullptr));
        pushButtonPolicyMod->setText(QApplication::translate("qikeaSite", "Modify", nullptr));
        pushButtonPolicyDel->setText(QApplication::translate("qikeaSite", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPolicy), QApplication::translate("qikeaSite", "Policy", nullptr));
        buttonSave->setText(QApplication::translate("qikeaSite", "&Save", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonSave->setShortcut(QApplication::translate("qikeaSite", "Alt+S", nullptr));
#endif // QT_NO_SHORTCUT
        buttonCancel->setText(QApplication::translate("qikeaSite", "&Cancel", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonCancel->setShortcut(QString());
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class qikeaSite: public Ui_qikeaSite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SITE_H
