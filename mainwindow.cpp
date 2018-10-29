#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTranslator>
#include <QSettings>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionChinese_Simplify_triggered()
{
    QTranslator *translator = new QTranslator();
    if(translator->load("../untitled1/simplify.qm"))
    {   qApp->installTranslator(translator);
        ui->retranslateUi(this);
    }else{
        printf("don't have the file");

    }
}

void MainWindow::on_actionChinese_Tranditional_triggered()
{
    QTranslator *translator = new QTranslator();
    if(translator->load("../untitled1/traditional.qm"))
    {   qApp->installTranslator(translator);
        ui->retranslateUi(this);
    }else{
        printf("don't have the file");

    }
}

void MainWindow::on_actionEnglish_triggered()
{
    QTranslator *translator = new QTranslator();
    if(translator->load("../untitled1/english.qm"))
    {   qApp->installTranslator(translator);
        ui->retranslateUi(this);
    }else{
        printf("don't have the file");

    }
}



void MainWindow::on_actionJapanese_triggered()
{
    QTranslator *translator = new QTranslator();
    if(translator->load("../untitled1/japanses.qm"))
    {   qApp->installTranslator(translator);
        ui->retranslateUi(this);
    }else{
        printf("don't have the file");

    }

}

void MainWindow::on_actionRussian_triggered()
{
    QTranslator *translator = new QTranslator();
    if(translator->load("../untitled1/russain.qm"))
    {   qApp->installTranslator(translator);
        ui->retranslateUi(this);
    }else{
        printf("don't have the file");

    }
}
