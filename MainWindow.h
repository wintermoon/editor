#ifndef _MainWindow_h
#define _MainWindow_h

#include <QMainWindow>



namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    public:
        explicit MainWindow(QWidget *parent = 0);

        ~MainWindow();

    private:
        Ui::MainWindow *ui;
};

#endif
