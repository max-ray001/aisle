#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

//    QProcess *process;
    QClipboard *clipboard;
    QString log_name="";
    QString log_domain="";
    QString log_pem="";
    QString log_pass="";

//    void executeCmdCommand();

private slots:
    void on_log_url_btn_clicked();

    void on_log_btn_clicked();



    void on_cp1_btn_clicked();

    void on_cp2_btn_clicked();

    void on_cp3_btn_clicked();

    void on_add_btn_clicked();

    void on_cp1_btn_2_clicked();

    void on_del_btn_clicked();

    void on_cp1_btn_3_clicked();

    void on_list_btn_clicked();

    void on_help_btn_clicked();

private:
    Ui::Widget *ui;
    QProcess *process;
};
#endif // WIDGET_H
