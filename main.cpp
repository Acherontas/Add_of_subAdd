/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/*
 * File:   main.cpp
 * Author: Aionnio
 *
 * Created on 27 Αυγούστου 2023, 4:13 μ.μ.
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <chrono>
#include <atomic>
#include <thread>
#include <climits>
#include <limits>
#include <iomanip>
#include <vector>
#include <sstream>
#include <list>
#include <cstring>
#include <fstream>
#include <string>
#include <locale>

using namespace std;


int cdi=0;
int fl=0;
int mnu=0;
int m;
int cto=1;
string mn;
long long int cd(long long int n){
    m=n%10;
    cdi+=m;
    fl=-1;
    cto+=1;
    if(n/10==0){
        fl=1;
               if(fl==1){}
               return cdi;   //return 1;
    }
    else
    {
        cd(n/10);
    }
    B:
    return cdi;
}
int cld=0;
int cdis(long long int nn,int dkp)
{
    cdi=0;
         int cdl=cd(nn);
         if(dkp==1){
         cout<<"\n";
         cout<<"Initial sum = " << cdl <<"\n";
         cout<<"\n";}
         cld=cdl;
         if(cdl>9){
             if(dkp==1){
             cout<<"---------Internal Sum -----------\n";}
             cdi=0;
             while(cdl>9){cdi=0;cdl=cd(cdl);
             if(dkp==1){
             cout<<"|---> " << cdl <<"\n";}
             if(cdl<=9){
                 if(dkp==1){
                 cout<<"|---> Exiting with " << cdl <<"\n"; cout<<"--------End of Sum------------\n";}
             break;}
             }
         }
         if(dkp==1){
         cout<<"\n";}
         return cdl;
}
int cnt_them=1;
int ct_them(long long int n){
    if(n/10==0){cnt_them+=1;}
    else{cnt_them+=1;ct_them(n/10);}
    return cnt_them-1;
}

int uniq(long long int pt){
    string k=to_string(pt);
    string fn;
    fn+=k.at(0);
    int kli=stoi(fn);
   // cout<<"kli " << kli <<"\n";
    return kli;
}
int mo[19];
int mt[19];
int cntmp[3];int cttmp;
long long int *ptr,arr[20],lk;
int ctn=0;int ctt=0;int lct=0;
string inj;
string msone,mstwo;
void show_r(int tblin,int sxma){
    if(tblin==1){for(int i=0;i<=sxma;i++){cout<<mo[i] << " | ";}}
    if(tblin==2){for(int i=0;i<=sxma;i++){cout<<mt[i] <<" | ";}}
    if(tblin==3){for(int i=0;i<=sxma;i++){cout<<cntmp[i]<<" | ";}}
}
int inject(string st,int tbl)
{

  free(ptr);
  char k;lct=0;ctn=0;ctt=0;
  ptr = (long long int*) malloc(sizeof(long long int)*st.size());
  for(int i=0;i<=st.size()-1;i++)
  {
      k=st.at(i);
      lk=stoll(&k);
       int uq=uniq(lk);
     *(ptr+i)=stoll(&st.at(i));
     cout<<"@ Inject char " <<k << " int lk " << lk << " uq " << uq << " ptr " << *(ptr+i) <<"\n";
     if(tbl==1){mo[i]=uq; ctn+=1;// cout<<uq <<" | " ;
     }
     if(tbl==2){mt[i]=uq; ctt+=1;// cout<<uq <<" | " ;
     }
     if(tbl==3){cntmp[i]=uq;cttmp+=1;//cout<<"temps " << uq << " | ";
     }
  }
  if(tbl==1){show_r(1,ctn);}
  if(tbl==2){show_r(2,ctt);}
  if(tbl==3){show_r(3,cttmp);}
  cout<<"\n";
  if(tbl==1){lct=ctn;}
  if(tbl==2){lct=ctt;}
     return lct;
}

void koulourizo(){
    cttmp=0;for(int i=0;i<=19;i++){mo[i]=0;mt[i]=0;cntmp[i]=0;}
}

long long int retru(string st,int tbl)
{
  free(ptr);
  cout<<"---------- using string number: " << st <<" <-> \n";
  char k;lct=0;ctn=0;ctt=0;
  ptr = (long long int*) malloc(sizeof(long long int)*st.size());
  for(int i=0;i<=st.size()-1;i++)
  {
      k=st.at(i);
      lk=stoll(&k);
      int uq=uniq(lk);
     *(ptr+i)=stoll(&st.at(i));
     cout<<"@ Retr inject char " <<k << " int lk " << lk << " uq " << uq << " ptr " << *(ptr+i) <<"\n";
     if(tbl==1){mo[i]=uq; ctn+=1; //cout<<uq <<" | ";
     }
     if(tbl==2){mt[i]=uq; ctt+=1;// cout<<uq <<" | ";
     }
     if(tbl==3){cntmp[i]=uq;cttmp+=1; //cout<<"temps " << uq << " | ";
     }
  }
  cout<<"\n";
  if(tbl==1){show_r(1,ctn);}
  if(tbl==2){show_r(2,ctt);}
  if(tbl==3){show_r(3,cttmp);}
  cout<<"With ::= ";
  if(tbl==1){lct=ctn;}
  if(tbl==2){lct=ctt;}
  cout<<"returning string to int: " << *ptr <<" ----------> \n";
  return *ptr;
}

long long int mone,mtwo,tmp,rst,ru;//,rt,rk,ct;
int dffd;int dsum;
string tmpo,tmpt;
string twov;
long long int st, suml,stbl,sbl;
long long int lo,lkp;

const int jo=100;long long int joa[jo];int jj=0;
const int jk=100;long long int jok[jk];int jjk=0;

void da_one(string  nmb,int jjio,long long int stb){
    cout<<"--------> for " << nmb << " and " << jjio <<" and stable " << stb <<"\n";
    st=inject(nmb,1);
    cout<<"with size " << st <<"\n";cout<<"\n";
    cout<<"Keeping stable  " << stb <<"\n";
    suml=mtwo+mone;
    cout<<"Main sum: " << mtwo << " + " << mone << " = " << suml <<"\n";
    cout<<"\n";
for(;;){
       suml=0;
       lo=retru(nmb,0);
       suml=stb+lo;
       cdi=0;cld=0;
       lkp=cdis(suml,0);
       if(jjio==1){joa[jj]=lo;jj+=1;}
       if(jjio==2){jok[jjk]=lo;jjk+=1;}
       cout<<"@ sum " << stb << " + " << lo << " = " << suml <<" and " << cld << " with " << lkp <<"\n";
    st=inject(nmb,1);
  //  cout<<"entering with size " << st <<"\n";
    cout<<"<----------\n";
    cout<<"\n";
//    cout<<"---------------\n";
     if(nmb.size()==1){cout<<"Stopping with size: " << nmb.size() <<"\n"; break;}
    nmb.clear();
    twov.clear();
   for(int i=0;i<=cttmp;i++){cntmp[i]=0;}
       cttmp=0;
   //    cout<<"---------------\n";
   //    cout<<"with size " << st <<"\n";
    for(int i=0;i<=st;i++)
    {
        dsum=0;
        dffd=st-i;
        if(dffd!=2){nmb+=to_string(mo[i]);
       // cout<<"current nmb " << nmb <<"\n";
        }
        if(dffd==2){
        dsum=mo[i]+mo[i+1];  nmb+=to_string(dsum);
        cnt_them=1;int lk=ct_them(dsum);
       // cout<<"lk size " << lk <<"\n";
       // cout<<"dsum " << dsum <<"\n";
       // cout<<"@ 2 " << nmb <<"\n";
        if(lk==1){
      //  cout<<"changing mo @ 1 " << mo[i] << " " << mo[i+1] <<"\n";
        mo[i]=dsum;mo[i+1]=0;
      //  cout<<"with @ 1 " << mo[i] << " " << mo[i+1] <<"\n";
      //  cout<<"@ 1 nmb " << nmb <<"\n";
        break;}
        if(lk==2){twov+=to_string(dsum);int mt=inject(twov,3);
       // cout<<"Twov @ 2 " <<twov <<"\n";
       // cout<<"changing mo @ 2 " << mo[i] << " " << mo[i+1] <<"\n";
        mo[i]=cntmp[0];mo[i+1]=cntmp[1];
      //  cout<<"with @ 2 " << mo[i] << " " << mo[i+1] <<"\n";
      //  cout<<"@ 2 nmb " << nmb <<"\n";
        break;
        }
        }
    }
    if(dffd==1){break;}
  //  std::this_thread::sleep_for(std::chrono::milliseconds(200));
   }
}
int main(int argc, char** argv) {
   cout<<"mone: ";cin>>mone;
   cout<<"mtwo: ";cin>>mtwo;
   msone+=to_string(mone);mstwo+=to_string(mtwo);
 //  cout<<"keeping stable one or two: [1-2] " ; cin>>sbl;
   cout<<"\n";
   rst=mone+mtwo;
   cdi=0;cld=0;
   cout<<"generated sums for " << mone << " + " << mtwo << " = " << rst <<"\n";
   ru=0; ru=cdis(rst,1);
   cout<<"\n";
   tmp=mtwo;
   cout<<"\n";
   tmpo+=msone;
   da_one(tmpo,1,mtwo);
   cout<<"<-------------\n";
   tmpo.clear();
   koulourizo();
   tmpo+=mstwo;
   cout<<"\n";
   da_one(tmpo,2,mone);
   cout<<"<-------------\n";
   cout<<"\n";
   cout<<"with counters " << jj << " and " << jjk <<"\n";
   cout<<"first \n";
       long long int sml=0;long long int rl;
       for(int i=0;i<=jj;i++){
           for(int j=0;j<=jjk;j++)
           {
           if(joa[i]!=0 && jok[j]!=0)
           {
               sml=joa[i]+jok[j];
               cdi=0;
               rl=cdis(sml,0);
               cout<<" ---> @@ tbls @@ <--- " << joa[i] << " + " << jok[j]  << " = " << sml <<" and " << cld << " with " << rl <<"\n";
           }
           }
       }
    return 0;
}

