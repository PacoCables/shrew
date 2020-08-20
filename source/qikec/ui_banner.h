/********************************************************************************
** Form generated from reading UI file 'banner.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANNER_H
#define UI_BANNER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ikecBanner
{
public:
    QVBoxLayout *vboxLayout;
    QTextBrowser *textBrowserMOTD;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *buttonOk;

    void setupUi(QDialog *ikecBanner)
    {
        if (ikecBanner->objectName().isEmpty())
            ikecBanner->setObjectName(QString::fromUtf8("ikecBanner"));
        ikecBanner->resize(340, 204);
        const QIcon icon = QIcon(QString::fromUtf8(":/png/png/ikec.png"));
        ikecBanner->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(ikecBanner);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textBrowserMOTD = new QTextBrowser(ikecBanner);
        textBrowserMOTD->setObjectName(QString::fromUtf8("textBrowserMOTD"));

        vboxLayout->addWidget(textBrowserMOTD);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(386, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonOk = new QPushButton(ikecBanner);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setWindowModality(Qt::ApplicationModal);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonOk->sizePolicy().hasHeightForWidth());
        buttonOk->setSizePolicy(sizePolicy);
        buttonOk->setMaximumSize(QSize(32767, 20));
        buttonOk->setAutoDefault(true);

        hboxLayout->addWidget(buttonOk);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(buttonOk, textBrowserMOTD);

        retranslateUi(ikecBanner);

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(ikecBanner);
    } // setupUi

    void retranslateUi(QDialog *ikecBanner)
    {
        ikecBanner->setWindowTitle(QApplication::translate("ikecBanner", "Login Banner", nullptr));
        buttonOk->setText(QApplication::translate("ikecBanner", "&OK", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonOk->setShortcut(QString());
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class ikecBanner: public Ui_ikecBanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANNER_H
