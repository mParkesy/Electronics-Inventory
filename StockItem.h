/* 
 * File:   StockItem.h
 * Author: Parkesy
 *
 * Created on 19 April 2018, 12:20
 */

#include <string>
#include <vector>
using namespace std;

#ifndef StockItem_H
#define StockItem_H

class StockItem {
private:
    string itemType;
    string stockCode;
    int stock;
    int price;

public:
    StockItem();
    StockItem(string type, string code, int number, int pence);
    ~StockItem();
    virtual string getType();
    virtual string getCode();
    virtual int getStock();
    virtual int getPrice();
};

class Resistor : public StockItem {
private:
    string resistance;
public:
    Resistor(string resistance, string type, string code, int number, int pence);
    string getResistance();
    double getNumericalResistance();
};

class Capacitor : public StockItem {
private:
    string capacitance;
public:
    Capacitor(string capacitance, string type, string code, int number, int pence);
    string getCapacitance();
};

class Diode : public StockItem {
public:
    Diode(string type, string code, int number, int pence);
};

class Transistor : public StockItem {
private:
    string transistorType;
public:
    Transistor(string transistorType, string type, string code, int number, int pence);
    string getTransistorType();
};

class IC : public StockItem {
private:
    string ICtype;
public:
    IC(string ICtype, string type, string code, int number, int pence);
    string getICtype();
};

#endif