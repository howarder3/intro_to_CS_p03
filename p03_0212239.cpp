//File Name:p03_0212239.cpp
//Author:翁健豪
//Email Address:howarder3@gmail.com
//Assignment Number:3
//Description:Use c++ to calculate the amount of interest and how many month you should take.
//Last Changed:October 21,2013

#include<iostream>
#include<iomanip> 
using namespace std;

int main()
{
	//#引入變數
	int language,interest;
	double cost,interest_rate,payment;
	char again;

	//#四捨五入到整數位
	cout.setf(ios::fixed);
    cout.precision(0);
	
	//#迴圈
    do
    {   
		//#迴圈時清除畫面
		system("cls");        
		re_input:   //輸入錯誤時跳回此處

		//背景介紹
		cout<<"*********************B a c k g r o u n d*********************\n"    
			<<"You just purchased a notebook that cost \nyou some money on the following credit plan:\n"
			<<"no down payment,an interest rate of some \n% per year,and monthly payment of some.\n"
			<<"*************************************************************\n\n";
 
		//選擇語言
		cout<<"Please enter the language which you want to start the program，\n"   
			<<"press 1 for English，若要中文請輸入2： ";
		cin>> language;
		cout<<endl;		
			if(language == 1)
				{system("cls");
				//#要求資料
				cout<<"Enter the money you spend: ";
				cin>> cost;
				cout<<"Enter an interest rate per year(how much %，% don't need to input): ";
				cin>> interest_rate;
				cout<<"Enter how much money you want to pay per month: ";
				cin>> payment;
            
				//計算過程
				interest_rate=(interest_rate/100)/12;
				cout<<"\n-----------------------------------------------------------"<<endl<<endl
				    <<"This is your result： "<<endl<<endl;
				cout<<"   month   amount of interest   size of debt after this month"<<endl;
				for (int i=1; i<=100000; i++)
					{interest=(interest_rate*cost)+0.5;  //四捨五入
					 cost=cost-payment+interest;  //整數運算
					 //輸出
					if(cost<=0)
					    {cost=0;
						 cout<<setw(7)<<i<<"        "<<setw(7)<<interest<<"        "<<setw(20)<<cost<<"        "<<endl;
						 i=100001;}
					else
						 cout<<setw(7)<<i<<"        "<<setw(7)<<interest<<"        "<<setw(20)<<cost<<"        "<<endl;
			        }
				//詢問是否繼續執行程式，系統暫停並確認
				cout<<"\n\nDo you want to run the program again?\nPress 'y' for yes,press 'n' to exit the program"<<endl;
				cin>>again;
				cout<<"\n#Remind："<<endl;
				cout<<"'Program closed' or'start next program' will clean all the data.Be sure that you note them.\n"
					<<"If you sure that you note them.Press 'Enter' for next step.\n\n\n"<<endl;
				system("PAUSE");}

			else if(language == 2)
				{system("cls");
				//#要求資料
				cout<<"請輸入你的所花的金錢: ";
				cin>> cost;
				cout<<"請輸入年利率(多少%，%不用輸入): ";
				cin>> interest_rate;
				cout<<"請輸入你一個月想付多少錢: ";
				cin>> payment;
            
				//計算過程
				interest_rate=(interest_rate/100)/12;
				cout<<"\n-----------------------------------------------------------"<<endl<<endl
				    <<"以下是您的計算結果："<<endl<<endl;
				cout<<"      月        月利息       剩餘債務"<<endl;
				for (int i=1; i<=100000; i++)
					{interest=(interest_rate*cost)+0.5;  //四捨五入
					 cost=cost-payment+interest;  //整數運算
					 //輸出
					if(cost<=0)
					    {cost=0;
						 cout<<setw(7)<<i<<"        "<<setw(7)<<interest<<"        "<<setw(7)<<cost<<"        "<<endl;
						 i=100001;}
					else
						 cout<<setw(7)<<i<<"        "<<setw(7)<<interest<<"        "<<setw(7)<<cost<<"        "<<endl;
			        }
				//詢問是否繼續執行程式，系統暫停並確認
				cout<<"\n\n請問您是否要再一次執行程式?是的話請打y，要退出程式的話請打n"<<endl;
				cin>>again;
				cout<<"\n#貼心小提醒："<<endl;
				cout<<"「系統關閉」或「執行下一次運算」時將會清除全部資料，請確認您的資料已記下來。\n"
					<<"若您已確認記下，請再按一次「Enter鍵」以執行下一個步驟。\n\n\n"<<endl;
				system("PAUSE");}
				 
			else
			//#輸入錯誤
			{cout<<"輸入錯誤!請再試一次!"<<endl;
			goto re_input;}
	
    //依使用者給的答案再一次執行程式或關閉程式
    } while (again=='y'||again=='Y');

	return 0;
}