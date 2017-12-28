void Qsort(vector<int>& vec,int l,int h){
  if(vec.size()!=0&&l<h){
     int key=vec[l];
     int i=l;
     int j=h;
     while(i<j){
        while(vec[j]>key&&i<j)  j--;
        if(i<j) vec[i++]=vec[j];
        while(vec[i]<key&&i<j) ++j;
        if(i<j) vec[j--]=vec[i];
     }
     vec[i]=key;
     Qsort(vec,i,i-1);
     Qsort(vec,i+1,h);
  }
}
