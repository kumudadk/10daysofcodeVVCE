int main()    
{
    int n=0;
    scanf("%d",&n);
          
    int *arr = (int*)calloc(100,sizeof(int)); 
    //For implementing counting sort
          
    int *input = (int*)calloc(n,sizeof(int)); 
    //For storing the input integers
    char **strings = (char**)calloc(n,sizeof(char*));
    //For storing the input strings
    for(int i=0;i<n;i++) strings[i]=(char*)calloc(10,sizeof(char));
    
    int num=0;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        input[i]=num;
        arr[num]++;
        scanf("%s",strings[i]);
    }
    
    for(int i=0;i<100;i++)
    {
        int j=0;
        while(arr[i]>0)             
        {
            while(input[j]!=i)    
            //Find the number in input list 
                j++;
            if(j<n/2)
                printf("- ");
            else
                printf("%s ",strings[j]); 
             //print corresponding string
             
            j++;   
//Increment j to find other instances further ahead in input
            arr[i]--;       //Decrement count 
        }
    }
    return 0;
}