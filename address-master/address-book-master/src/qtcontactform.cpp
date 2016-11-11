#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        bgpField(new QLineEdit())

{
    QPalette palette;
    palette.setColor(QPalette::Text,Qt::blue);
    QFont font("Times", 12, QFont::Bold,false);
    firstNameField->setPlaceholderText("Enter Characters Only");
    firstNameField->setFont(font);
    firstNameField->setPalette(palette);
    addRow("First Name", firstNameField);
    lastNameField->setPlaceholderText("Enter Characters Only");
    lastNameField->setFont(font);
    lastNameField->setPalette(palette);
    addRow("Last Name", lastNameField);
    addressField->setPlaceholderText("Enter Ur Valid Address");
    addressField->setFont(font);
    addressField->setPalette(palette);
    addRow("Address", addressField);
    phoneNumberField->setPlaceholderText("Enter 10 Digit Phone No's");
    phoneNumberField->setFont(font);
    phoneNumberField->setPalette(palette);
    addRow("Phone Number", phoneNumberField);
    emailField->setPlaceholderText("Enter Ur Valid E-Mail ID");
    emailField->setFont(font);
    emailField->setPalette(palette);
    addRow("Email", emailField);
    bgpField->setPlaceholderText("Enter Ur Blood Group");
    bgpField->setFont(font);
    bgpField->setPalette(palette);
    addRow("Blood Group", bgpField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    bgpField->setText("");
}
