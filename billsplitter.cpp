#include "billsplitter.h"
#include <QMainWindow>


BillSplitter::BillSplitter(QWidget *parent)
    : QMainWindow(parent) {
    setWindowTitle("Bill Splitter");
    resize(800, 600);
}

BillSplitter::~BillSplitter() {}

