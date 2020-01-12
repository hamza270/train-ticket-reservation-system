#include<iostream>
#include<windows.h>
#include<fstream>
#include<conio.h>
using namespace std;
int r,m,tu,w,th,f,ci,pas;
   string n,e,cl1,mob,m1,c,mo; 
    int p,a,cl,j,bill,si,br,s,op,su,sa,t,pa;	
int home();
int train_timing();
int freight_rates();
int ticket_booking();
 void search();
void city(int s)
{
	switch(s){
		case 1:
			cout<<"Karachi"<<endl;
			break;
		case 2:
			cout<<"Lahore"<<endl;
			break;
		case 3:
			cout<<"Peshawar"<<endl;
			break;
		case 4:
			cout<<"Queta"<<endl;
			break;
		default:
			cout<<"Invalid Number"<<endl;
			break;
	}	
}
int thankx()
{
	cout<<"Thankx For Visiting Please Visit Again"<<endl;
	system("pause");
}
int menu()
{   
    system("color F8");
	           system("cls");
   	           cout<<"*************************************************************************************************************"<<endl;
	           cout<<"******************************************RAILWAY RESERVATION SYSTEM*****************************************"<<endl;    
	           cout<<"*************************************************************************************************************"<<endl;
	           cout<<"                                                                                                             "<<endl;
	           cout<<"                <<<<<<<<<<<<<<<<<<<<<<<<<<<WELLCOME TO BULLET RAILS>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>            "<<endl;
	           cout<<"                                                                                                             "<<endl;
	           cout<<"                                                  MAIN MENU                                                  "<<endl;
	           cout<<"                                                  *********                                                  "<<endl;
	           cout<<"       [1] HOME                                                                                              "<<endl; 
	           cout<<"       [2] FREIGHT RATES                                                                                     "<<endl;
	           cout<<"       [3] TRAIN TIMING                                                                                      "<<endl;  
	           cout<<"       [4] TICKET BOOKING                                                                                    "<<endl; 
			   cout<<"       [5] RECORD                                                                                            "<<endl;
			   cout<<"       [6] EXIT                                                                                              "<<endl;
			   cout<<"                                                                                                             "<<endl;
	           cout<<"*************************************************************************************************************"<<endl;
	           cout<<"*************************************************************************************************************"<<endl;
			   cout<<"ENTER YOUR CHOICE: ";
	           cin>>op;
			   switch(op)
			   {
			   	
				case 1:
			   	    {
			   		system("cls");
			   		home();
			   		cout<<endl;
			   		system("pause");
			    	menu();
			      }    
				   case 2:
				   {
				   	system("cls");
			   		freight_rates();
			   		cout<<endl;
			   		system("pause");
			   		menu();
			}
			    case 3:
				   {
				   	system("cls");
			   		train_timing();
			   		cout<<endl;
			   		system("pause");
			   		menu();
			}
				    case 4:
				    {
				    system("cls");
			   		ticket_booking();
			   		cout<<endl;
			   		system("pause");
			   		menu();
			   		 }
			   		
			   		case 5:
			   			{
			   				search();
			   			
						   }
				case 6:
				{
                   	system("cls");
                     thankx();
                     return 0;
					 }
						 break;		   
				default:
					
						system("cls");
						system("color 0B");
						cout<<"Invalid Number"<<endl;
			      }	
}
  void booking()
{
		cout<<"Which class you want"<<endl;
	cout<<"* Bussiness\n* Economy\n";
	cin>>cl;
}
void day(int j)
{
	switch(j){
		case 1:
			cout<<"Monday"<<endl;
			break;
		case 2:
			cout<<"Tuesday"<<endl;
			break;
		case 3:
			cout<<"Wednesday"<<endl;
			break;
		case 4:
			cout<<"Thursday"<<endl;
			break;
		case 5:
			cout<<"Friday"<<endl;
			break;
		case 6:
			cout<<"Saturday"<<endl;
			break;
		case 7:
			cout<<"Sunday"<<endl;
			break;
		default:
			cout<<"Invalid Number"<<endl;
			break;
	}	
}
void rail()
{
	cout<<"		******************************************************************************\n";
	cout<<"		                  >>>>>>>>>>>>>>BULLET RAILS<<<<<<<<<<<<<<<<                  \n";
	cout<<"		******************************************************************************\n";
}
void billing()
{  
	rail();
	cout<<"Name:"<<n<<endl;
	cout<<"CNIC:"<<c<<"                              "<<"Mobile No:"<<m1<<endl;
	cout<<"E-mail:"<<e<<endl;
	cout<<"Day Of Booking:";
	day(j);
	cout<<"Rout:";
	city(s);
	cout<<"Class:"<<cl1<<endl;
	cout<<"Seats:"<<si<<"                             "<<"Brith:"<<br<<endl;
	cout<<"Bill:"<<bill<<endl;
	cout<<"Your tickets has been reserved"<<endl;
	cout<<"           ________________________________________________________________________________"<<endl;
}
void rail();
void bookb()
{
	    ofstream outf("acoutnt.txt",ios::out|ios::app);
	    outf.open("acoutnt.txt",ios::app);
		cl1="Bussiness";
		outf<<"class:"<<"Bussiness"<<'\n';
		cout<<"How many sites you want"<<endl;
		cin>>si;
		outf<<"Seates:"<<si<<endl;
		cout<<"Do you want brith "<<endl;
		cin>>br;
		outf<<"Brith:"<<br<<endl;
		outf.close();
}
void booke()
{
	    ofstream outf("acoutnt.txt",ios::out|ios::app);
	    outf.open("acoutnt.txt",ios::app);
	cl1="Economy";
		outf<<"class:"<<"Economy"<<'\n';
		cout<<"How many sites you want"<<endl;
		cin>>si;
		cout<<"Do you want brith "<<endl;
		cin>>br;
		outf<<"Seates:"<<si<<endl;
		outf<<"Brith:"<<br<<endl;
			bill=si*1600+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();
					outf.close();
}

int main()
{
 menu();  
}
int home()
{
	cout<<"                     >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>BULLET RAILS<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<             \n\n";
	cout<<"                                                     HOME                                                     \n";
	cout<<"                                                    ******                                                      \n";
	cout<<"Bullet Rails froms the life line of the counrty by catering to its needs for large scale movement \n";
	cout<<"of freight as well as passenger traffic. It not only contributes to its economic growth but also promotes \n";
	cout<<"national integration.\n\n";
	cout<<"Bullet Rails endeavours to run the trains strictly in accordance to time table. The progressive\n";
	cout<<"freight train support organization operated by professtional management and competitive and economical \n";
	cout<<"service of recognized standerds to its customers\n\n";
	cout<<"Bullet Rails provides an important mode of Transportation in the farthest corners of the country\n";
	cout<<"and bring them closer for Business,sightseeing,pilgrimage and education. It has been a great integrating \n";
	cout<<"force and form the life line of the country by catering to its needs for large scale movement of people\n";
	cout<<"and freight.\n\n";
	cout<<"POPULAR DESTINATIONS\n";
	cout<<"* Lahore\n* Peshawer\n* Quetta\n* Karachi\n\n";
	cout<<"FOR E-TICKETING RELATED COMPLAINTS\n";
	cout<<"       Helpline Number      \n";
	cout<<"For Complaints: 042-111-124-444\n";
	cout<<"For Complaints: 0345-1113737\n";
	cout<<"Bullet Rails: 0333-1111-3333\n";
}
int freight_rates()
{    d:
	int op;
	cout<<"                     >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>BULLET RAILS<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<             \n\n";
	cout<<"                                                  FREIGHT RATES                                                   \n";
	cout<<"                                                  *************                                                     \n";
	cout<<"[1] From Lahore To Karachi\n\n[2] From Lahore To Quetta\n\n[3] From Lahore To Peshawer\n\n[4] From Karachi To Quetta\n\n";
	cout<<"[5] From Karachi To Lahore\n\n[6] From Karachi To Peshawer\n\n[7] From Quetta To Lahore\n\n[8] From Quetta To Peshawer\n\n";
	cout<<"[9] From Quetta To Karachi\n\n[10] From Peshawer To Lahore\n\n[11] From Peshawer To Karachi\n\n[12] From Peshawer To Quetta\n\n"<<endl;
	cout<<"SELECT OPTION OF YOUR CHOICE: ";
	cin>>op;
	switch(op)
	{
		case 1:
			{
			cout<<"Lahore To Karachi\n*Bussiness class: 3500\n*Economy class: 3000"<<endl;
			break;
		}
		case 2:
			{
			cout<<"Lahore To Quetta\n*Bussiness class: 2200\n*Economy class: 1900"<<endl;
			break;
		}
	    case 3:
	    	{
	    	cout<<"Lahore To Peshawe\n*Bussiness class: 3000\n*Economy class: 2800"<<endl;
			break;
		}
	    case 4:
	    	{
	    	cout<<"Karachi To Quetta\n*Bussiness class: 2500\n*Economy class: 2200"<<endl;
	    	break;
	    }
	    case 5:
	    	{
	    	cout<<"Karachi To Lahore\n*Bussiness class: 2100\n*Economy class: 1700"<<endl;
	    	break;
	    }
	    case 6:
	    	{
	    	cout<<"Karachi To Peshawer\n*Bussiness class: 2000\n*Economy class: 1600"<<endl;
	    	break;
	    }
	    case 7:
	    	{
	    	cout<<"Quetta To Lahore\n*Bussiness class: 2200\n*Economy class: 1900"<<endl;
	    	break;
	    }
	    case 8:
	    	{
	    	cout<<"Quetta To Peshawer\n*Bussiness class: 3200\n*Economy class: 2900"<<endl;
	    	break;
	    }
	    case 9:
	    	{
	    	cout<<"Quetta To Karachi\n*Bussiness class: 2500\n*Economy class: 2200"<<endl;
	    	break;
	    }
	    case 10:
	    	{
	    	cout<<"Peshawer To Lahore\n*Bussiness class: 3000\n*Economy class: 2800"<<endl;
	    	break;
	    }
	    case 11:
	    	{
	    	cout<<"Peshawer To Karachi\n*Bussiness class: 2000\n*Economy class: 1600"<<endl;
	    	break;
	    }
	    case 12:
	    	{
	    	cout<<"Peshawer To Quetta\n*Bussiness class: 3200\n*Economy class: 2900"<<endl;
	    	break;
			}
	    default:
	    	{
	    	system("cls");
	    	cout<<"INVAILD OPTION PLEASE ENTER AGAIN\n\n";
	    	goto d;
	        }
}
}
int train_timing()
{
	int w;
     rail();
	cout<<"                                    welcome to train's timming portal             \n";  
	cout<<"                                    *********************************             \n\n\n";
	cout<<"               	| cities availaible |       \n\n";
	cout<<"               	  	[1] Lahore\n			[2] Karachi\n			[3] Peshawer\n			[4] Quetta\n\n\n";
   k:
	cout<<"			Enter the Navigation Number : ";
	cin>>w;
	if(w==1)
	{
	cout<<"* Lahore to Karachi \n			11:00 am\n			4:00 pm\n";
	cout<<"* Lahore to Peshawer\n			12:00 am\n			5:00 pm\n";
	cout<<"* Lahore to Quetta  \n			1:00 am \n			6:00 pm\n";
	}
	else if(w==2)
	{
	cout<<"* Karachi to Lahore  \n			5:00 am\n			2:00 pm\n";
	cout<<"* Karachi to Peshawer\n			6:00 am\n			3:00 pm\n";
	cout<<"* Karachi to Quetta  \n			7:00 am\n			7:00 pm\n";
	}
	else if(w==3)
	{
	cout<<"* Peshawer to Lahore \n			2:00 am \n			1:00 pm\n";
	cout<<"* Peshawer to Karachi\n			3:00 am \n			8:00 pm\n";
	cout<<"* Peshawer to Quetta \n			10:00 am\n			9:00 pm\n";
	}
	else if(w==4)
	{
    cout<<"* Quetta to Lahore  \n           1:30 am  \n		    2:30 pm  \n";
	cout<<"* Quetta to Karachi \n           12:45 pm \n         5:45 pm  \n";
	cout<<"* Quetta to Peshawer\n           9:00 am  \n         12:05 pm \n";
	}
	else
	{
		cout<<"			Your Number Jumps over the range\n\n";
		goto k;
    }
}
int ticket_booking()
{
    ofstream outf("acoutnt.txt",ios::out|ios::app);
    f:
    system("cls");
    rail();
    cout<<"[1].Creat a new account \n";
    cout<<"[2].Log in Account ";
    cout<<"\nEnter the Selection :";
    cin>>a;
    if(a==1)
    {
        system("cls");
        rail();
	    cout<<"\n";
        cout<<"              >>>>>>>>>>>>>>>>>>>>>>>>>New Account Page<<<<<<<<<<<<<<<<<<<<<<<< : \n";
        string n2,sn;
    cout<<"Enter New Serial Number : ";
    cin>>sn;
    	cin.ignore();
        cout<<"Enter your 1st Name : ";
        getline(cin,n);
          cout<<"Enter your last Name : ";
        getline(cin,n2);
        cout<<"Enter Your Mobile No. : ";
        cin>>m1;
        cin.ignore();
        cout<<"Enter your Email Address : ";
        getline(cin,e);
        cout<<"Enter Your CNIC No. : ";
        cin>>c;
        cin.ignore();
        cout<<"Enter Your Station Name :\n[1]. Karachi\n[2]. Lahore\n[3]. Peshawer\n[4]. Quetta\n(Choose Any Option Please)\n";
        cin>>s;
        cout<<"Enter Your Password : ";
        cin>>p;                                      //	read>>sn>>fn>>ln>>pn>>cnic;	
	     cout<<"Congratulation Your Acount Is Created"<<endl;
        ofstream write;
        write.open("record.txt",ios::app);
        write<<endl<<sn<<" "<<n<<" "<<n2<<" "<<m1<<" "<<c;
		write.close();	
        ofstream outf;
        outf.open("acoutnt.txt",ios::app);
        outf<<m1<<p<<endl;  
	    outf.close();
        goto f;
    }
    else if(a==2)
    {
        d:
 
string abc,def;
        system("cls");
	    cin.ignore();	
        rail();
	    cout<<"\n";
        cout<<"                >>>>>>>>>>>>>>>>>>>>>>>>Log in page<<<<<<<<<<<<<<<<<<<<<<<<: \n";
        cout<<"Enter Your Mobile no. : ";
        cin>>abc;
	    cout<<"Enter Your Password : ";
        cin>>def;
        abc.append(def);
        //abc.append(pa);
        system("cls");
        rail();
	    cout<<"\n";
        cout<<"                  *************************| cities availaible |*************************     \n\n";
	    cout<<"               	  	1.Lahore\n			2.Karachi\n			3.Peshawer\n			4.Queta\n\n\n";

  	          	ifstream myfile;
        	myfile.open("acoutnt.txt");
      
        	if (myfile.is_open() == false) {
  // error
}
string data;
string line;

 
  	while(!myfile.eof())
  	{
  		myfile>>data;
  	
	 
  	//cout<<data;

//string am;
//am=myfile;
		  if(data==abc)
	    {
	        int op;
	      //  k:
	        cout<<"1.Monday\n       [1] From Lahore to Karachi           [2] From Karachi to Peshawer\n";	
	        cout<<"2.Tuesday\n       [1] From Peshawer to Quetta          [2] From Quetta to Lahore \n";
	        cout<<"3.Wednesday\n       [1] From Lahore to Peshawer          [2] From Karachi to Quetta \n";
	        cout<<"4.thursday\n       [1] From Peshawer to Karachi         [2] From Quetta to Peshawer \n";
	        cout<<"5.Friday\n       [1] From Lahore to Quetta            [2] From Karachi to Quetta\n";
	        cout<<"6.Satuarday\n       [1] From Peshawer to Quetta          [2] From Quetta to Karachi\n";	
	        cout<<"7.Sunday\n       [1] From Peshawer to Lahore           [2] From Lahore to Quetta\n\n";
	        cout<<"Select the day of your Booking : ";
	        cin>>j;
	        system("cls");
	        rail();
	        if(j==1)
		    {
		        cout<<"[1] From Lahore to Karachi\n";	
		        cout<<"[2] From Karachi to Peshawer\n";
		        mo:
		        cout<<"Select Destination no. : ";
	            cin>>m;
	            outf<<"Selected day: "<<m<<endl;
		        if(m==1)
		        {
		            cout<<"* Lahore to Karachi\n";		
		            cout<<"[1] 11:00 am\n";			
		            cout<<"[2] 4:00 pm\n";
		            cout<<"select the time"<<endl;
		            cin>>t;		
		            if(t==1)
		            {
			            cout<<"Time: "<<endl;
			            cout<<"* 11:00 am\n";
booking();
	                    if(cl==1)
	                    {  
	                        bookb();
		                    outf<<"Brith:"<<br<<'\n';
			                bill=si*3500+br*1500;
			                cout<<"Bill:"<<bill;
				            system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                    }
	                   else if(cl==2)
	                    { 
	                        booke();
			                bill=si*3000+br*1000;
			                cout<<"Bill:"<<bill;
				            system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                    }
		            }
		           else if(t==2)
		           {
			            outf<<"Time: "<<endl;
			            outf<<"* 4:00 pm\n";
	       booking();
						if(cl==1)
	                    {
		                    bookb();
			                bill=si*3500+br*1500;
			                cout<<"Bill:"<<bill;
				            system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
                        }
	                    else if(cl==2)
	                    {
		                    booke();
		                    outf<<"Brith:"<<br<<'\n';
			                bill=si*3000+br*1000;
			                cout<<"Bill:"<<bill;
				            system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                    }
			 	   }
				}
	        	else if(m==2)
		        {
		            outf<<"* Karachi to Peshawer\n";		
		            cout<<"[1] 6:00 am\n";			
		            cout<<"[2] 3:00 pm\n";
		            cout<<"select the time"<<endl;
		            cin>>t;
		            if(t==1)
		            {
			            outf<<"Time: "<<endl;
		                outf<<"* 6:00 am\n";
booking();
	                    if(cl==1)
	                    {
		                    bookb();
			                bill=si*2000+br*1500;
				            cout<<"Bill:"<<bill;
					        system("cls");
					        billing();	
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                    }             
	                    else if(cl==2)
	                    {
		                    booke();
			                bill=si*1600+br*1000;
				            cout<<"Bill:"<<bill;
					        system("cls");
					        billing();
							 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();	
	                    }
			        }
		            else if(t==2)
		            {
			                outf<<"Time: "<<endl;
		                    outf<<"* 3:00 pm\n";
booking();
	                if(cl==1)
	                {

		                    bookb();
			                bill=si*2000+br*1500;
				            cout<<"Bill:"<<bill;	
					        system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
	                else if(cl==2)
	                {
	                        booke();
        				    bill=si*1600+br*1000;
					        cout<<"Bill:"<<bill;
						    system("cls");
					        billing();
							 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();	
		            }
		       }
		            else
		       {
			        cout<<"!!!!!!Invalid number please enter the number again"<<endl;
			        goto mo;
		       }
	       }}
            else if(j==2)
			    {
				        cout<<"1.From Peshawer to Quetta\n";
		                cout<<"2.From Quetta to Lahore \n";
		            u:
		                    cout<<"Select Destination no. : ";
	                        cin>>tu;
	                if(tu==1)
		           {
		                    outf<<"* Peshawer to Quetta \n";
		                    cout<<"[1] 10:00 am\n";			
		                    cout<<"[2] 9:00 pm\n";
		                    cout<<"select the time"<<endl;
		                    cin>>t;
		                if(t==1)
		                {
		                	cout<<"Time: "<<endl;
		                    cout<<"* 10:00 am\n";
			                outf<<"Time: "<<endl;
		                    outf<<"* 10:00 am\n";		
                            booking();
	                        if(cl==1)
	                        {
		                       bookb();
			                   bill=si*3200+br*1500;
				               cout<<"Bill:"<<bill;
					           system("cls");
					           billing();
					            ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                        }
	                        else if(cl==2)
	                         {
		                     booke();
			                 bill=si*2900+br*1000;
			            	 cout<<"Bill:"<<bill;
				        	 system("cls");
				        	 billing();	
				        	  ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                        }
			            }
		            else if(t==2)
	             	{
	             			cout<<"Time: "<<endl;
		                    cout<<"* 9:00 pm\n";
		                	outf<<"Time: "<<endl;
		                    outf<<"* 9:00 pm\n";
		          booking();
	                if(cl==1)
	                {
		                    bookb();
			                bill=si*3200+br*1500;
			             	cout<<"Bill:"<<bill;
					        system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
	                else if(cl==2)
	                {
		                    booke();
				            bill=si*2900+br*1000;
				            cout<<"Bill:"<<bill;	
					        system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
		            }
		        }}
		    else if(tu==2)
		            {
		                    outf<<"* Quetta to Lahore  \n";
    	                    cout<<"[1] 1:30 am  \n";		
    	                    cout<<"[2] 2:30 pm  \n";
    	                    cout<<"select the time"<<endl;
		                    cin>>t;
    	            if(t==1)
    	            {
    		                outf<<"Time: "<<endl;
    		                outf<<"* 1:30 am  \n";
    		                booking();
	               if(cl==1)
                 	{
		                    bookb();
			                bill=si*2200+br*1500;
					        cout<<"Bill:"<<bill;
						    system("cls");
				         	billing();
							  ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();	
                 	}
	                else if(cl==2)
	                {
	                        booke();
		                    bill=si*1900+br*1000;
				         	cout<<"Bill:"<<bill;
						    system("cls");
				        	billing();
				        	 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
			    }
		            else if(t==2)
		            {
			                outf<<"Time: "<<endl;
			                outf<<"* 2:30 pm  \n";
                           booking();
	                if(cl==1)
	                {
                         	bookb();
			                bill=si*2200+br*1500;
					        cout<<"Bill:"<<bill;
						    system("cls");
					        billing();
							 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();	
	                }
	                else if(cl==2)
	                {
	                        booke();
			                bill=si*1900+br*1000;
					        cout<<"Bill:"<<bill;
						    system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
				}
		   }
		else
		{
			                cout<<"!!!!!Invalid number please enter the number again"<<endl;
			                goto u;
		}
}
		        else if(j==3)
			        {
			                cout<<"1.From Lahore to Peshawer\n";
			                cout<<"2.From Karachi to Quetta \n";
			                we:
			                cout<<"Select Destination no. : ";
	                        cin>>w;
	                if(w==1)
		            {
		                    outf<<"* Lahore to Peshawer\n";
		                    cout<<"[1] 12:00 am\n";			
		                    cout<<"[2] 5:00 pm\n";
		                    cout<<"select the time"<<endl;
		                    cin>>t;
    	            if(t==1)
                 	{
    		                outf<<"Time: "<<endl;
    		                outf<<"* 12:00 am\n";
    		booking();
	                if(cl==1)
	                {   
	                        bookb();
			                bill=si*3000+br*1500;
			            	cout<<"Bill:"<<bill;
					        system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
	                else if(cl==2)
	                {
	                        booke();
			                bill=si*2800+br*1000;
				        	cout<<"Bill:"<<bill;
						    system("cls");
				            billing();
				             ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
				}
		            else if(t==2)
		            {
			                outf<<"Time: "<<endl;
		                    outf<<"* 5:00 pm\n";
			booking();	
	                if(cl==1)
	                {
	                        bookb();
			                bill=si*3000+br*1500;
				            cout<<"Bill:"<<bill;
					        system("cls");
				         	billing();
				         	 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
	                else if(cl==2)
	                {
	                        booke();
				            bill=si*2800+br*1000;
					        cout<<"Bill:"<<bill;
						    system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	            	}
		    }   }
		            else if(w==2)
		            {
	    	                outf<<"* Karachi to Quetta  \n";			
			                cout<<"[1] 7:00 am\n";			
			                cout<<"[2] 7:00 pm\n";
			                cout<<"select the time"<<endl;
	                    	cin>>t;
    	            if(t==1)
    	            {
    		                outf<<"Time: "<<endl;
    		                outf<<"* 7:00 am\n";
booking();
	                if(cl==1)
	                {
	                        bookb();
	                        bill=si*2500+br*1500;
					        cout<<"Bill:"<<bill;
						    system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
					}
	               else if(cl==2)
	                {
	                        booke();
    				        bill=si*2000+br*1000;
				            cout<<"Bill:"<<bill;
					        system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
		        }    }
		            else if(t==2)
		            {
			                outf<<"Time: "<<endl;
			                outf<<"* 7:00 pm\n";
			                	booking();
	                        if(cl==1)
	                {
	                        bookb();
		                    bill=si*2500+br*1500;
					        cout<<"Bill:"<<bill;
						    system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
             	    else if(cl==2)
	                {
	                        booke();
		                	bill=si*2000+br*1000;
				            cout<<"Bill:"<<bill;
					        system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
				}
		            else
		            {
			            cout<<"!!!!!!Invalid number please enter the number again"<<endl;
			            goto we;
		            }
			    }}
		           else if(j==4)
			        {
				            cout<<"1.From Peshawer to Karachi\n";
			                cout<<"2.From Quetta to Peshawer \n";
			                th:
			                cout<<"Select Destination no. : ";
	                        cin>>th;
	                if(th==1)
		            {
			                outf<<"* Peshawer to Karachi\n";			
			                cout<<"3:00 am \n";			
			                cout<<"8:00 pm\n";
			                cout<<"select the time"<<endl;
			                cin>>t;
			        if(t==1)
			        {
				            outf<<"Time: "<<endl;
			                outf<<"3:00 am \n";
			                	booking();
                	if(cl==1)
	                {

                        	bookb();
			                bill=si*2000+br*1500;
		                    cout<<"Bill:"<<bill;
			                system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
	               else if(cl==2)
	                {
	                        booke();
			                bill=si*1600+br*1000;
					        cout<<"Bill:"<<bill;
						    system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
			    }
			        else if(t==2)
			        {
				            outf<<"Time: "<<endl;
			                outf<<"8:00 pm\n";
			                booking();
	                if(cl==1)
	                {
	                        bookb();
			                bill=si*2000+br*1500;
		                    cout<<"Bill:"<<bill;
			                system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
                    }
	                else if(cl==2)
	                {
	                        booke();
			                bill=si*1600+br*1000;
					        cout<<"Bill:"<<bill;
						    system("cls");
					        billing();
					         ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	                }
				}
		    }
		    else if(th==2)
		    {
		    outf<<"* Quetta to Peshawer\n";		    
	        cout<<"[1] 9:00 am  \n";
            cout<<"[2] 12:05 pm \n";
                            t:
                            cout<<"select the time"<<endl;
                            cin>>t;
                    if(t==1)
                    {
                        	outf<<"Time: "<<endl;
         	                outf<<"* 9:00 am  \n";
         	                	booking();
	                        if(cl==1)
	                        {
	                        bookb();
			                bill=si*3200+br*1500;
				            cout<<"Bill:"<<bill;
					system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
	else if(cl==2)
	{
	booke();
			bill=si*2900+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
         		
		 }
		 else if(t==2)
		 {
		 	outf<<"Time: "<<endl;
		 	 outf<<"* 12:05 pm \n";
		 	 	booking();
	if(cl==1)
	{
	bookb();
			bill=si*3200+br*1500;
				cout<<"Bill:"<<bill;
					system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
	else if(cl==2)
	{
	booke();
	
		 	 	bill=si*2900+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
		 }
		}
		else
		{
			cout<<"!!!!!Invalid number please enter the number again"<<endl;
			goto t;
		}
			}}
		else if(j==5)
			{
			cout<<"1.From Lahore to Quetta\n";
			cout<<"2.From Karachi to Quetta\n";
			fr:
			cout<<"Select Destination no. : ";
	        cin>>f;
	    if(f==1)
		{
		outf<<"* Lahore to Quetta  \n";			
		cout<<"[1] 1:00 am \n";			
		cout<<"[2] 6:00 pm\n";
		cout<<"select the time"<<endl;
		cin>>t;
		if(t==1)
		{
			outf<<"Time: "<<endl;
			outf<<"* 1:00 am \n";
				booking();
	if(cl==1)
	{
	bookb();
			bill=si*2200+br*1500;
				cout<<"Bill:"<<bill; 
					system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
	else if(cl==2)
	{
	booke();
			bill=si*1900+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
			                	
		}
		else if(t==2)
		{
			outf<<"Time: "<<endl;
			outf<<"* 6:00 pm\n";
				booking();
	if(cl==1)
	{
	bookb();
			bill=si*2200+br*1500;
				cout<<"Bill:"<<bill;
					system("cls");
					billing(); 
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
	else if(cl==2)
	{
	booke();
			bill=si*1900+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
				
		}
		}
		else if(f==2)
		{
		outf<<"* Karachi to Quetta  \n";		
		cout<<"[1] 7:00 am\n";			
		cout<<"[2] 7:00 pm\n";
		cout<<"select the time"<<endl;
		cin>>t;
		if(t==1)
		{
			outf<<"Time: "<<endl;
			outf<<"* 7:00 am\n";
				booking();
	if(cl==1)
	{
	bookb();
			bill=si*2500+br*1500;
				cout<<"Bill:"<<bill;
					system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
	else if(cl==2)
	{
	booke();
			bill=si*2200+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
			
		}
		else if(t==2)
		{
			outf<<"Time: "<<endl;
			outf<<"* 7:00 pm\n";
			booking();
	if(cl==1)
	{
	bookb();
			bill=si*2500+br*1500;
				cout<<"Bill:"<<bill;
					system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
	else if(cl==2)
	{
	booke();
			bill=si*2200+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
				
		}
		}
		else
		{
			cout<<"!!!!!!Invalid number please enter the number again"<<endl;
			goto fr;
		}
	}
		else if(j==6)
			{
			cout<<"1.From Peshawer to Quetta\n";
			cout<<"2.From Quetta to Karachi\n";	
			sd:
			cout<<"Select Destination no. : ";
	        cin>>sa;
	    if(sa==1)
		{
			outf<<"* Peshawer to Quetta \n";			
			cout<<"[1] 10:00 am\n";			
			cout<<"[2] 9:00 pm\n";
			cout<<"select the time"<<endl;
			cin>>t;
			if(t==1)
			{
				outf<<"Time: "<<endl;
				outf<<"* 10:00 am\n";
				booking();
	if(cl==1)
	{	
	bookb();
			bill=si*3200+br*1500;
				cout<<"Bill:"<<bill;
					system("cls");
					billing();	
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();	
	}
	else if(cl==2)
	{
	booke();
			bill=si*2900+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}			
		}
			else if(t==2)
			{
				outf<<"Time: "<<endl;
					outf<<"* 9:00 pm\n";
					booking();
	if(cl==1)
	{
	bookb();
			bill=si*3200+br*1500;
				cout<<"Bill:"<<bill;
					system("cls");
					billing();	
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();	
	}
	else if(cl==2)
	{
	booke();
			bill=si*2900+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
				
			}
		}
		else if(sa==2)
		{
            outf<<"* Quetta to Karachi \n";			 
        	cout<<"[1] 12:45 pm \n";
        	cout<<"[2] 5:45 pm  \n";
        	cout<<"select the time"<<endl;
        	cin>>t;
        	if(t==1)
        	{
        		outf<<"Time: "<<endl;
        		outf<<"* 12:45 pm \n";
        			booking();
	if(cl==1)
	{
	bookb();
			bill=si*2500+br*1500;
				cout<<"Bill:"<<bill;
					system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
	else if(cl==2)
	{
	booke();
			bill=si*2200+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}		
			}
			else if(t==2)
			{
				outf<<"Time: "<<endl;
				outf<<"* 5:45 pm  \n";
					booking();
	if(cl==1)
	{
	bookb();
			bill=si*2500+br*1500;
				cout<<"Bill:"<<bill;
					system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
	else if(cl==2)
	{
	booke();
			bill=si*2200+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
					
			}
		}
		else
		{
			cout<<"!!!!!Invalid number please enter the number again"<<endl;
			goto sd;
		}
		}
		else if(j==7)
			{
				cout<<"From Peshawer to Lahore \n";
				cout<<" From Lahore to Quetta\n";
				sn:
				cout<<"Select Destination no. : ";
	            cin>>su;
	    if(su==1)
		{
			outf<<"* Peshawer to Lahore \n";			
			cout<<"[1] 2:00 am \n";			
			cout<<"[2] 1:00 pm\n";
			cout<<"select the time"<<endl;
			cin>>t;
			if(t==1)
			{
				outf<<"Time: "<<endl;
				outf<<"* 2:00 am \n";
					booking();
	if(cl==1)
	{
	bookb();
			bill=si*3000+br*1500;
				cout<<"Bill:"<<bill;
					system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();	
	}
	else if(cl==2)
	{
	booke();
			bill=si*2800+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();	
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
				
			}
			else if(t==2)
			{
				outf<<"Time: "<<endl;
			outf<<"* 1:00 pm\n";	
				booking();
	if(cl==1)
	{
	bookb();
		outf<<"Brith:"<<br<<'\n';
			bill=si*3000+br*1500;
				cout<<"Bill:"<<bill;
					system("cls");
					billing();	
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
	else if(cl==2)
	{
	    booke();
			bill=si*2800+br*1000;
					cout<<"Bill:"<<bill;
						system("cls");
					billing();	
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
		
			}
		}
		else if(su==2)
		{
            outf<<"* Lahore to Quetta  \n";			
			cout<<"[1] 1:00 am \n";			
			cout<<"[2] 6:00 pm\n";
			cout<<"select the time"<<endl;
			cin>>t;
			if(t==1)
			{
				outf<<"Time: "<<endl;
				outf<<"* 1:00 am \n";
					booking();
	if(cl==1)
	{
	bookb();
			bill=si*2200+br*1500;
				cout<<"Bill:"<<bill;
				system("cls");
				billing();
				 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
	else if(cl==2)
	{
		booke();
		outf<<"Brith:"<<br<<'\n';
			bill=si*1900+br*1000;
					cout<<"Bill:"<<bill;
					system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
						
			}
			else if(t==2)
			{
				outf<<"Time: "<<endl;
					booking();
	if(cl==1)
	{
		bookb();
			bill=si*2200+br*1500;
				cout<<"Bill:"<<bill;
				system("cls");
				billing();
				 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
	else if(cl==2)
	{
	 booke();
			bill=si*1900+br*1000;
					cout<<"Bill:"<<bill;
					system("cls");
					billing();
					 ofstream write;
        write.open("record.txt",ios::app);
        write<<" "<<cl1<<" "<<si<<" "<<br<<" "<<bill;
		write.close();
	}
}}
		else
		{
			cout<<"!!!!!!Invalid number please enter the number again"<<endl;
			goto sn;
		}
}
}
 }
  	myfile.close();
}
else
	{
		int num;
		system("cls");
	 rail();
	 cout<<"                     >>>>>>>>>>>>>Wrong Password<<<<<<<<<<<<<<<<<<: \n";
	cout<<"\t\tPRESS (1) Re-Enter login ID \n\t\tpress another integer to go to main manu ";
	cin>>num;
	if(num==1)
	{
		goto d;
	}
	else
	{
			menu();
	}

    }
    
}
void search()
{
system("cls");
	rail();
	int i=0;
	string search,sn,fn,ln,pn,cnic,cl,si,br,bill;
	
	cout<<"\n\t Enter Serial Number To Search A Record : ";
	cin>>search;
	ifstream read;
	read.open("record.txt");
	
	while(!read.eof())
	{
		read>>sn>>fn>>ln>>pn>>cnic>>cl>>si>>br>>bill;	
	

	if(search==sn&&i==0)
	{
	cout<<"serial number : "<<sn<<endl;
	cout<<"name  : "<<fn<<" "<<ln<<endl;
    cout<<"contact number : "<<pn<<endl;
    cout<<"cnic number : "<<cnic<<endl;
    cout<<"class : "<<cl<<endl;
    cout<<"seats : "<<si<<endl;
    cout<<"birth : "<<br<<endl;
    cout<<"bill : "<<bill<<endl;
i++;		
	}
	}
	read.close();
	  if(search!=sn)
{
	cout<<"\n\t\t!!!!Data Not Find\n";

	
}
	getch();

	menu();
	}
