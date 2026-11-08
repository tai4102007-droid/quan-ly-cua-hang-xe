#pragma once
#include"Vehicle.h"
#include"Customer.h"
#include"Bill.h"
#include<string>
#include<vector>
#include<map>
class Shop{
private:
string tenCuaHang;
vector<Vehicle*>
vector<Customer>
vector<Bill>
public:
Shop(const string& tenCuaHang);
~Shop();
string gettenCuaHang()const;
void settenCuaHang()const;
bool themXe(Vehicle* xe);
