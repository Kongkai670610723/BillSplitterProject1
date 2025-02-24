QT       += core gui widgets   # ใช้ Qt Core, GUI และ Widgets (สำหรับสร้าง UI)

TARGET = BillSplitter          # กำหนดชื่อแอพ
TEMPLATE = app                 # กำหนดว่าเป็นแอพพลิเคชัน (app) ไม่ใช่ไลบรารี

SOURCES += main.cpp \           # ระบุไฟล์ .cpp ที่จะใช้ในโปรเจกต์
           billsplitter.cpp \
           main.cpp

HEADERS += billsplitter.h \       # ระบุไฟล์ .h ที่ใช้ประกาศคลาส
    main.h

FORMS += billsplitter.ui \        # ระบุไฟล์ .ui ที่สร้างจาก Qt Designer
    billsplitter.ui
