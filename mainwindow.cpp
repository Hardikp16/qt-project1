/**
* Mainwindow program
*
**/

#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
/* Main window contecting the buttons to the lcd
 * displays the count
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->connect(this->ui->pushButton_2, SIGNAL(clicked()), this,SLOT(on_pushButton_2_clicked()));
    this->connect(this->ui->pushButton_3, SIGNAL(clicked()), this,SLOT(on_pushButton_3_clicked()));
    this->count=0;
    this->ui->lcdNumber->display(count);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked() //!< a Button fucntion that outputs that it was pressed
{
    std::cout << "pushbutton " << std::endl;
}


void MainWindow::on_pushButton_2_clicked() //!< a Button function that increments by 1.
{
    count=count+1; //!< increment count by 1 */
    this->ui->lcdNumber->display(count);
    //std::cout << "increment by 1" << std::endl;
}

void MainWindow::on_lcdNumber_overflow()
{

}
void MainWindow::on_pushButton_3_clicked() //!< a Button function that decremetns by 1.
{
    count=count-1; //!< decrement count by 1 */
    this->ui->lcdNumber->display(count);
}

