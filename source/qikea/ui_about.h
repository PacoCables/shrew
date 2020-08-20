/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qikeaAbout
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *labelLogo;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *textLabelLecense;
    QSpacerItem *spacerItem;
    QLabel *textLabelVersion;
    QTextBrowser *textBrowser;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *buttonOk;

    void setupUi(QDialog *qikeaAbout)
    {
        if (qikeaAbout->objectName().isEmpty())
            qikeaAbout->setObjectName(QString::fromUtf8("qikeaAbout"));
        qikeaAbout->setWindowModality(Qt::ApplicationModal);
        qikeaAbout->resize(330, 339);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qikeaAbout->sizePolicy().hasHeightForWidth());
        qikeaAbout->setSizePolicy(sizePolicy);
        qikeaAbout->setMaximumSize(QSize(330, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/ikea.png"), QSize(), QIcon::Normal, QIcon::Off);
        qikeaAbout->setWindowIcon(icon);
        qikeaAbout->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(qikeaAbout);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        labelLogo = new QLabel(qikeaAbout);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelLogo->sizePolicy().hasHeightForWidth());
        labelLogo->setSizePolicy(sizePolicy1);
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/png/logo_ssoft.png")));

        vboxLayout->addWidget(labelLogo);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 0, 9, 9);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabelLecense = new QLabel(qikeaAbout);
        textLabelLecense->setObjectName(QString::fromUtf8("textLabelLecense"));

        hboxLayout->addWidget(textLabelLecense);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        textLabelVersion = new QLabel(qikeaAbout);
        textLabelVersion->setObjectName(QString::fromUtf8("textLabelVersion"));

        hboxLayout->addWidget(textLabelVersion);


        vboxLayout1->addLayout(hboxLayout);

        textBrowser = new QTextBrowser(qikeaAbout);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        vboxLayout1->addWidget(textBrowser);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        buttonOk = new QPushButton(qikeaAbout);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        hboxLayout1->addWidget(buttonOk);


        vboxLayout1->addLayout(hboxLayout1);


        vboxLayout->addLayout(vboxLayout1);


        retranslateUi(qikeaAbout);

        QMetaObject::connectSlotsByName(qikeaAbout);
    } // setupUi

    void retranslateUi(QDialog *qikeaAbout)
    {
        qikeaAbout->setWindowTitle(QApplication::translate("qikeaAbout", "Dialog", nullptr));
        labelLogo->setText(QString());
        textLabelLecense->setText(QApplication::translate("qikeaAbout", "License ", nullptr));
        textLabelVersion->setText(QApplication::translate("qikeaAbout", "Ver 2.0.0", nullptr));
        textBrowser->setHtml(QApplication::translate("qikeaAbout", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Copyright (C) 2012</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Shrew Soft Inc.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">All rights reserved.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\">Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1) Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2) Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/"
                        "or other materials provided with the distribution.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3) Redistributions in any form must be accompanied by information on how to obtain complete source code for the software and any accompanying software that uses the software.  The source code must either be included in the distribution or be available for no more than the cost of distribution plus a nominal fee, and must be freely redistributable under reasonable conditions.  For an executable file, complete source code means the source code for all modules it contains.  It does not include source code for modules or files that typically accompany the major components of the operating system on which the executable file runs.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:"
                        "0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">THIS SOFTWARE IS PROVIDED BY SHREW SOFT INC ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT, ARE DISCLAIMED.  IN NO EVENT SHALL SHREW SOFT INC BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.</p></body></html>", nullptr));
        buttonOk->setText(QApplication::translate("qikeaAbout", "&Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qikeaAbout: public Ui_qikeaAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
