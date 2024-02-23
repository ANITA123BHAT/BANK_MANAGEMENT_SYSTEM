#include<bits/stdc++.h>
using namespace std;

class main_acc
{
    private:
        string name;
        string f_name;
        string l_name;
        long int phone_no;
        int door_no;
        string street;
        string locality;
        string area;
        string landmark;
        string taluk;
        string district;
        string state;
        int pincode;
        string email;
        string password;
        string branch;
        string ifsc;
        string doao;
        bool credit_c = false;
		bool debit_c = false;
		int f_l=0;
		int l_l=0;
		
	public:
	    string acc_no;
        float balance = 0;
        float minimum_balance=0;
        float credit=0;
        float amount_c_or_d=0;
		int c_or_d=0;
		int no_of_trans=0;
		string trans_id;
        
        string trans_date;
		string trans_time;
		string from_account;
        //void setname();
        bool val_name();
        void display_name();
        //void setphone();
        bool val_phone();
        void display_phone();
        void take_address();
        void display_address();
        //void setemail();
        bool val_email();
        void display_email();
        //void setpassword();
        bool val_password();
        //void setacc_no();
        bool val_acc_no();
        void display_acc_no();
        void take_acc_info();
        void display_acc_info();
        bool tot_check();
        void setc_or_d(int a){
			c_or_d=a;}
		int getc_or_d(){
			return c_or_d;}
		void setno_of_trans(int a){
			no_of_trans=a;}
		int getno_of_trans(){
			return no_of_trans;}
		void settrans_id(string a){
			trans_id=a;}
		string gettrans_id(){
			return trans_id;}
        void setamount_c_or_d(float a){
			amount_c_or_d=a;}
		float getamount_c_or_d(){
			return amount_c_or_d;}
		void settrans_date(string a){
			trans_date=a;}
		string gettrans_date(){
			return trans_date;}
		void settrans_time(string a){
			trans_time=a;}
		string gettrans_time(){
			return trans_time;}
		void setfrom_account(string a){
			from_account=a;}
		string getfrom_account(){
			return from_account;}
        void setname(string a)
        {
            name=a;
        }
        string getname()
        {
            return name;
        }
        
        void setf_name(string a)
        {
            f_name=a;
        }
        void setl_name(string a)
        {
            l_name=a;
        }
        
        string getf_name()
        {
            return f_name;
        }
        string getl_name()
        {
            return l_name;
        }
        
        void setphone_no(long int a)
        {
            phone_no=a;
        }
        long int getphone_no()
        {
            return phone_no;
        }
        
        void setdoor_no(int a)
        {
            door_no=a;
        }
        
        int getdoor_no()
        {
            return door_no;
        }
        
        void setstreet(string a)
        {
            street=a;
        }
        
        string getstreet()
        {
            return street;
        }
        
        void setlocality(string a)
        {
            locality=a;
        }
        
        string getlocality()
        {
            return locality;
        }
        
        void setarea(string a)
        {
            area=a;
        }
        
        string getarea()
        {
            return area;
        }
        
        void setlandmark(string a)
        {
            landmark=a;
        }
        
        string getlandmark()
        {
            return landmark;
        }
        
        void settaluk(string a)
        {
            taluk=a;
        }
        
        string gettaluk()
        {
            return taluk;
        }
        
        void setdistrict(string a)
        {
            district=a;
        }
        
        string getdistrict()
        {
            return district;
        }
        
        void setstate(string a)
        {
            state=a;
        }
        
        string getstate()
        {
            return state;
        }
        
        void setpincode(int a)
        {
            pincode=a;
        }
        
        int getpincode()
        {
            return pincode;
        }
        void setemail(string a)
        {
            email=a;
        }
        void setpassword(string a)
        {
            password=a;
        }
        void setacc_no(string a)
        {
            acc_no=a;
        }
        
        string getemail()
        {
            return email;
        }
        string getpassword()
        {
            return password;
        }
        string getacc_no()
        {
            return acc_no;
        }
        void setbranch(string a)
        {
			branch=a;
		}
		
		void setifsc(string a)
		{
			ifsc=a;
		}
		
		void setdoao(string a)
		{
			doao=a;
		}
		
		void setcredit_c(bool a)
		{
			credit_c=a;
		}
		
		void setdebit_c(bool a)
		{
			debit_c=a;
		}
		
		string getbranch()
		{
			return branch;
		}
		string getifsc()
		{
			return ifsc;
		}
		string getdoao()
		{
			return doao;
		}
		bool getcredit_c()
		{
			return credit_c;
		}
		bool getdebit_c()
		{
			return debit_c;
		}
		
		void setbalance(float a)
		{
			balance=a;
		}
		float getbalance()
		{
			return balance;
		}
		
		void setminimum_balance(float a)
		{
			minimum_balance=a;
		}
		float getminimum_balance()
		{
			return minimum_balance;
		}
		
		void setcredit(float a)
		{
			credit = a;
		}
		float getcredit()
		{
			return credit;
		}
};

	    
bool main_acc::val_name()
{
    name=getname();
    int count=0,j=0,i=0;
    bool valid=true;
    int n=name.length();
    for(i=0;i<n;i++)
    {
        if((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z'))
        {
            f_name[i]=name[i];
        }
        else if(name[i]==' ')
        {
            count=i;
            break;
        }
        else
            valid=false;   
    }
    setf_name(f_name);
    f_l=i;
    for(i=count+1;i<n;i++)
    {
        if((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z'))
            l_name[j++]=name[i];
        else
            valid=false;
    }
    l_l=n-f_l-1;
    setl_name(l_name);
    return valid;
    
}

bool main_acc::val_phone()
{
    if(phone_no>999999999 && phone_no<=9999999999999)
        return true;
    return false;
}
bool main_acc::val_email()
{
    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	return regex_match(getemail(),pattern);
}

void main_acc::display_email()
{
    cout<<"Email-ID: "<<getemail()<<endl;
}

bool main_acc::val_password()
{
	string pass=getpassword();
    bool greater = false, hasLower = false, hasUpper = false, hasDigit = false; 
	for (int i = 0; i < pass.length(); i++) 
	{
		if (pass.length()>=8)
			greater = true;
		if (islower(pass[i])) 
			hasLower = true; 
		if (isupper(pass[i])) 
			hasUpper = true; 
		if (isdigit(pass[i])) 
			hasDigit = true; 
	} 
	if( greater && hasLower && hasUpper && hasDigit)
		return true;
	else 
		return false;
}

bool main_acc::val_acc_no()
{
	string acc=getacc_no();
    if((acc.length() >9 && acc.length() <=13))
	    return true;
	else 
	    return false;
}

void main_acc::display_acc_no()
{
    cout<<"Account Number: "<<getacc_no()<<endl;
}

bool main_acc::tot_check()
{
    if(val_acc_no() && val_password() && val_email() && val_name() && val_phone())
        return true;
    else
        return false;
}

void main_acc::take_acc_info()
{
	cout<<"Enter Branch: ";
    getline(cin,branch);
    setbranch(branch);
    cout<<"Enter IFSC code: ";
	getline(cin,ifsc);
	setifsc(ifsc);
	cout<<"Enter Date of Account opening: ";
	getline(cin,doao);
	cout<<"Is Credit card Available (*Press 1 if yes 0 if No): ";
	cin>>credit_c;
	cout<<"Is Debit card Available (*Press 1 if yes 0 if No): ";
	cin>>debit_c;
	cout<<"Enter the current balance: ";
	cin>>balance;
	setbalance(balance);
	cout<<"Enter the minimum balance: ";
	cin>>minimum_balance;
	setminimum_balance(minimum_balance);
	cout<<"Enter the existing credits if any(*By default it is 0): ";
	cin>>credit;
	cin.ignore();
}

void main_acc::display_acc_info()
{
	cout<<"Bank Informations: \n";
    cout<<"Branch: "<<getbranch()<<endl;
    cout<<"IFSC Code: "<<getifsc()<<endl;
    cout<<"Date of Account opening: "<<getdoao()<<endl;
    cout<<"Has Credit Card: "<<getcredit_c()<<endl;
    cout<<"Has Debit Card: "<<getdebit_c()<<endl;
    cout<<"Total Balance :"<<getbalance()<<endl;
    cout<<"Minimum Balance: "<<getminimum_balance()<<endl;
    cout<<"Credit Amount: "<<getcredit()<<endl;
}




class savings_acc:public main_acc{
    
	int k=0;
	
	public:
	    void take_c_or_d();
		void transaction();
		
};

void savings_acc::take_c_or_d()
{
	cout<<"Credit or debit(*Press 1 for Credit and 2 for Debit): ";
    cin>>c_or_d;
    cin.ignore();
    setc_or_d(c_or_d);
}

void savings_acc::transaction()
{
	balance=getbalance();
	minimum_balance=getminimum_balance();
	cout<<"\nEnter the number of Transactions: ";
    cin>>no_of_trans;
    cin.ignore();
    setno_of_trans(no_of_trans);
    no_of_trans=getno_of_trans();
    for(int i=0;i<no_of_trans;i++)
    {
		cout<<"\nEnter the amount: ";
        cin>>amount_c_or_d;
        cin.ignore();
        setamount_c_or_d(amount_c_or_d);
        amount_c_or_d=getamount_c_or_d();
        cout<<"From Bank Account Number: \n" ;
        getline(cin,from_account);
        setfrom_account(from_account);
        cout<<"Enter the transaction time: \n";
        getline(cin,trans_time);
        settrans_time(trans_time);
        cout<<"Enter the transaction date: \n";
        getline(cin,trans_date);
        settrans_date(trans_date);
        c_or_d=getc_or_d();
        from_account=getfrom_account();
        trans_time=gettrans_time();
        trans_date=gettrans_date();
        
        if(c_or_d==1)
        {
            balance+=amount_c_or_d;
            trans_id[0]='C';
				for(int i=1;i<=4;i++)
					trans_id[i]=acc_no[i-1];
				for(int i=5;i<=8;i++)
				{
					if(trans_date[k++] == '-')
						i=i-1;
					else
						trans_id[i]=trans_date[k];
				}
				k=0;
				for(int i=9;i<=13;i++)
					trans_id[i]=trans_time[k++];
        }
        else if(c_or_d==2)
        {
           if(balance<=0)
           {
               cout<<"\nLow balance..... \nAmount cannot be debitted.....";
               balance-=20;
           }
           else if (balance<minimum_balance)
           {
               cout<<"\nAccount running in low balance.....\nPenality charge of Rs.50 will be charged against the balance\n";
               balance-=50;
           }
           else
                balance-=amount_c_or_d;
                
            trans_id[0]='D';
				for(int i=1;i<=4;i++)
					trans_id[i]=acc_no[i-1];
				for(int i=5;i<=8;i++)
				{
					if(trans_date[k++] == '-')
						i=i-1;
					else
						trans_id[i]=trans_date[k];
				}
				k=0;
				for(int i=9;i<=13;i++)
					trans_id[i]=trans_time[k++];
        }
        settrans_id(trans_id);
        setbalance(balance);
    }
}


class current_acc:public main_acc{
    
    int c_or_d=0;
	int no_of_trans=0;
	string trans_id;
	int k=0;
	
	public:
	    void take_c_or_d();
		void transaction();
		
};

void current_acc::take_c_or_d()
{
	cout<<"Credit or debit(*Press 1 for Credit and 2 for Debit): ";
    cin>>c_or_d;
    cin.ignore();
}

void current_acc::transaction()
{
	getbalance();
    cin>>no_of_trans;
    cin.ignore();
    for(int i=0;i<no_of_trans;i++)
    {
        cin>>amount_c_or_d;
        cin.ignore();
        getline(cin,from_account);
        getline(cin,trans_time);
        getline(cin,trans_date);
        
        if(c_or_d==1)
        {
            balance+=amount_c_or_d;
            trans_id[0]='C';
				for(int i=1;i<=4;i++)
					trans_id[i]=acc_no[i-1];
				for(int i=5;i<=8;i++)
				{
					if(trans_date[k++] == '-')
						i=i-1;
					else
						trans_id[i]=trans_date[k];
				}
				k=0;
				for(int i=9;i<=13;i++)
					trans_id[i]=trans_time[k++];
        }
        else if(c_or_d==2)
        {
           if(balance<=0)
           {
               cout<<"\nLow balance..... \nAmount cannot be debitted.....";
               balance-=50;
           }
           else if (balance<minimum_balance)
           {
               cout<<"\nAccount running in low balance.....\nPenality charge of Rs.20 will be charged against the balance\n";
               balance-=20;
           }
           else
                balance-=amount_c_or_d;
                
            trans_id[0]='D';
				for(int i=1;i<=4;i++)
					trans_id[i]=acc_no[i-1];
				for(int i=5;i<=8;i++)
				{
					if(trans_date[k++] == '-')
						i=i-1;
					else
						trans_id[i]=trans_date[k];
				}
				k=0;
				for(int i=9;i<=13;i++)
					trans_id[i]=trans_time[k++];
        }
        cout<<endl<<trans_id<<endl;
        cout<<trans_time<<endl;
        cout<<trans_date<<endl;
        cout<<balance<<endl;
    }
}


int main()
{
    
    main_acc m;
    savings_acc s;
    current_acc c;
    
    string f_name,l_name,email,password,acc_no,street,locality,landmark,area,taluk,district,state;
    long int phone_no;
    int pincode,door_no;
    cout<<"Enter the full Name\n";
    getline(cin,f_name,' ');
    getline(cin,l_name);
    cout<<"Enter the Phone No:\n";
    cin>>phone_no;
    cin.ignore();
    cout<<"Enter Address\n";
    cout<<"Door No: ";
    cin>>door_no;
    cin.ignore();
    cout<<"Street: ";
    getline(cin,street);
    cout<<"Locality: ";
    getline(cin,locality);
    cout<<"Area: ";
    getline(cin,area);
    cout<<"Landmark: ";
    getline(cin,landmark);
    cout<<"Taluk: ";
    getline(cin,taluk);
    cout<<"District: ";
    getline(cin,district);
    cout<<"State: ";
    getline(cin,state);
    cout<<"Pincode: ";
    cin>>pincode;
    cin.ignore();
    cout<<"Enter the Email id in xyz@abc.lmn format only:\n";
    getline(cin,email);
    cout<<"Enter Password (*Password must contain 1 upper case,1 lower case,1 digit and minimmum of 8 characters):\n";
    getline(cin,password);
    cout<<"Enter your Account number\n";
    getline(cin,acc_no);
    
    m.setf_name(f_name);
    m.setl_name(l_name);
    m.setphone_no(phone_no);
    m.setdoor_no(door_no);
    m.setstreet(street);
    m.setlocality(locality);
    m.setarea(area);
    m.setlandmark(landmark);
    m.settaluk(taluk);
    m.setdistrict(district);
    m.setstate(state);
    m.setpincode(pincode);
    m.setemail(email);
    m.setpassword(password);
    m.setacc_no(acc_no);
    if(m.tot_check())
    {
		cout<<"Provide the account informations\n:";
        m.take_acc_info();
        string acc_type;
        cout<<"Enter the type of Account\n:";
        getline(cin,acc_type);
        
        if(acc_type=="Savings")
        {
            s.take_c_or_d();
            s.transaction();
            cout<<"\n\n**********************\n";
			cout<<"First Name: "<<m.getf_name();
			cout<<endl;
			cout<<"Last Name: "<<m.getl_name()<<endl;
			cout<<"Phone No :"<<m.getphone_no()<<endl;
			cout<<"E-mail ID: "<<m.getemail()<<endl;
			cout<<"____________________\nAddress Details\n____________________\n";
			cout<<"Door no: "<<m.getdoor_no()<<endl;
			cout<<"Street: "<<m.getstreet()<<endl;
			cout<<"locality: "<<m.getlocality()<<endl;
			cout<<"Area: "<<m.getarea()<<endl;
			cout<<"landmark: "<<m.getarea()<<endl;
			cout<<"taluk: "<<m.gettaluk()<<endl;
			cout<<"district: "<<m.getdistrict()<<endl;
			cout<<"state: "<<m.getstate()<<endl;
			cout<<"pincode: "<<m.getpincode()<<endl;
			cout<<"____________________\nMain Balance = "<<m.getbalance();
			cout<<endl<<m.gettrans_id();
        }
        else
        {
            /*c.take_c_or_d();
            c.display_name();
            c.display_phone();
            c.display_address();
            c.display_email();
            c.display_acc_no();
            c.display_acc_info();
            c.transaction();*/
		}
    }
    else
        cout<<"\nInvalid Input......\nPlease Check the data Entered......\n";
    
    return 0;
}
