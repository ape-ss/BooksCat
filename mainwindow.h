#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QComboBox>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QLineEdit *edQuery;
    QLabel *lbShow;
    QComboBox *cbFilter;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void SetupFindToolbar();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

//0234 23151
