#ifndef PASSWORDMANAGER_H
#define PASSWORDMANAGER_H

#include "addItem.h"
#include "ui_passwordManager.h"

class PasswordManager : public QMainWindow
{
    Q_OBJECT

public:
    explicit PasswordManager(QWidget *parent = nullptr);
    ~PasswordManager();
    void getUser(std::string user);

private slots:
    void addPress();
    void deletePress();
    void editPress();

private:
    Ui::passwordManagerClass ui;
    std::string user;
    AddItem* addItemWindow;
};

#endif // PASSWORDMANAGER_H