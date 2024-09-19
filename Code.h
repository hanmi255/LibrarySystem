#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Code.h"

class Code : public QMainWindow
{
    Q_OBJECT

public:
    Code(QWidget *parent = nullptr);
    ~Code();

private:
    Ui::CodeClass ui;
};
