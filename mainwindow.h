#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionChinese_Simplify_triggered();

    void on_actionChinese_Tranditional_triggered();

    void on_actionEnglish_triggered();

    void on_actionJapanese_triggered();

    void on_actionRussian_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
