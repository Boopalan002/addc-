#include "addressbookcontroller.h"
#include "sqlitedatasource.h"
#include <QCoreApplication>
#include <QApplication>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QDebug>

bool createConnection();


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    if (!createConnection())
    {

            qDebug() << "Not connected!";
            return 1;
    }
    else
    {

            qDebug() << "Connected!";
            QSqlQuery query;
            query.exec("SELECT name FROM Contacts");
            while (query.next())
            {
                QString name = query.value(0).toString();
                qDebug() << "name:" << name;
            }
            return 0;
    }

    return app.exec();
}

bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("addressbook");
    db.setUserName("root");
    db.setPassword("root");
    if (!db.open())
    {
        qDebug() << "Database error occurred";
        return false;
    }
    return true;
}




    //app.setStyleSheet("QMainWindow{background-image:url(D:/qt/address-book-master/test.jpg)}");
    //SQLiteDataSource dSrc("contacts.db", true);
    //AddressBookController myBook(dSrc);
    //myBook.start();



