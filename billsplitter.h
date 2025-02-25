#ifndef BILLSPLITTER_H
#define BILLSPLITTER_H

#include <QMainWindow>

class BillSplitter : public QMainWindow {
    Q_OBJECT  // สำคัญมากสำหรับ Qt หากไม่มีอาจเกิดปัญหา MOC

public:
    explicit BillSplitter(QWidget *parent = nullptr);
    ~BillSplitter();
};

#endif // BILLSPLITTER_H
