import java.util.Scanner;

public class shellsort {
	 static void sort(int arr[])
	  {
		  int n=arr.length;
		  for(int i=n/2;i>=1;i=i/2)
		  {
			  for(int j=i;j<n;j++)
			  {
				  for(int k=j-i;k>=0;k=k-i)
				  {
					  if(arr[k+i]>arr[k])
					  {
						  break;
					  }
					  int t=arr[k+i];
					  arr[k+i]=arr[k];
					  arr[k]=t;
				  }
			  }
		  }
	  }
	  
	  public static void main(String[] args) {
		  Scanner sc=new Scanner(System.in);
		  System.out.println("Enter number of elements :");
		  int n=sc.nextInt();
		int arr[]=new int[n];
		System.out.println("Enter the elements :");
		for(int i=0;i<n;i++)
	    {
	    	arr[i]=sc.nextInt();
	    }
	    sort(arr);
	    for(int i=0;i<n;i++)
	    {
	    	System.out.print(arr[i] + " ");
	    }
	}
}
