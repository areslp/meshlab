/*
 * =====================================================================================
 *
 *       Filename:  areslpDialog.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2012年10月01日 19时51分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "areslpDialog.h"
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string/split.hpp>
#include <boost/foreach.hpp>
#include <boost/algorithm/string.hpp>
#include <iostream>

AreslpDialog::AreslpDialog(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
}


void AreslpDialog::on_buttonok_clicked()
{
    pointset_.clear();
    faceset_.clear();
    std::string pp = ui.pointset->text().toStdString();
    std::string ff = ui.faceset->text().toStdString();
    std::string papa = ui.patchset->text().toStdString();
    std::cout<<"pp:"<<pp<<std::endl;
    std::cout<<"ff:"<<ff<<std::endl;
    std::cout<<"papa:"<<papa<<std::endl;
    std::vector<std::string> temp;
    boost::split(temp, pp, boost::is_any_of(" ,;-"));
    BOOST_FOREACH(std::string str, temp) {
        if (str=="") {
            continue;
        }
        std::cout<<"point str:"<<str<<endl;
        pointset_.push_back(boost::lexical_cast<int>(str));
    }
    temp.clear();
    boost::split(temp, ff, boost::is_any_of(" ,;-"));
    BOOST_FOREACH(std::string str, temp) {
        if (str=="") {
            continue;
        }
        std::cout<<"face str:"<<str<<endl;
        faceset_.push_back(boost::lexical_cast<int>(str));
    }
    temp.clear();
    boost::split(temp, papa, boost::is_any_of(" ,;-"));
    BOOST_FOREACH(std::string str, temp) {
        if (str=="") {
            continue;
        }
        std::cout<<"patch str:"<<str<<endl;
        patchset_.push_back(boost::lexical_cast<int>(str));
    }
    done(0);
}
