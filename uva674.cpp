#include<bits/stdc++.h>
using namespace std;
int main(){
  int way[7490];
  int coin[5] = {50,25,10,5,1};
  memset(way,0,sizeof(way));
  way[0]=1;
  for(int j=0;j<5;j++){
    for(int i=1;i<7490;i++){
      if(i>=coin[j]){
        way[i]+=way[i-coin[j]];
      }
    }
  }
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    int d;
    scanf("%d",&d);
    cout<<way[d]<<endl;
  }

}
