#include <QApplication>
#include "billsplitter.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    BillSplitter window;
    window.show();
    return app.exec();
}
