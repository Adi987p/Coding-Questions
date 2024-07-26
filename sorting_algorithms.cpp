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

