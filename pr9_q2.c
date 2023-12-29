/*
Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
For example,
Input:
Enter details of Student 1:
Roll no => 121
Name => Raj Patel
Chemistry => 95
Mathematics => 90
Physics => 88

Enter details of Student 2:
Roll no => 122
Name => Divya Sharma
Chemistry => 92
Mathematics => 80
Physics => 84

Enter details of Student 3:
Roll no => 123
Name => Piyush Mishra
Chemistry => 72
Mathematics => 87
Physics => 93

Enter details of Student 4:
Roll no => 124
Name => Vatsal Mangukiya
Chemistry => 68
Mathematics => 96
Physics => 85

Enter details of Student 5:
Roll no => 125
Name => Sagar Trivedi
Chemistry => 91
Mathematics => 89
Physics => 77


*/
#include<stdio.h>


	struct student{

	int id;
	char name[100];
	int chemistry;
	int mathematics;
	int physics;	
	};
	
int main()
{
	int i,n;
	printf("Enter the number of student : ");
	scanf("%d",&n);
	
	  struct student data[n];
	  
	  printf("Enter %d student Details \n \n",n);
	 
	  for(i=0; i<n; i++){
	  	printf("Enter the student roll no. : ");
		scanf("%d",&data[i].id);
		
		printf("Enter the student name : ");
		scanf("%s",&data[i].name);
		
    	printf("enter the chemistry marks : ");
		scanf("%d",&data[i].chemistry);	   	
	
		printf("Enter the mathemetics marks : ");
		scanf("%d",&data[i].mathematics);	   	
		
		printf("Enter the physics marks : ");
		scanf("%d",&data[i].physics);	   	
			  
		printf("\n");
	}
		 		   		

    printf(" Details of all student\n");
	int total=0;
	float percent=0;

    for(i=0; i<n; i++){
        printf("Roll : %d\n",data[i].id);

        printf("Name : %s (%d)\n",data[i].name,data[i].id);

        printf("Chemistry : %d\n",data[i].chemistry);

        printf("Mathemetics : %d\n",data[i].mathematics);

        printf("Physics: %d\n",data[i].physics);

        printf("Total marks : %d / %d\n",(data[i].chemistry+data[i].mathematics+data[i].physics),300);
        
        total = (data[i].chemistry+data[i].mathematics+data[i].physics);
        percent = total*100/300;
        
        printf("Total Percent : %f2 \n",percent);
       }
 
}

/*
Output:
Raj Patel (121)
Chemistry => 95
Mathematics => 90
Physics => 88
Total => 273/300
Percent => 91.00%

Divya Sharma (122)
Chemistry => 92
Mathematics => 80
Physics => 84
Total => 256/300
Percent => 85.33%

Piyush Mishra (123)
Chemistry => 72
Mathematics => 87
Physics => 93
Total => 252/300
Percent => 84.00%

Vatsal Mangukiya (124)
Chemistry => 68
Mathematics => 96
Physics => 85
Total => 249/300
Percent => 83.00%

Sagar Trivedi (125)
Chemistry => 91
Mathematics => 89
Physics => 77
Total => 257/300
Percent => 85.66%
*/
