#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
using namespace std;
class Equation
{
private:
	string p,x;
	string var[100],k[100];
	float coff[100];
public:
	void seteq(string g)
	{p=g;}
	void Get_terms()
	{	   
		
		string s=p,s2,s3[100],d[100];
		string h[100];
		for(int j=0;j<10;j++)
		{h[j]="";}
		int len,l=0,g,c2=2;
		char c;
		len=s.length();
		for(int i=0;i<len;i++)
		{
			
			len=s.length();
			c=s[i];
			if((s[0]=='+'||s[0]=='-')&&i==0)
				continue;
			if(c=='=')
			{
				d[l]=s.substr(0,i);
				char check;
				for(int u=0;u<i;u++)
				{
					check=d[l][u];
					if(check>64)
					{
						s3[l]=d[l].substr(u,(i-u));
						break ;}
						if(u==(i-1))
					{s3[l]="";
					}
					

				}
				 g=1;
						for(int p=0;p<l;p++)
						{
							if(s3[p]==s3[l])
							{

								float v,z,a;
								v=atof(d[l].c_str());
								if(v==0&&((d[l][0])=='+'))
								{v=1;}
								else if(v==0&&((d[l][0])=='-'))
								{v=-1;}
								else if(v==0&&(d[l][0]==s3[l][0]))
								{v=1;}
	
								z=atof(d[p].c_str());
								a=v+z;
								
								string endform ;
								ostringstream ss;
								ss<<a;
								endform=ss.str();
								if(a>=0)
								{endform="+"+endform;}
								h[p]=endform+s3[p];
								d[p]=h[p];
								g=(-1);
								s=s.erase(0,i+1);
								i=-1;
								if(a>=0)
								{endform="+"+endform;}
							}
						
					}
						if(g==1)
						{
					float f;
				f=atof(d[l].c_str());
				if(f==0&&((d[l][0])=='+'))
								{f=1;}
								else if(f==0&&((d[l][0])=='-'))
								{f=-1;}
								else if(f==0&&(d[l][0]==s3[l][0]))
								{f=1;}
	
				string eend;
				ostringstream ss;
				ss<<f;
				eend=ss.str();
				if(f>=0)
				{eend="+"+eend;}
				h[l]=eend+s3[l];
				d[l]=h[l];
				l++;
				s=s.erase(0,i+1);
				i=-1;
						}
						c2=-2;
			}
	        if(c=='-')
			{
				d[l]=s.substr(0,i);
							char check;
				for(int u=0;u<i;u++)
				{
					check=d[l][u];
					if(check>64)
					{
						s3[l]=d[l].substr(u,(i-u));
						break ;}
						if(u==(i-1))
					{s3[l]="";
					}
					
				}
				 g=1;
						for(int p=0;p<l;p++)
						{
							if(s3[p]==s3[l])
							{
								float v,z,a;
								v=atof(d[l].c_str());
								if(v==0&&((d[l][0])=='+'))
								{v=1;}
								else if(v==0&&((d[l][0])=='-'))
								{v=-1;}
								else if(v==0&&(d[l][0]==s3[l][0]))
								{v=1;}
	
								if(c2==(-2))
								{v=(-1)*v;;}
								z=atof(d[p].c_str());
								a=v+z;
								string endform ;
								ostringstream ss;
								ss<<a;
								endform=ss.str();
								if(a>=0)
								{endform="+"+endform;}
								h[p]=endform+s3[p];
								d[p]=h[p];
								
								g=(-1);
								s=s.erase(0,i);
								i=0;
								
							
							}
					}
						if(g==1)
						{ 
					float f;
				f=atof(d[l].c_str());
				if(f==0&&((d[l][0])=='+'))
								{f=1;}
								else if(f==0&&((d[l][0])=='-'))
								{f=-1;}
								else if(f==0&&(d[l][0]==s3[l][0]))
								{f=1;}
	
				if(c2==(-2))
				{f=(-1)*f;}
				string eend;
				ostringstream ss;
				ss<<f;
				eend=ss.str();
if(f>=0)
				{eend="+"+eend;}
				h[l]=eend+s3[l];
				d[l]=h[l];
					l++;
				s=s.erase(0,i);
				i=0;
				}
			}
	        if(c=='+')
			{
				d[l]=s.substr(0,i);
							char check;
				for(int u=0;u<i;u++)
				{
					check=d[l][u];
					if(check>64)  
					{
						s3[l]=d[l].substr(u,(i-u));
						break ;
					}
					if(u==(i-1))
					{s3[l]="";
					}
				}
			
				 g=1;
						for(int p=0;p<l;p++)
						{
							if(s3[p]==s3[l])
							{
								float v,z,a;
								v=atof(d[l].c_str());
								if(v==0&&((d[l][0])=='+'))
								{v=1;}
								else if(v==0&&((d[l][0])=='-'))
								{v=-1;}
								else if(v==0&&(d[l][0]==s3[l][0]))
								{v=1;}
	
								if(c2==(-2))
								{v=(-1)*v;;}
								z=atof(d[p].c_str());
								a=v+z;
								string endform ;
								ostringstream ss;
								ss<<a;
								endform=ss.str();
								if(a>=0)
								{endform="+"+endform;}
								h[p]=endform+s3[p];
								d[p]=h[p];
								
								g=(-1);
								s=s.erase(0,i);
								i=0;
							}
						}
				if(g==1)
				{
				float f;
				f=atof(d[l].c_str());
				if(f==0&&((d[l][0])=='+'))
								{f=1;}
								else if(f==0&&((d[l][0])=='-'))
								{f=-1;}
								else if(f==0&&(d[l][0]==s3[l][0]))
								{f=1;}
	
				if(c2==(-2))
				{f=(-1)*f;}
				string eend;
				ostringstream ss;
				ss<<f;
				eend=ss.str();
				if(f>=0)
				{eend="+"+eend;}
				h[l]=eend+s3[l];
				d[l]=h[l];
				l++;
				s=s.erase(0,i);
				i=0; 
				}
			}

		}
		d[l]=s;
		if(s[0]=='=')
		{s=s.erase(0,1);
		d[l]=s;}

						char check;
						for(int u=0;u<(s.length());u++)
				{
					check=d[l][u];
					if(check>64)  
					{
						s3[l]=d[l].substr(u,((s.length())-u));
						break ;
					}
					if(u==(s.length()-1))
					{s3[l]="";
					}
				}
				 g=1;
						for(int p=0;p<l;p++)
						{

							if(s3[p]==s3[l])
							{
								float v,z,a,q;
								v=atof(d[l].c_str());
								if(v==0&&((d[l][0])=='+'))
								{v=1;}
								else if(v==0&&((d[l][0])=='-'))
								{v=-1;}
								else if(v==0&&(d[l][0]==s3[l][0]))
								{v=1;}
	
								if(c2==(-2))
								{v=(-1)*v;;}
								z=atof(d[p].c_str());
								a=v+z;
								string endform ;
								ostringstream ss;
								ss<<a;
								endform=ss.str();
								if(a>=0)
				                {endform="+"+endform;}
								h[p]=endform+s3[p];
								d[p]=h[p];
								g=(-1);
								s="";
								h[l]="";
								d[l]="";
							}
						}
				if(g==1)
				{
				float f;
				f=atof(d[l].c_str());
				if(f==0&&((d[l][0])=='+'))
								{f=1;}
								else if(f==0&&((d[l][0])=='-'))
								{f=-1;}
								else if(f==0&&(d[l][0]==s3[l][0]))
								{f=1;}
	
				if(c2==(-2))
				{f=(-1)*f;}
				string eend;
				ostringstream ss;
				ss<<f;
				eend=ss.str();
				if(f>=0)
				{eend="+"+eend;}
				h[l]=eend+s3[l];
				d[l]=h[l];
				l++;
				s="";
				
				 
				}
				string check1,check2;
				for(int i=0;i<(l-1);i++)
				{
					for(int j=0;j<l-i-1;j++)
					{
						if(s3[j]>s3[j+1])
						{
							check1=s3[j];
						check2=h[j];
						
						s3[j]=s3[j+1];
						h[j]=h[j+1];
						s3[j+1]=check1;
						h[j+1]=check2;
						}
						
					}
				}
			
				if(s3[0]=="")
				{
				if(h[1][0]=='+')
				{h[1]=h[1].erase(0,1);}
				}
				if(s3[0]!="")
				{
				if(h[0][0]=='+')
				{h[0]=h[0].erase(0,1);}
				}
				string u="";
			for(int i=1;i<100;i++)
			{ 
				if(h[i]=="")
				break;
				u=u+h[i];
			
			}
			if(s3[0]=="")
			{
			if(h[0][0]=='+')
			{h[0][0]='-';}
			else{h[0]=h[0].erase(0,1);}
			}
			if(s3[0]=="")
				{
					u=u+"="+h[0];
			     }
			else
			{u="";
			for(int i=0;i<100;i++)
			{if(h[i]=="")
				break;
				u=u+h[i];
			
			}
			}
			for(int i=0;i<100;i++)
		{var[i]=s3[i];
		coff[i]=atof(h[i].c_str());
		k[i]=h[i];
			}
			if(var[0]!="")
				{
					u=u+"=0";
			}
			
			x=u;
		}
	void printeq()
		{
	
		cout<<x<<endl;
		}
    float get_coff(int i)
{return coff[i];
}
    string get_var(int i)
{return var[i];}
    string get_term(int i)
{return k[i];}
	float get_max_coff()
	{int max;
	string str;
	ostringstream ss;
	if(var[0]=="")
	{ss<<coff[1];
	str=ss.str();
	max=str.length();}
	if(var[0]!="")
	{ss<<coff[0];
	str=ss.str();
	max=str.length();}
	for(int i=1;i<100;i++)
	{string str2;
	ostringstream ss;
	ss<<coff[i];
	str2=ss.str();
		if(k[i]=="")
			break;
		if(str2.length()>max)
			max=str2.length();
	}
	return max;
	}
    int num_var()
{int n=0;
for(int i=0;i<100;i++)
	{
		if(k[i]=="")
			break;
		n++;}
	if(var[0]=="")
		return (n-1);
	else
		return n;
}
	float get_max_ofall()
	{int max;
	string str;
	ostringstream ss;
	ss<<coff[0];
	str=ss.str();
	max=str.length();
	for(int i=1;i<100;i++)
	{string str2;
	ostringstream ss;
	ss<<coff[i];
	str2=ss.str();
		if(k[i]=="")
			break;
		if(str2.length()>max)
			max=str2.length();
	}
	return max;
	}
};
int main()
		{
			Equation x[100];
			string k[100];
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>k[i];
		x[i].seteq(k[i]);
		x[i].Get_terms();

	}
	
	cin.ignore();
	string fun;
	 string g[100];
		 int z=0;
		 int c=1;
		 for(int i=0;i<100;i++)
		 {g[i]="";}
		 for(int i=0;i<n;i++)
		 {
			 for(int j=0;j<100;j++)
			 {
				 if(j==0&&x[i].get_var(0)=="")
				 {continue;}
				 if(x[i].get_var(j)=="")
				 {break;}
				 for(int k=0;k<z;k++)
				 {
					 if(x[i].get_var(j)==g[k])
				 {
					 c=0;
					 break;
				 }
				 }
				 if(c==1)
				 {
					 
					 g[z]=x[i].get_var(j);
				     z++;
				 }
				 c=1;
			 }

		 }
		 for(int i=0;i<z;i++)
		 {
			 for(int j=(i+1);j<z;j++)
			 {
				 string c;
				if(g[j]<g[i])
				{c=g[j];
				g[j]=g[i];
				g[i]=c;
				}
			 }
		 }
while(1)
{
	getline(cin,fun);	
	
	if((fun.substr(0,8))=="equation")
    {int i;
	i=atoi((fun.substr(9).c_str()));
	
		x[i-1].printeq();
	}
	


	if(fun=="num_vars")
	{
	cout<<z<<endl;
	}
	if((fun.substr(0,6))=="column")
	{
		string c=fun.substr(7);
		for(int j=0;j<n;j++)
		{int g=1;
			for(int i=0;i<100;i++)
		{
			if((x[j].get_var(i))==c)
			{cout<<x[j].get_coff(i)<<endl;
			g=-1;
			}
		
		}
			if(g==1)
				cout<<0<<endl;
		}
	}
	
	if((fun[0]=='D')&&(fun.length()>1)&&(fun[1]!='_'))
	{
		string s=fun.substr(2);
		 	float max=x[0].get_max_ofall();
		for(int i=1;i<n;i++)
		{if((x[i].get_max_ofall())>max)
		max=x[i].get_max_ofall();
		}
		int l;
		l=max;
		 int check=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<z;j++)
			{
				for(int k=0;k<100;k++)
				{
					check=1;
					if(x[i].get_var(k)==g[j])
					{if(g[j]!=s)
						cout<<x[i].get_coff(k);
					if(g[j]==s)
						cout<<x[i].get_coff(0);
					check=0;
					string  str2;
					ostringstream ss;
					if(g[j]!=s)
					ss<<(x[i].get_coff(k));
					if(g[j]==s)
				    ss<<x[i].get_coff(0);
					str2=ss.str();
					int l2=str2.length();
					for(int i=0;i<((l-l2)+4);i++)
                	{cout<<" ";}
					break;
					}
				}
              if(check==1)
              {string str2;
			  ostringstream ss;
				  if(g[j]!=s)
						cout<<0;
					if(g[j]==s)
						cout<<x[i].get_coff(0);
				  if(g[j]!=s)
					ss<<(0);
					if(g[j]==s)
				    ss<<x[i].get_coff(0);
					str2=ss.str();
					int l2=str2.length();
			  for(int i=0;i<(l-l2+4);i++)
			  {cout<<" ";}
			  }
			
			}
			cout<<"\n";
		}
             	}

		if(fun=="D")
	{
		 float max=x[0].get_max_coff();
		for(int i=1;i<n;i++)
		{if((x[i].get_max_coff())>max)
		max=x[i].get_max_coff();
		}
		int l;
		l=max;
		 int check=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<z;j++)
			{
				for(int k=0;k<100;k++)
				{
					check=1;
					if(x[i].get_var(k)==g[j])
					{cout<<x[i].get_coff(k);
					check=0;
					string  str2;
					ostringstream ss;
					ss<<(x[i].get_coff(k));
					str2=ss.str();
					int l2=str2.length();
					for(int i=0;i<((l-l2)+4);i++)
                	{cout<<" ";}
					break;
					}
				}
              if(check==1)
              {cout<<0;
			  for(int i=0;i<(l+3);i++)
			  {cout<<" ";}
			  }
			}
			cout<<"\n";
		}
             	}
		if(fun.substr(0,3)=="add")
		{
			string s1,s2;
			s1=fun.substr(4);
			int fin=s1.find(' ');
			s2=s1.substr(fin);
			int i1,i2;
			i1=(atoi(s1.c_str())-1);
			i2=(atoi(s2.c_str())-1);
			string g1[100];
		 int z=0;
		 int c=1;
		 for(int i=0;i<100;i++)
		 {g1[i]="";}
		 int h2=0;
		 for(int i=i1;h2<2;i=i2)
		 {
			 for(int j=0;j<100;j++)
			 {
				 if(j==0&&x[i].get_var(0)=="")
				 {continue;}
				 if(x[i].get_var(j)=="")
				 {break;}
				 for(int k=0;k<z;k++)
				 {
					 if(x[i].get_var(j)==g1[k])
				 {
					 c=0;
					 break;
				 }
				 }
				 if(c==1)
				 {				 
					 g1[z]=x[i].get_var(j);
				     z++;
				 }
				 c=1;
			 }
			 h2++;
			 }
		 for(int i=0;i<z;i++)
		 {
			 for(int j=(i+1);j<z;j++)
			 {
				 string c;
				if(g1[j]<g1[i])
				{c=g1[j];
				g1[j]=g1[i];
				g1[i]=c;
				}
			 }
		 }
		
		 int check=1;
		 int h=0;
		 float f2[2][100]={0};
		 for(int i=i1;h<2;i=i2)
		{   
			for(int j=0;j<z;j++)
			{
				for(int k=0;k<100;k++)
				{
					check=1;
					if(x[i].get_var(k)==g1[j])
					{
						f2[h][j]=x[i].get_coff(k);
					    check=0;
                        break;					
					}
				}
              if(check==1)
			  {
				  f2[h][j]=0;
			  }
			}
			h++;
			
		}
		string formula="";
		float f3=0;
		int coun=0;
		for(int j=0;j<z;j++)
		{
			for(int i=0;i<2;i++)
			{f3=f3+f2[i][j];}
			string str;
			ostringstream ss;
			ss<<f3;
			str=ss.str();
			if(f3>=0)
			{str="+"+str;}
			if(j==0||coun==0)
			{if(str[0]=='+')
			str=str.substr(1);
			}
			coun++;
			if(f3==0)
				continue;
			formula=formula+str+g1[j];
			f3=0;
		}
		string str2;
		ostringstream ss;
		ss<<(x[i1].get_coff(0)+x[i2].get_coff(0));
		str2=ss.str();
		formula=formula+"="+str2;
		cout<<formula<<endl;
			
		
		}
		if(fun.substr(0,8)=="subtract")
		{
			string s1,s2;
			s1=fun.substr(9);
			int fin=s1.find(' ');
			s2=s1.substr(fin);
			int i1,i2;
			i1=(atoi(s1.c_str())-1);
			i2=(atoi(s2.c_str())-1);
			string g2[100];
		 int z=0;
		 int c=1;
		 for(int i=0;i<100;i++)
		 {g2[i]="";}
		 int h2=0;
		 for(int i=i1;h2<2;i=i2)
		 {
			 for(int j=0;j<100;j++)
			 {
				if(j==0&&x[i].get_var(0)=="")
				 {continue;}
				 if(x[i].get_var(j)=="")
				 {break;}
				 for(int k=0;k<z;k++)
				 {
					 if(x[i].get_var(j)==g2[k])
				 {
					 c=0;
					 break;
				 }
				 }
				 if(c==1)
				 {				 
					 g2[z]=x[i].get_var(j);
				     z++;
				 }
				 c=1;
			 }
			 h2++;
			 }
		 for(int i=0;i<z;i++)
		 {
			 for(int j=(i+1);j<z;j++)
			 {
				 string c;
				if(g2[j]<g2[i])
				{c=g2[j];
				g2[j]=g2[i];
				g2[i]=c;
				}
			 }
		 }
		
		 int check=1;
		 int h=0;
		 float f2[2][100]={0};
		 for(int i=i1;h<2;i=i2)
		{   
			for(int j=0;j<z;j++)
			{
				for(int k=0;k<100;k++)
				{
					check=1;
					if(x[i].get_var(k)==g2[j])
					{
						f2[h][j]=x[i].get_coff(k);
					    check=0;
                        break;					
					}
				}
              if(check==1)
			  {
				  f2[h][j]=0;
			  }
			}
			h++;
			
		}
		 for(int i=0;i<100;i++)
		 {f2[1][i]=(f2[1][i])*(-1);}
		string formula="";
		float f3=0;
		int coun=0;
		for(int j=0;j<z;j++)
		{
			for(int i=0;i<2;i++)
			{f3=f3+f2[i][j];}
			string str;
			ostringstream ss;
			ss<<f3;
			str=ss.str();
			if(f3>=0)
			{str="+"+str;}
			if(j==0||coun==0)
			{if(str[0]=='+')
			str=str.substr(1);
			}
			coun++;
			if(f3==0)
				continue;
			formula=formula+str+g2[j];
			f3=0;
		}
		string str2;
		ostringstream ss;
		ss<<(x[i1].get_coff(0)-x[i2].get_coff(0));
		str2=ss.str();
		formula=formula+"="+str2;
		cout<<formula<<endl;
			
		
		}
        if(fun.substr(0,10)=="substitute")
		{
			string s1,s2,s3;
			s1=fun.substr(11);
			int fin=s1.find(' ');
			s2=s1.substr(fin+1);
			int fin2=s2.find(' ');
			s3=s2.substr(fin2);
			int i1,i2;
			i1=(atoi(s2.c_str())-1);
			i2=(atoi(s3.c_str())-1);
			string var=s1.substr(0,fin);
			string g[100];
		 int z=0;
		 int c=1;
		 for(int i=0;i<100;i++)
		 {g[i]="";}
		 int h2=0;
		 for(int i=i1;h2<2;i=i2)
		 {
			 for(int j=0;j<100;j++)
			 {
				 if(j==0)
				 {continue;}
				 if(x[i].get_var(j)=="")
				 {break;}
				 for(int k=0;k<z;k++)
				 {
					 if(x[i].get_var(j)==g[k])
				 {
					 c=0;
					 break;
				 }
				 }
				 if(c==1)
				 {				 
					 g[z]=x[i].get_var(j);
				     z++;
				 }
				 c=1;
			 }
			 h2++;
		 }
		 for(int i=0;i<z;i++)
		 {
			 for(int j=(i+1);j<z;j++)
			 {
				 string c;
				if(g[j]<g[i])
				{c=g[j];
				g[j]=g[i];
				g[i]=c;
				}
			 }
		 }
		 int check=1;
		 int h=0,c2[2],c3[2];
		 float f2[2][100]={0};
		 for(int i=i1;h<2;i=i2)
		{   
			for(int j=0;j<z;j++)
			{
				for(int k=0;k<100;k++)
				{
					check=1;
					if(x[i].get_var(k)==g[j])
					{
						f2[h][j]=x[i].get_coff(k);
					    check=0;
						if(g[j]==var)
						{c2[h]=k;
						c3[h]=j;}
                        break;					
					}
				}
              if(check==1)
			  {
				  f2[h][j]=0;
			  }
			}
			h++;
			
		}
		 float fl1,fl2;
		 fl1=x[i1].get_coff(c2[0]);
		 fl2=x[i2].get_coff(c2[1]);
		int coun=0;
		 for(int i=0;i<z;i++)
		 {
			 if(i==c3[1])
			 {
				 f2[1][i]=0;
			 continue;
			 }
			 f2[1][i]=(fl1/fl2)*(-1)*(f2[1][i]);
		 }
		f2[0][c3[0]]=0;
		int c4;
		for(int i=0;i<z;i++)
		{if(g[i]==var)
		{c4=i;
		break;
		}}
		string formula="";
		float f3=0;
		for(int j=0;j<z;j++)
		{   if(j==c4)
		    continue;
			for(int i=0;i<2;i++)
			{f3=f3+f2[i][j];}
			string str;
			ostringstream ss;
			ss<<f3;
			str=ss.str();
			if(f3>0)
			{str="+"+str;}
			if(j==0||coun==0)
			{if(str[0]=='+')
			str=str.substr(1);
			}
			coun++;
			if(f3==0)
				continue;
			formula=formula+str+g[j];
			f3=0;
		}
		string str2;
		ostringstream ss;
		ss<<(x[i1].get_coff(0)+((x[i2].get_coff(0))*(-1)*(fl1/fl2)));
		str2=ss.str();
		formula=formula+"="+str2;
		cout<<formula<<endl;

		
		}
if(fun=="D_value"||fun=="solve")
{
		int m=0;
	for(int i=0;i<100;i++)
	{
		if(x[0].get_var(i)==""&&i==0)
	    continue;
		if(x[0].get_var(i)=="")
	    break;
	m++;
	}
	int check=1;
	float d[100][100]={0};
		 for(int i=0;i<n;i++)
		{   
			for(int j=0;j<z;j++)
			{
				for(int k=0;k<100;k++)
				{
					check=1;
					if(x[i].get_var(k)==g[j])
					{
						d[i][j]=x[i].get_coff(k);
					    check=0;
                        break;					
					}
				}
              if(check==1)
			  {
				  d[i][j]=0;
			  }
			}
		
			
		}
		 for(int i=0;i<n;i++)
		 {d[i][n]=x[i].get_coff(0);}
		 int test2=2;
		 for(int i=0;i<n;i++)
		 {
			 for(int j=0;j<n;j++)
			 {
				 if(i==j&&d[i][j]==0)
				 {
					 int test;
					 for(int z=i;z<n;z++)
					 {
						 if(d[z][j]!=0)
						 {test=z;
						 break;
						 }
					 }
					 float arr[100];
					 for(int c1=0;c1<n+1;c1++)
					 {arr[c1]=d[i][c1];}
					 for(int c2=0;c2<n+1;c2++)
					 {d[i][c2]=d[test][c2];}
					 for(int c3=0;c3<n+1;c3++)
					 {d[test][c3]=arr[c3];}
					 test2=z-i;

						 
				  }
					 
				}
				 
			}
		 int test3;
		 if((test2%2)==0)
			 test3=1;
		 else
			 test3=-1;
		float f,f2=1;
		float total=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
				{
					float div=d[i][j],f3;
					total=(d[i][j])*total;
					
					for(int k=0;k<n+1;k++)
					{if(div==0)
					break;
						d[i][k]=(d[i][k])/div;}
					for(int z=i+1;z<n;z++)
					{
						f3=d[z][j];
						for(int y=0;y<n+1;y++)
						{
							d[z][y]=(((-1)*f3*(d[i][y]))+(d[z][y]));

						}
					}

				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
				{
					f2=f2*(d[i][j]);
				}
			}
		}
		f=total*f2*test3;
		if(fun=="D_value")
		{cout<<f<<endl;}
	    if(fun=="solve")
		{
			float arr3[100],f3=0;
			for(int i=n-1;i>=0;i--)
		{
			f3=0;
			
				for(int k=n-1;k>i;k--)
				{
					f3=f3+(d[i][k]*arr3[k]);
				}
			
			arr3[i]=(d[i][n]-f3)/(d[i][i]);

			}
		
		for(int i=0;i<n;i++)
		{cout<<g[i]<<"="<<arr3[i]<<endl;}
		}

}






if(fun=="quit")
{break;}
}
	
return 0;
}
	