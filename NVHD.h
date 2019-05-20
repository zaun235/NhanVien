#ifndef NVHD_H
#define NVHD_H

#include "NhanVien.h"
class NhanVienHD: public NhanVien
{
	private:
		double fix_salary;
		int Time;
	public:
		NhanVienHD()
		{};
		NhanVienHD(string a, string b, string c, double d, int e)
		{
			setMNV(a);
			setHoTen(b);
			setMST(c);
			fix_salary=d;
			Time = e;
		};
		//setters
		void setFix_salary(double salary);
		void setTime(int Time);
		//getters
		double getFixSalary()const;
		double getSalary()const
		{
			return this-> fix_salary;
		};
		int getTime()const
		{
			return Time;
		}
		void InRa()
		{
			
			cout<<"Ma Nhan Vien Bien Che: "<<getMNV()<<endl;
			cout<<"Ho va Ten NV: "<<getHoTen()<<endl;
			cout<<"Ma So Thue: "<<getMST()<<endl;
			cout<<"Thoi Gian: "<<getTime()<<endl;
			if (Time <= 40)
			{
				double Sal;
				Sal=fix_salary*Time;
				cout<<"Luong Thang Nay: "<<Sal<<endl;
			}
			else
			{
				double La;
				La = fix_salary*(Time+(40-Time)*1,5);
				cout<<"Luong Thang Nay: "<<La<<endl;
			}
			
		
		};
};
#endif
