//File Name:p03_0212239.cpp
//Author:�ΰ���
//Email Address:howarder3@gmail.com
//Assignment Number:3
//Description:Use c++ to calculate the amount of interest and how many month you should take.
//Last Changed:October 21,2013

#include<iostream>
#include<iomanip> 
using namespace std;

int main()
{
	//#�ޤJ�ܼ�
	int language,interest;
	double cost,interest_rate,payment;
	char again;

	//#�|�ˤ��J���Ʀ�
	cout.setf(ios::fixed);
    cout.precision(0);
	
	//#�j��
    do
    {   
		//#�j��ɲM���e��
		system("cls");        
		re_input:   //��J���~�ɸ��^���B

		//�I������
		cout<<"*********************B a c k g r o u n d*********************\n"    
			<<"You just purchased a notebook that cost \nyou some money on the following credit plan:\n"
			<<"no down payment,an interest rate of some \n% per year,and monthly payment of some.\n"
			<<"*************************************************************\n\n";
 
		//��ܻy��
		cout<<"Please enter the language which you want to start the program�A\n"   
			<<"press 1 for English�A�Y�n����п�J2�G ";
		cin>> language;
		cout<<endl;		
			if(language == 1)
				{system("cls");
				//#�n�D���
				cout<<"Enter the money you spend: ";
				cin>> cost;
				cout<<"Enter an interest rate per year(how much %�A% don't need to input): ";
				cin>> interest_rate;
				cout<<"Enter how much money you want to pay per month: ";
				cin>> payment;
            
				//�p��L�{
				interest_rate=(interest_rate/100)/12;
				cout<<"\n-----------------------------------------------------------"<<endl<<endl
				    <<"This is your result�G "<<endl<<endl;
				cout<<"   month   amount of interest   size of debt after this month"<<endl;
				for (int i=1; i<=100000; i++)
					{interest=(interest_rate*cost)+0.5;  //�|�ˤ��J
					 cost=cost-payment+interest;  //��ƹB��
					 //��X
					if(cost<=0)
					    {cost=0;
						 cout<<setw(7)<<i<<"        "<<setw(7)<<interest<<"        "<<setw(20)<<cost<<"        "<<endl;
						 i=100001;}
					else
						 cout<<setw(7)<<i<<"        "<<setw(7)<<interest<<"        "<<setw(20)<<cost<<"        "<<endl;
			        }
				//�߰ݬO�_�~�����{���A�t�μȰ��ýT�{
				cout<<"\n\nDo you want to run the program again?\nPress 'y' for yes,press 'n' to exit the program"<<endl;
				cin>>again;
				cout<<"\n#Remind�G"<<endl;
				cout<<"'Program closed' or'start next program' will clean all the data.Be sure that you note them.\n"
					<<"If you sure that you note them.Press 'Enter' for next step.\n\n\n"<<endl;
				system("PAUSE");}

			else if(language == 2)
				{system("cls");
				//#�n�D���
				cout<<"�п�J�A���Ҫ᪺����: ";
				cin>> cost;
				cout<<"�п�J�~�Q�v(�h��%�A%���ο�J): ";
				cin>> interest_rate;
				cout<<"�п�J�A�@�Ӥ�Q�I�h�ֿ�: ";
				cin>> payment;
            
				//�p��L�{
				interest_rate=(interest_rate/100)/12;
				cout<<"\n-----------------------------------------------------------"<<endl<<endl
				    <<"�H�U�O�z���p�⵲�G�G"<<endl<<endl;
				cout<<"      ��        ��Q��       �Ѿl�Ű�"<<endl;
				for (int i=1; i<=100000; i++)
					{interest=(interest_rate*cost)+0.5;  //�|�ˤ��J
					 cost=cost-payment+interest;  //��ƹB��
					 //��X
					if(cost<=0)
					    {cost=0;
						 cout<<setw(7)<<i<<"        "<<setw(7)<<interest<<"        "<<setw(7)<<cost<<"        "<<endl;
						 i=100001;}
					else
						 cout<<setw(7)<<i<<"        "<<setw(7)<<interest<<"        "<<setw(7)<<cost<<"        "<<endl;
			        }
				//�߰ݬO�_�~�����{���A�t�μȰ��ýT�{
				cout<<"\n\n�аݱz�O�_�n�A�@������{��?�O���ܽХ�y�A�n�h�X�{�����ܽХ�n"<<endl;
				cin>>again;
				cout<<"\n#�K�ߤp�����G"<<endl;
				cout<<"�u�t�������v�Ρu����U�@���B��v�ɱN�|�M��������ơA�нT�{�z����Ƥw�O�U�ӡC\n"
					<<"�Y�z�w�T�{�O�U�A�ЦA���@���uEnter��v�H����U�@�ӨB�J�C\n\n\n"<<endl;
				system("PAUSE");}
				 
			else
			//#��J���~
			{cout<<"��J���~!�ЦA�դ@��!"<<endl;
			goto re_input;}
	
    //�̨ϥΪ̵������צA�@������{���������{��
    } while (again=='y'||again=='Y');

	return 0;
}