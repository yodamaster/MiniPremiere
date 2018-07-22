#ifndef DIALOG_EDIT_H
#define DIALOG_EDIT_H



#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <string>
#include "../common/command.h"
//#include "VideoPlay.h"
//#include "stdafx.h"
//#include "Video.h"
//using namespace cv;

//extern VideoPlay globalplay;

namespace Ui {
class Dialog_edit;
}

class Dialog_edit : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_edit(QWidget *parent = 0);
    ~Dialog_edit();
    void setSpeedChangeCommand(std::shared_ptr<Command>);
    //void setCutConfirmCommand(std::shared_ptr<Command> ptr_cutconfirm);
    std::shared_ptr<Notification> get_pop_window_notification();

    void pop_window(const string &tip);

private:
    Ui::Dialog_edit *ui;
    std::shared_ptr<Command> ptr_speedchangeCommand;
    //std::shared_ptr<Command> ptr_cutconfirmCommand;
    std::shared_ptr<Notification> pop_window_notification;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // DIALOG_EDIT_H
