#ifndef NVHHDB_H
#define NVHHDB_H

#include "NVHH.h"
#include "NhanVien.h"
class NhanVienHHDB : public NhanVienHH
{
	private:
        double Basic_salary;
    public:
        NhanVienHHDB();
        NhanVienHHDB(string a,string b, string c, double d,int e, double g)
        {
            setMNV(a);
            setHoTen(b);
            setMST(c);
            setFix_salary(d);
            setContract(e);
            Basic_salary=g;
        };
        //setter
        void setBasic_salary( double salary);
        //getter
		double getSalary()const
		{
			return this-> Basic_salary;
		};
		void InM()
		{
		    cout<<"Ma Nhan Vien Hoa Hong: "<<getMNV()<<endl;
			cout<<"Ho va Ten NV: "<<getHoTen()<<endl;
			cout<<"Ma So Thue: "<<getMST()<<endl;
			cout<<"Luong thang nay: "<<getContract()*getFix_Salary()+(Basic_salary*10)/100<<endl;
		};
};
#endif
