/********************************************************************************
** Form generated from reading UI file 'conflict.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFLICT_H
#define UI_CONFLICT_H

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

class Ui_qikeaConflict
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textConflictMessage;
    QLineEdit *lineConflictName;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *buttonOverwrite;
    QPushButton *buttonContinue;

    void setupUi(QDialog *qikeaConflict)
    {
        if (qikeaConflict->objectName().isEmpty())
            qikeaConflict->setObjectName(QString::fromUtf8("qikeaConflict"));
        qikeaConflict->resize(292, 99);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/ikea.png"), QSize(), QIcon::Normal, QIcon::Off);
        qikeaConflict->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qikeaConflict);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textConflictMessage = new QLabel(qikeaConflict);
        textConflictMessage->setObjectName(QString::fromUtf8("textConflictMessage"));
        textConflictMessage->setAlignment(Qt::AlignVCenter);
        textConflictMessage->setWordWrap(true);

        vboxLayout->addWidget(textConflictMessage);

        lineConflictName = new QLineEdit(qikeaConflict);
        lineConflictName->setObjectName(QString::fromUtf8("lineConflictName"));

        vboxLayout->addWidget(lineConflictName);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonOverwrite = new QPushButton(qikeaConflict);
        buttonOverwrite->setObjectName(QString::fromUtf8("buttonOverwrite"));
        buttonOverwrite->setAutoDefault(false);

        hboxLayout->addWidget(buttonOverwrite);

        buttonContinue = new QPushButton(qikeaConflict);
        buttonContinue->setObjectName(QString::fromUtf8("buttonContinue"));
        buttonContinue->setAutoDefault(true);

        hboxLayout->addWidget(buttonContinue);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(qikeaConflict);

        buttonOverwrite->setDefault(false);
        buttonContinue->setDefault(true);


        QMetaObject::connectSlotsByName(qikeaConflict);
    } // setupUi

    void retranslateUi(QDialog *qikeaConflict)
    {
        qikeaConflict->setWindowTitle(QApplication::translate("qikeaConflict", "Naming Conflict Detected", nullptr));
        textConflictMessage->setText(QApplication::translate("qikeaConflict", "A file with the same name already exists. Please select overwrite or enter a different name to continue.", nullptr));
        buttonOverwrite->setText(QApplication::translate("qikeaConflict", "&Overwrite", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonOverwrite->setShortcut(QApplication::translate("qikeaConflict", "Alt+O", nullptr));
#endif // QT_NO_SHORTCUT
        buttonContinue->setText(QApplication::translate("qikeaConflict", "&Continue", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonContinue->setShortcut(QApplication::translate("qikeaConflict", "Alt+C", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class qikeaConflict: public Ui_qikeaConflict {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFLICT_H
