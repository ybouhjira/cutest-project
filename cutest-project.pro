TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
all_tests.c \
suite1.c \
CuTest/CuTest.c

HEADERS += CuTest/CuTest.h

