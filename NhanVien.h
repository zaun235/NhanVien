#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <string>
class NhanVien
{
	private:
		string MNV;//Ma Nhan Vien
		string HoTen;
		string MST;//Ma So Thue
		double Salary;
	public:
		NhanVien()
		{};
		NhanVien(string a, string b , string c, double d)
		{
			this -> MNV = a;
			this -> HoTen = b;
			this -> MST = c;
			this -> Salary = d;
		};
		//getters
		string getMNV() const
		{
			return MNV;
		}
		string getHoTen() const
		{
			return HoTen;
		}
		string getMST()const
		{
			return MST;
		}
		double getSalary()const
		{
			return Salary;
		}
		//setters
		void setMNV(string a)
		{
			MNV = a;
		}
		void setHoTen(string b)
		{
			HoTen = b;
		}
		void setMST(string c)
		{
			MST  = c;
		}
		void setSalary(double d)
		{
			Salary = d;
		}
		//methods
		void In()
		{
			cout<<"Ma Nhan Vien: "<<MNV<<endl;
			cout<<"Ho va ten Nhan vien: "<<HoTen<<endl;
			cout<<"Ma So Thue: "<<MST<<endl;
			cout<<"Luong Nhan Vien: "<<Salary<<endl;
		};
		
		
};
#endif
