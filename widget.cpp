#include "widget.h"
#include "ui_widget.h"

#include <QFileDialog>
#include <QDir>
#include <QProcess>
#include <QDebug>
#include <QByteArray>
#include <QClipboard>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

     clipboard = QApplication::clipboard();
    process = new QProcess(this);

     ui->log_name->setText("ubuntu");
     ui->log_domain->setText("meet.aisleschool.co.jp");
     ui->log_pem->setText("C:/Users/user2/Downloads/meet-aisleschool.pem");
     ui->log_pass->setText("3VxqXmDuf23i");
     log_pem=ui->log_pem->text();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_log_url_btn_clicked()
{
    log_pem = QFileDialog::getOpenFileUrl(this, "Select .pem", QUrl(""),"*.pem").toLocalFile();
    ui->log_pem->setText(log_pem);
}


void Widget::on_log_btn_clicked()
{
    log_name = ui->log_name->text();
    log_domain = ui->log_domain->text();
    log_pass = ui->log_pass->text();

//    if(log_name==""&&log_domain==""&&log_pem==""&&log_pass==""){
//        return;
//    }
//    QString cur_dir=QDir::currentPath();
    QString program = "C:/program files/Git/bin/sh.exe";
    QStringList arguments = QStringList() << "/h";
    process->startDetached(program);
    process->waitForFinished();

    qDebug()<<"log btn";
    ui->log_txt1->setText("chmod 400 "+log_pem);
    ui->log_txt2->setText("ssh -i "+log_pem+" "+log_name+"@"+log_domain);
    ui->log_txt3->setText(log_pass);


}

void Widget::on_cp1_btn_clicked()
{
    clipboard->setText(ui->log_txt1->text());
}

void Widget::on_cp2_btn_clicked()
{
    clipboard->setText(ui->log_txt2->text());
}


void Widget::on_cp3_btn_clicked()
{
    clipboard->setText(ui->log_txt3->text());
}


void Widget::on_add_btn_clicked()
{
    ui->add_txt->setText("sudo prosodyctl register "+ui->add_name->text()+" "+ui->add_domain->text()+" "+ui->add_pass->text());
}


void Widget::on_cp1_btn_2_clicked()
{
    clipboard->setText(ui->add_txt->text());
}


void Widget::on_del_btn_clicked()
{
    ui->del_txt->setText("sudo prosodyctl unregister "+ui->del_name->text()+" "+ui->del_domain->text()+" "+ui->del_pass->text());
}


void Widget::on_cp1_btn_3_clicked()
{
    clipboard->setText(ui->del_txt->text());
}


void Widget::on_list_btn_clicked()
{
    clipboard->setText("sudo su -c 'ls -l /var/lib/prosody/*/accounts/*'");
}


void Widget::on_help_btn_clicked()
{
    QString txt="- VPSにログインする<br/>"
            "アカウントを管理するには、VPS にログインする必要があります。<br/>"
            "VPSログイン部分に各値を入力し、生成ボタンをクリックしてください。<br/>"
            "次に、コンピューター上で git-bash.exe を実行します。 インストールしていない場合は、インストールして実行してください。<br/>"
            "次に、コピー ボタンをクリックして内容を git-bash ウィンドウに貼り付け、Enter をクリックします。<br/>"
            "コピー１からコピー３まで繰り返してください。 ログイン後、ユーザー アカウントを追加または削除できます。<hr/>"
            "- 新しいユーザーアカウントを追加する場合は、ユーザー追加部分に必要な項目を正しく入力し、生成ボタンをクリックしてください。<br/>"
            "次に、コピーボタンをクリックして、ログインした git-bash ウィンドウに貼り付けます。<hr/>"
            "- アカウントの一覧を確認したい場合は、「ユーザーリストコマンドのコピー」ボタンをクリックし、git-bash に貼り付けて Enter をクリックします。<hr/>"
            "- ユーザーアカウントの削除<br/>"
            "ユーザーアカウントを削除したい場合は、そのアカウントの情報を知っておく必要があります。<br/>"
            " ユーザー削除部分に必要な値を挿入する必要があります。<br/>"
            "次に、生成ボタンをクリックしてコンテンツをコピーしてください。<br/>";
    QMessageBox::about(this, "Help",txt);
}

