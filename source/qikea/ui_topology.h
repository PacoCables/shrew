/********************************************************************************
** Form generated from reading UI file 'topology.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPOLOGY_H
#define UI_TOPOLOGY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qikeaTopology
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabelType_2;
    QComboBox *comboBoxType;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabelAddress;
    QLineEdit *lineEditAddress;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabelNetmask;
    QLineEdit *lineEditNetmask;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem1;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *qikeaTopology)
    {
        if (qikeaTopology->objectName().isEmpty())
            qikeaTopology->setObjectName(QString::fromUtf8("qikeaTopology"));
        qikeaTopology->resize(192, 153);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/site_mod.png"), QSize(), QIcon::Normal, QIcon::Off);
        qikeaTopology->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qikeaTopology);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabelType_2 = new QLabel(qikeaTopology);
        textLabelType_2->setObjectName(QString::fromUtf8("textLabelType_2"));
        textLabelType_2->setWordWrap(false);

        hboxLayout->addWidget(textLabelType_2);

        comboBoxType = new QComboBox(qikeaTopology);
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));

        hboxLayout->addWidget(comboBoxType);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabelAddress = new QLabel(qikeaTopology);
        textLabelAddress->setObjectName(QString::fromUtf8("textLabelAddress"));
        textLabelAddress->setWordWrap(false);

        hboxLayout1->addWidget(textLabelAddress);

        lineEditAddress = new QLineEdit(qikeaTopology);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditAddress->sizePolicy().hasHeightForWidth());
        lineEditAddress->setSizePolicy(sizePolicy);
        lineEditAddress->setAlignment(Qt::AlignHCenter);

        hboxLayout1->addWidget(lineEditAddress);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabelNetmask = new QLabel(qikeaTopology);
        textLabelNetmask->setObjectName(QString::fromUtf8("textLabelNetmask"));
        textLabelNetmask->setWordWrap(false);

        hboxLayout2->addWidget(textLabelNetmask);

        lineEditNetmask = new QLineEdit(qikeaTopology);
        lineEditNetmask->setObjectName(QString::fromUtf8("lineEditNetmask"));
        sizePolicy.setHeightForWidth(lineEditNetmask->sizePolicy().hasHeightForWidth());
        lineEditNetmask->setSizePolicy(sizePolicy);
        lineEditNetmask->setAlignment(Qt::AlignHCenter);

        hboxLayout2->addWidget(lineEditNetmask);


        vboxLayout->addLayout(hboxLayout2);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem1 = new QSpacerItem(41, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);

        buttonOk = new QPushButton(qikeaTopology);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);

        hboxLayout3->addWidget(buttonOk);

        buttonCancel = new QPushButton(qikeaTopology);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout3->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout3);


        retranslateUi(qikeaTopology);

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(qikeaTopology);
    } // setupUi

    void retranslateUi(QDialog *qikeaTopology)
    {
        qikeaTopology->setWindowTitle(QApplication::translate("qikeaTopology", "Tolology Entry", nullptr));
        textLabelType_2->setText(QApplication::translate("qikeaTopology", "Type", nullptr));
        comboBoxType->setItemText(0, QApplication::translate("qikeaTopology", "Include", nullptr));
        comboBoxType->setItemText(1, QApplication::translate("qikeaTopology", "Exclude", nullptr));

        textLabelAddress->setText(QApplication::translate("qikeaTopology", "Address", nullptr));
        lineEditAddress->setInputMask(QApplication::translate("qikeaTopology", "009 . 009 . 009 . 009; ", nullptr));
        lineEditAddress->setText(QApplication::translate("qikeaTopology", "0 . 0 . 0 . 0", nullptr));
        textLabelNetmask->setText(QApplication::translate("qikeaTopology", "Netmask", nullptr));
        lineEditNetmask->setInputMask(QApplication::translate("qikeaTopology", "009 . 009 . 009 . 009; ", nullptr));
        lineEditNetmask->setText(QApplication::translate("qikeaTopology", "0 . 0 . 0 . 0", nullptr));
        buttonOk->setText(QApplication::translate("qikeaTopology", "&Ok", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonOk->setShortcut(QApplication::translate("qikeaTopology", "Alt+O", nullptr));
#endif // QT_NO_SHORTCUT
        buttonCancel->setText(QApplication::translate("qikeaTopology", "&Cancel", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonCancel->setShortcut(QString());
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class qikeaTopology: public Ui_qikeaTopology {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPOLOGY_H
