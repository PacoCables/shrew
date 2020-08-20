/********************************************************************************
** Form generated from reading UI file 'filepass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEPASS_H
#define UI_FILEPASS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ikecFilePass
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabelUsername;
    QLineEdit *lineEditPassword;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *ikecFilePass)
    {
        if (ikecFilePass->objectName().isEmpty())
            ikecFilePass->setObjectName(QString::fromUtf8("ikecFilePass"));
        ikecFilePass->setWindowModality(Qt::ApplicationModal);
        ikecFilePass->resize(249, 88);
        const QIcon icon = QIcon(QString::fromUtf8(":/png/png/ikec.png"));
        ikecFilePass->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(ikecFilePass);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabelUsername = new QLabel(ikecFilePass);
        textLabelUsername->setObjectName(QString::fromUtf8("textLabelUsername"));
        textLabelUsername->setFrameShape(QFrame::NoFrame);
        textLabelUsername->setFrameShadow(QFrame::Plain);
        textLabelUsername->setWordWrap(false);

        vboxLayout->addWidget(textLabelUsername);

        lineEditPassword = new QLineEdit(ikecFilePass);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        vboxLayout->addWidget(lineEditPassword);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(52, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonOk = new QPushButton(ikecFilePass);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonOk->sizePolicy().hasHeightForWidth());
        buttonOk->setSizePolicy(sizePolicy);
        buttonOk->setMaximumSize(QSize(32767, 20));
        buttonOk->setAutoDefault(true);

        hboxLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(ikecFilePass);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        sizePolicy.setHeightForWidth(buttonCancel->sizePolicy().hasHeightForWidth());
        buttonCancel->setSizePolicy(sizePolicy);
        buttonCancel->setMaximumSize(QSize(32767, 20));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(ikecFilePass);

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(ikecFilePass);
    } // setupUi

    void retranslateUi(QDialog *ikecFilePass)
    {
        ikecFilePass->setWindowTitle(QApplication::translate("ikecFilePass", "File Password", nullptr));
        textLabelUsername->setText(QApplication::translate("ikecFilePass", "Please enter the file password", nullptr));
        buttonOk->setText(QApplication::translate("ikecFilePass", "&OK", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonOk->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        buttonCancel->setText(QApplication::translate("ikecFilePass", "&Cancel", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonCancel->setShortcut(QString());
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class ikecFilePass: public Ui_ikecFilePass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEPASS_H
