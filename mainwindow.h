/**
* @file
* @author Hardik Prajapati
* @version 1.0
* @section LICENSE
*  HNP (R)
* @section DESCRIPTION
*  A program that increments and decrements to the LCD
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/*! \brief Main class
 *         of my application for project CS340.
 *
 *  Inherits for QMainWindow from Qt
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     /**
      * Constructor for MainWindow
      *
      * @param parent a parent widget, can be null
      */
    MainWindow(QWidget *parent = 0);
    ~MainWindow();




private slots:
    /**
     * 3 Buttons for MainWindow and 1 LCD to display result
     *
     * @param parent a parent widget, can be null
     */
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lcdNumber_overflow();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    int count; /*!< an integer value */
};

#endif // MAINWINDOW_H
