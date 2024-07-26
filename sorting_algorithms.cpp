//1.Selection_Sort
    //selects minimum and swap
void selectionsort(vector<int>&v)
{
    int size=v.size();
    int min;
    
    for(int i=0;i<size-1;i++)
    {
        min=i;
        for(int j=i+1;j<size;j++)
        {
           if(v[j]<v[min])
           {
               min=j;
           }
        }
        
        swap(v[i],v[min]);
    }
}

//2.bubble_sort
      //compare adjacent and swap it greater

void bubblesort(vector<int>&v)
{
    int size=v.size();
    bool flag=false;
    
    for(int i=0;i<size;i++)
    {
        flag=false;
        for(int j=0;j<size-1-i;j++)
        {
           if(v[j]>v[j+1])
            swap(v[j],v[j+1]);
            flag=true;
        }
        
        if(flag==false)
            break;
    }
}

//3.Insertion_sort
    //select element and put it in its right position

void insertionsort(vector<int>&v)
{
    int size=v.size();
    int ind;
    
    for(int i=0;i<size;i++)
    {
        ind=i;
        while(ind>0 && v[ind]<v[ind-1])
        {
            swap(v[ind],v[ind-1]);
            ind--;
        }
    }
}

//4.MergeSort

void merge(vector<int>&v,int start,int mid,int end)
{
  vector<int>temp;
  int l=start;
   int r=mid+1;
  
  while(l<=mid && r<=end)
  {
      if(v[l]<v[r])
      {
         temp.push_back(v[l]);
         l++;
      }
      else
      {
          temp.push_back(v[r]);
          r++;
      }
      
      while(l<=mid)
       { temp.push_back(v[l]);
           l++;
       }
       while(r<=end)
      {
          temp.push_back(v[r]);
          r++;
      }
  }
  for(int i=start;i<=end;i++)
    {
        v[i]=temp[i-start];
    }
}

void partition(vector<int>&v,int l,int h)
{ 
    if(l>=h)
        return;
    int mid = l+(h-l)/2;
    partition(v,l,mid);
    partition(v,mid+1,h);
    merge(v,l,mid,h);
}
void mergesort(vector<int>&v)
{
    int n=v.size();
    partition(v,0,n-1);
}

