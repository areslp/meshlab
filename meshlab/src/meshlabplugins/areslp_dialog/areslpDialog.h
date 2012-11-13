/*
 * =====================================================================================
 *
 *       Filename:  areslpDialog.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2012年10月01日 19时25分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include "ui_areslpDialog.h"
#include <vector>
#include <QtGui>

class AreslpDialog : public QDialog
{
    Q_OBJECT
public:
    AreslpDialog(QWidget *parent = 0);

private slots:
    void on_buttonok_clicked();

private:
    Ui::areslpDialog ui;
public:
    std::vector<int> pointset_;
    std::vector<int> faceset_;
    std::vector<int> patchset_;
};
