#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        cityField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())


{
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:yellow' color='red'>* First Name</font>", firstNameField);
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:yellow' color='red'>* Last Name</font>", lastNameField);
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:yellow' color='red'>Address</font>", addressField);
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:yellow' color='red'>City</font>", cityField);
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:yellow' color='red'>* Phone Number</font>", phoneNumberField);
    addRow("<font style='font-family:Georgia;font-weight:bold;background-color:yellow' color='red'>Email</font>", emailField);

}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    cityField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");


}



