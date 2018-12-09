#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//sets tables to zero
int table1[6][6];
int table2[6][6];
int p1bomb[6][6];
int p2bomb[6][6];
char p1name[10],p2name[10];
int p1pass,p2pass;

void setplayer1()
{
   int xarray[3]={0};
   int yarray[3]={0};
   int i,horver,x,y;
   //seting the 3,1 long ships
   for (i = 0;i < 3;)
   {
   printf("This is the number %d ship\n",i+1);
   printf("Enter the x value for your 1 long ships:");
   scanf("%d,\n",&xarray[0]);
   printf("Enter the y value for your 1 long ships:");
   scanf("%d,\n",&yarray[0]);
   
   //checks if given number is greater then the grid(6)
   if (xarray[0] > 6||yarray[0] > 6||xarray[0]<=0||yarray[0]<=0)
   {
   	printf("You must enter numbers that are in the grid meaning up to 6\n");
   	continue;
   }
   
   //checks if the spot is empty or not
   if (table1[xarray[0]-1][yarray[0]-1] != 0){
   	printf("there is already a ship there\n");
   	continue;
   }
   //checks if the spots next to it are empty or not
    
	
	
	if (table1[xarray[0]][yarray[0]]!= 0&&xarray[0]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[0]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[0]-2]!= 0&&xarray[0]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table1[xarray[0]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]-1][yarray[0]-1]!= 0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table1[xarray[0]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table1[xarray[0]-2][yarray[0]]!= 0&&xarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]-2][yarray[0]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table1[xarray[0]-2][yarray[0]-2]!= 0&&xarray[0]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
   
   //sets the table
   table1[xarray[0]-1][yarray[0]-1] = 1;
   i++;
   } 
	


 
	
   //setting 2,2 long ships	
   //looping twice because we got 2 ships
  	
	for (i = 0;i < 2;)
	{
	//checks if the ship is horizantal or vertical
   	printf("setting 2,2 long ships\n");
   	printf("This is the number %d ship\n",i+1);
   	printf("Enter 1 if you want a horizental ship\n");
   	printf("Enter 2 if you want a vertical ship\n");
   	scanf("%d,\n",&horver); 
	   
	   
	   
	//if its horizantal
	if (horver == 1)
   	{
	printf("Enter 2 x values for your 2 long ship:\n");
    scanf("%d,\n",&xarray[0]);
    scanf("%d,\n",&xarray[1]);
    printf("Enter the y value for your 2 long ship:");
    scanf("%d,\n",&yarray[0]);
    
    //checks if given number is greater then the grid(6)
   if (xarray[0] > 6||yarray[0] > 6||xarray[1] > 6||xarray[0]<=0||yarray[0]<=0||xarray[1]<=0)
   {
   	printf("You must enter numbers that are in the grid meaning up to 6\n");
   	continue;
   }
	
	//checks if the ship is connected or not
    if (xarray[0] != xarray[1] -1 && xarray[0]!=xarray[1]+1)
	{
		printf("you have entered x values that are not connected\n");
		continue;
	}
	//checks if the spot or spots are empty or not
    if (table1[xarray[0]-1][yarray[0]-1]!=0 || table1[xarray[1]-1][yarray[0]-1]!=0)
	{
   	 printf("there is already a ship there\n");
   	 continue;
    }
    //checks if the spots next to it are empty or not
    if (table1[xarray[0]][yarray[0]]!= 0&&xarray[0]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[0]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[0]-2]!= 0&&xarray[0]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table1[xarray[0]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table1[xarray[0]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table1[xarray[0]-2][yarray[0]]!= 0&&xarray[0]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]-2][yarray[0]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table1[xarray[0]-2][yarray[0]-2]!= 0&&xarray[0]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	//next point
	if (table1[xarray[1]][yarray[0]]!= 0&&xarray[1]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[1]][yarray[0]-1]!= 0&&xarray[1]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[1]][yarray[0]-2]!= 0&&xarray[1]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table1[xarray[1]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table1[xarray[1]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table1[xarray[1]-2][yarray[0]]!= 0&&xarray[1]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[1]-2][yarray[0]-1]!= 0&&xarray[1]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table1[xarray[1]-2][yarray[0]-2]!= 0&&xarray[1]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	
    //puts the ship
    table1[xarray[0]-1][yarray[0]-1] = 2;
	table1[xarray[1]-1][yarray[0]-1] = 2;
	i++;
	
	}
   	//if its vertical
	else if (horver== 2)
	{
	printf("Enter the x value for your 2 long ship:");
    scanf("%d,\n",&xarray[0]);
    printf("Enter 2 y values for your 2 long ship:\n");
    scanf("%d,\n",&yarray[0]);
    scanf("%d,\n",&yarray[1]);
    
    //checks if given number is greater then the grid(6)
   if (xarray[0] > 6||yarray[0] > 6||yarray[1] > 6||xarray[0]<=0||yarray[0]<=0||yarray[0]<=0)
   {
   	printf("You must enter numbers that are in the grid meaning up to 6\n");
   	continue;
   }
    
    
    //checks if the ship is connected or not
    if (yarray[0] != yarray[1] -1 && yarray[0]!=yarray[1]+1)
	{
		printf("you have entered y values that are not connected\n");
		continue;
	}
    //checks if the spot or spots are empty or not
    if (table1[xarray[0]-1][yarray[0]-1] != 0||table1[xarray[0]-1][yarray[1]-1] != 0)
	{
	printf("there is already a ship there\n");
   	continue;
    }
    
 
	//checks if the spots next to it are empty or not
    if (table1[xarray[0]][yarray[0]]!= 0&&xarray[0]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[0]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[0]-2]!= 0&&xarray[0]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table1[xarray[0]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table1[xarray[0]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table1[xarray[0]-2][yarray[0]]!= 0&&xarray[0]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]-2][yarray[0]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table1[xarray[0]-2][yarray[0]-2]!= 0&&xarray[0]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	//next point
	if (table1[xarray[0]][yarray[1]]!= 0&&xarray[0]<6&&yarray[1]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[1]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[1]-2]!= 0&&xarray[0]<6&&yarray[1]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table1[xarray[0]-1][yarray[1]]!= 0&&yarray[1]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table1[xarray[0]-1][yarray[1]-2]!= 0&&yarray[1]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table1[xarray[0]-2][yarray[1]]!= 0&&xarray[0]-2>=0&&yarray[1]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]-2][yarray[1]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table1[xarray[0]-2][yarray[1]-2]!= 0&&xarray[0]-2>=0&&yarray[1]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
    
    //puts the ship
    table1[xarray[0]-1][yarray[0]-1] = 2;
	table1[xarray[0]-1][yarray[1]-1] = 2;
	i++;
    
	}
	} 
    
    
    
    //setting 1,3 long ship
    //looping onece because i used continue
    for (i = 0;i < 1;)
    {
	//checks if the ship is horizantal or vertical
	printf("setting 1,3 long ship\n");
   	printf("Enter 1 if you want a horizental ship\n");
   	printf("Enter 2 if you want a vertical ship\n");
   	scanf("%d,\n",&horver);
   	//if its horizental
	if (horver == 1)
   	{
   	printf("Enter 3 x values for your 3 long ship:\n");
    scanf("%d,\n",&xarray[0]);
    scanf("%d,\n",&xarray[1]);
    scanf("%d",&xarray[2]);
    printf("Enter the y value for your 3 long ship:\n");
    scanf("%d,\n",&yarray[0]);
	
	//checks if given number is greater then the grid(6)
   if (xarray[0] > 6||yarray[0] > 6||xarray[1] > 6||xarray[2] > 6||xarray[0]<=0||yarray[0]<=0||xarray[1]<=0||xarray[2]<=0)
   {
   	printf("You must enter numbers that are in the grid meaning up to 6\n");
   	continue;
   }	
	
	//checks if the ship is 3 long
    if (xarray[0] != xarray[1] -1 && xarray[0]!=xarray[1]+1)
	{
	printf("you have entered x values that are not connected\n");
	continue;
	}
	if (xarray[1] != xarray[2] -1 && xarray[1]!=xarray[2]+1)
	{
	printf("you have entered x values that are not connected\n");
	continue;
	}
	//checks if the spot or spots are empty or not
    if (table1[xarray[0]-1][yarray[0]-1]!=0 || table1[xarray[1]-1][yarray[0]-1]!=0||table1[xarray[2]-1][yarray[0]-1]!=0)
	{
   	 printf("there is already a ship there\n");
   	 continue;
    }
    
    //checks if the spots next to it are empty or not
    if (table1[xarray[0]][yarray[0]]!= 0&&xarray[0]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours1");
		continue;
	}
	if (table1[xarray[0]][yarray[0]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours2");
		continue;
	}
	if (table1[xarray[0]][yarray[0]-2]!= 0&&xarray[0]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours3");
		continue;
	}
	
	
	if (table1[xarray[0]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours4");
		continue;
	}	
	if (table1[xarray[0]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours5");
		continue;	
	}


	if (table1[xarray[0]-2][yarray[0]]!= 0&&xarray[0]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours6");
		continue;
	}
	if (table1[xarray[0]-2][yarray[0]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours7");
		continue;	
	}
	if (table1[xarray[0]-2][yarray[0]-2]!= 0&&xarray[0]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours8");
		continue;	
	}
	//next point xarray 1 yarray0
	if (table1[xarray[1]][yarray[0]]!= 0&&xarray[1]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours9");
		continue;
	}
	if (table1[xarray[1]][yarray[0]-1]!= 0&&xarray[1]<6){
		printf("You must not have any ship next to yours10");
		continue;
	}
	if (table1[xarray[1]][yarray[0]-2]!= 0&&xarray[1]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours11");
		continue;
	}
	
	
	if (table1[xarray[1]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours12");
		continue;
	}	
	if (table1[xarray[1]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours13");
		continue;	
	}


	if (table1[xarray[1]-2][yarray[0]]!= 0&&xarray[1]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours14");
		continue;
	}
	if (table1[xarray[1]-2][yarray[0]-1]!= 0&&xarray[1]-2>=0){
	    printf("You must not have any ship next to yours15");
		continue;	
	}
	if (table1[xarray[1]-2][yarray[0]-2]!= 0&&xarray[1]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours16");
		continue;	
	}
	//next point xarray 2 yarray 0
    if (table1[xarray[2]][yarray[0]]!= 0&&xarray[2]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours17");
		continue;
	}
	if (table1[xarray[2]][yarray[0]-1]!= 0&&xarray[2]<6){
		printf("You must not have any ship next to yours18");
		continue;
	}
	if (table1[xarray[2]][yarray[0]-2]!= 0&&xarray[2]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours19");
		continue;
	}
	
	
	if (table1[xarray[2]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours20");
		continue;
	}	
	if (table1[xarray[2]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours21");
		continue;	
	}


	if (table1[xarray[2]-2][yarray[0]]!= 0&&xarray[2]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours22");
		continue;
	}
	if (table1[xarray[2]-2][yarray[0]-1]!= 0&&xarray[2]-2>=0){
	    printf("You must not have any ship next to yours23");
		continue;	
	}
	if (table1[xarray[2]-2][yarray[0]-2]!= 0&&xarray[2]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours24");
		continue;	
	}
    
	//puts the ship
    table1[xarray[0]-1][yarray[0]-1] = 3;
	table1[xarray[1]-1][yarray[0]-1] = 3;
	table1[xarray[2]-1][yarray[0]-1] = 3;
	i++;
	
    }
   //if its vertical
   if (horver == 2)
   	{
   	printf("Enter the x value for your 3 long ship:\n");
    scanf("%d,\n",&xarray[0]);
    printf("Enter 3 y values for your 3 long ship:\n");
    scanf("%d,\n",&yarray[0]);
	scanf("%d,\n",&yarray[1]);
    scanf("%d,\n",&yarray[2]);	
    
    //checks if given number is greater then the grid(6)
   if (xarray[0] > 6||yarray[0] > 6||yarray[1] > 6||yarray[2] > 6||xarray[0]<=0||yarray[0]<=0||yarray[1]<=0||yarray[2]<=0)
   {
   	printf("You must enter numbers that are in the grid meaning up to 6\n");
   	continue;
   }	
    
	
	//checks if the ship is 3 long
    if (yarray[0] != yarray[1] -1 && yarray[0]!=yarray[1]+1)
	{
	printf("you have entered y values that are not connected\n");
	continue;
	}
	if (yarray[1] != yarray[2] -1 && yarray[1]!=yarray[2]+1)
	{
	printf("you have entered y values that are not connected\n");
	continue;
	}
	//checks if the spot or spots are empty or not
    if (table1[xarray[0]-1][yarray[0]-1]!=0 || table1[xarray[0]-1][yarray[1]-1]!=0||table1[xarray[0]-1][yarray[1]-1]!=0)
	{
   	 printf("there is already a ship there\n");
   	 continue;
    }
    //checks if the spots next to it are empty or not
    if (table1[xarray[0]][yarray[0]]!= 0&&xarray[0]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[0]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[0]-2]!= 0&&xarray[0]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table1[xarray[0]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table1[xarray[0]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table1[xarray[0]-2][yarray[0]]!= 0&&xarray[0]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]-2][yarray[0]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table1[xarray[0]-2][yarray[0]-2]!= 0&&xarray[0]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	//next point xarray 0 yarray 1
	if (table1[xarray[0]][yarray[1]]!= 0&&xarray[0]<6&&yarray[1]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[1]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[1]-2]!= 0&&xarray[0]<6&&yarray[1]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table1[xarray[0]-1][yarray[1]]!= 0&&yarray[1]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table1[xarray[0]-1][yarray[1]-2]!= 0&&yarray[1]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table1[xarray[0]-2][yarray[1]]!= 0&&xarray[0]-2>=0&&yarray[1]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]-2][yarray[1]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table1[xarray[0]-2][yarray[1]-2]!= 0&&xarray[0]-2>=0&&yarray[1]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	//next point xarray 0 yarray 2
	if (table1[xarray[0]][yarray[2]]!= 0&&xarray[0]<6&&yarray[2]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[2]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]][yarray[2]-2]!= 0&&xarray[0]<6&&yarray[2]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table1[xarray[0]-1][yarray[2]]!= 0&&yarray[2]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table1[xarray[0]-1][yarray[2]-2]!= 0&&yarray[2]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table1[xarray[0]-2][yarray[2]]!= 0&&xarray[0]-2>=0&&yarray[2]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table1[xarray[0]-2][yarray[2]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table1[xarray[0]-2][yarray[2]-2]!= 0&&xarray[0]-2>=0&&yarray[2]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	//puts the ship
    table1[xarray[0]-1][yarray[0]-1] = 3;
	table1[xarray[0]-1][yarray[1]-1] = 3;
	table1[xarray[0]-1][yarray[2]-1] = 3;
	i++;
	
    }
    
    
    
    
    
	}
    

    
    
    
	}
	
	
void setplayer2()
{
   int xarray[3]={0};
   int yarray[3]={0};
   int i,horver,x,y;
   //seting the 3,1 long ships
   for (i = 0;i < 3;)
   {
   printf("This is the number %d ship\n",i+1);
   printf("Enter the x value for your 1 long ships:");
   scanf("%d,\n",&xarray[0]);
   printf("Enter the y value for your 1 long ships:");
   scanf("%d,\n",&yarray[0]);
   
   //checks if given number is greater then the grid(6)
   if (xarray[0] > 6||yarray[0] > 6||xarray[0]<=0||yarray[0]<=0)
   {
   	printf("You must enter numbers that are in the grid meaning up to 6\n");
   	continue;
   }
   
   //checks if the spot is empty or not
   if (table2[xarray[0]-1][yarray[0]-1] != 0){
   	printf("there is already a ship there\n");
   	continue;
   }
   //checks if the spots next to it are empty or not
    
	
	
	if (table2[xarray[0]][yarray[0]]!= 0&&xarray[0]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[0]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[0]-2]!= 0&&xarray[0]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table2[xarray[0]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]-1][yarray[0]-1]!= 0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table2[xarray[0]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table2[xarray[0]-2][yarray[0]]!= 0&&xarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]-2][yarray[0]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table2[xarray[0]-2][yarray[0]-2]!= 0&&xarray[0]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
   
   //sets the table
   table2[xarray[0]-1][yarray[0]-1] = 1;
   i++;
   } 
	


 
	
   //setting 2,2 long ships	
   //looping twice because we got 2 ships
  	
	for (i = 0;i < 2;)
	{
	//checks if the ship is horizantal or vertical
   	printf("setting 2,2 long ships\n");
   	printf("This is the number %d ship\n",i+1);
   	printf("Enter 1 if you want a horizental ship\n");
   	printf("Enter 2 if you want a vertical ship\n");
   	scanf("%d,\n",&horver); 
	   
	   
	   
	//if its horizantal
	if (horver == 1)
   	{
	printf("Enter 2 x values for your 2 long ship:\n");
    scanf("%d,\n",&xarray[0]);
    scanf("%d,\n",&xarray[1]);
    printf("Enter the y value for your 2 long ship:");
    scanf("%d,\n",&yarray[0]);
    
    //checks if given number is greater then the grid(6)
   if (xarray[0] > 6||yarray[0] > 6||xarray[1] > 6||xarray[0]<=0||yarray[0]<=0||xarray[1]<=0)
   {
   	printf("You must enter numbers that are in the grid meaning up to 6\n");
   	continue;
   }
	
	//checks if the ship is connected or not
    if (xarray[0] != xarray[1] -1 && xarray[0]!=xarray[1]+1)
	{
		printf("you have entered x values that are not connected\n");
		continue;
	}
	//checks if the spot or spots are empty or not
    if (table2[xarray[0]-1][yarray[0]-1]!=0 || table2[xarray[1]-1][yarray[0]-1]!=0)
	{
   	 printf("there is already a ship there\n");
   	 continue;
    }
    //checks if the spots next to it are empty or not
    if (table2[xarray[0]][yarray[0]]!= 0&&xarray[0]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[0]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[0]-2]!= 0&&xarray[0]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table2[xarray[0]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table2[xarray[0]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table2[xarray[0]-2][yarray[0]]!= 0&&xarray[0]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]-2][yarray[0]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table2[xarray[0]-2][yarray[0]-2]!= 0&&xarray[0]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	//next point
	if (table2[xarray[1]][yarray[0]]!= 0&&xarray[1]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[1]][yarray[0]-1]!= 0&&xarray[1]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[1]][yarray[0]-2]!= 0&&xarray[1]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table2[xarray[1]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table2[xarray[1]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table2[xarray[1]-2][yarray[0]]!= 0&&xarray[1]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[1]-2][yarray[0]-1]!= 0&&xarray[1]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table2[xarray[1]-2][yarray[0]-2]!= 0&&xarray[1]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	
    //puts the ship
    table2[xarray[0]-1][yarray[0]-1] = 2;
	table2[xarray[1]-1][yarray[0]-1] = 2;
	i++;
	
	}
   	//if its vertical
	else if (horver== 2)
	{
	printf("Enter the x value for your 2 long ship:");
    scanf("%d,\n",&xarray[0]);
    printf("Enter 2 y values for your 2 long ship:\n");
    scanf("%d,\n",&yarray[0]);
    scanf("%d,\n",&yarray[1]);
    
    //checks if given number is greater then the grid(6)
   if (xarray[0] > 6||yarray[0] > 6||yarray[1] > 6||xarray[0]<=0||yarray[0]<=0||yarray[0]<=0)
   {
   	printf("You must enter numbers that are in the grid meaning up to 6\n");
   	continue;
   }
    
    
    //checks if the ship is connected or not
    if (yarray[0] != yarray[1] -1 && yarray[0]!=yarray[1]+1)
	{
		printf("you have entered y values that are not connected\n");
		continue;
	}
    //checks if the spot or spots are empty or not
    if (table2[xarray[0]-1][yarray[0]-1] != 0||table2[xarray[0]-1][yarray[1]-1] != 0)
	{
	printf("there is already a ship there\n");
   	continue;
    }
    
 
	//checks if the spots next to it are empty or not
    if (table2[xarray[0]][yarray[0]]!= 0&&xarray[0]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[0]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[0]-2]!= 0&&xarray[0]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table2[xarray[0]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table2[xarray[0]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table2[xarray[0]-2][yarray[0]]!= 0&&xarray[0]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]-2][yarray[0]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table2[xarray[0]-2][yarray[0]-2]!= 0&&xarray[0]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	//next point
	if (table2[xarray[0]][yarray[1]]!= 0&&xarray[0]<6&&yarray[1]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[1]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[1]-2]!= 0&&xarray[0]<6&&yarray[1]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table2[xarray[0]-1][yarray[1]]!= 0&&yarray[1]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table2[xarray[0]-1][yarray[1]-2]!= 0&&yarray[1]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table2[xarray[0]-2][yarray[1]]!= 0&&xarray[0]-2>=0&&yarray[1]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]-2][yarray[1]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table2[xarray[0]-2][yarray[1]-2]!= 0&&xarray[0]-2>=0&&yarray[1]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
    
    //puts the ship
    table2[xarray[0]-1][yarray[0]-1] = 2;
	table2[xarray[0]-1][yarray[1]-1] = 2;
	i++;
    
	}
	} 
    
    
    
    //setting 1,3 long ship
    //looping onece because i used continue
    for (i = 0;i < 1;)
    {
	//checks if the ship is horizantal or vertical
	printf("setting 1,3 long ship\n");
   	printf("Enter 1 if you want a horizental ship\n");
   	printf("Enter 2 if you want a vertical ship\n");
   	scanf("%d,\n",&horver);
   	//if its horizental
	if (horver == 1)
   	{
   	printf("Enter 3 x values for your 3 long ship:\n");
    scanf("%d,\n",&xarray[0]);
    scanf("%d,\n",&xarray[1]);
    scanf("%d",&xarray[2]);
    printf("Enter the y value for your 3 long ship:\n");
    scanf("%d,\n",&yarray[0]);
	
	//checks if given number is greater then the grid(6)
   if (xarray[0] > 6||yarray[0] > 6||xarray[1] > 6||xarray[2] > 6||xarray[0]<=0||yarray[0]<=0||xarray[1]<=0||xarray[2]<=0)
   {
   	printf("You must enter numbers that are in the grid meaning up to 6\n");
   	continue;
   }	
	
	//checks if the ship is 3 long
    if (xarray[0] != xarray[1] -1 && xarray[0]!=xarray[1]+1)
	{
	printf("you have entered x values that are not connected\n");
	continue;
	}
	if (xarray[1] != xarray[2] -1 && xarray[1]!=xarray[2]+1)
	{
	printf("you have entered x values that are not connected\n");
	continue;
	}
	//checks if the spot or spots are empty or not
    if (table2[xarray[0]-1][yarray[0]-1]!=0 || table2[xarray[1]-1][yarray[0]-1]!=0||table2[xarray[2]-1][yarray[0]-1]!=0)
	{
   	 printf("there is already a ship there\n");
   	 continue;
    }
    
    //checks if the spots next to it are empty or not
    if (table2[xarray[0]][yarray[0]]!= 0&&xarray[0]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours1");
		continue;
	}
	if (table2[xarray[0]][yarray[0]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours2");
		continue;
	}
	if (table2[xarray[0]][yarray[0]-2]!= 0&&xarray[0]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours3");
		continue;
	}
	
	
	if (table2[xarray[0]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours4");
		continue;
	}	
	if (table2[xarray[0]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours5");
		continue;	
	}


	if (table2[xarray[0]-2][yarray[0]]!= 0&&xarray[0]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours6");
		continue;
	}
	if (table2[xarray[0]-2][yarray[0]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours7");
		continue;	
	}
	if (table2[xarray[0]-2][yarray[0]-2]!= 0&&xarray[0]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours8");
		continue;	
	}
	//next point xarray 1 yarray0
	if (table2[xarray[1]][yarray[0]]!= 0&&xarray[1]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours9");
		continue;
	}
	if (table2[xarray[1]][yarray[0]-1]!= 0&&xarray[1]<6){
		printf("You must not have any ship next to yours10");
		continue;
	}
	if (table2[xarray[1]][yarray[0]-2]!= 0&&xarray[1]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours11");
		continue;
	}
	
	
	if (table2[xarray[1]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours12");
		continue;
	}	
	if (table2[xarray[1]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours13");
		continue;	
	}


	if (table2[xarray[1]-2][yarray[0]]!= 0&&xarray[1]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours14");
		continue;
	}
	if (table2[xarray[1]-2][yarray[0]-1]!= 0&&xarray[1]-2>=0){
	    printf("You must not have any ship next to yours15");
		continue;	
	}
	if (table2[xarray[1]-2][yarray[0]-2]!= 0&&xarray[1]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours16");
		continue;	
	}
	//next point xarray 2 yarray 0
    if (table2[xarray[2]][yarray[0]]!= 0&&xarray[2]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours17");
		continue;
	}
	if (table2[xarray[2]][yarray[0]-1]!= 0&&xarray[2]<6){
		printf("You must not have any ship next to yours18");
		continue;
	}
	if (table2[xarray[2]][yarray[0]-2]!= 0&&xarray[2]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours19");
		continue;
	}
	
	
	if (table2[xarray[2]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours20");
		continue;
	}	
	if (table2[xarray[2]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours21");
		continue;	
	}


	if (table2[xarray[2]-2][yarray[0]]!= 0&&xarray[2]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours22");
		continue;
	}
	if (table2[xarray[2]-2][yarray[0]-1]!= 0&&xarray[2]-2>=0){
	    printf("You must not have any ship next to yours23");
		continue;	
	}
	if (table2[xarray[2]-2][yarray[0]-2]!= 0&&xarray[2]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours24");
		continue;	
	}
    
	//puts the ship
    table2[xarray[0]-1][yarray[0]-1] = 3;
	table2[xarray[1]-1][yarray[0]-1] = 3;
	table2[xarray[2]-1][yarray[0]-1] = 3;
	i++;
	
    }
   //if its vertical
   if (horver == 2)
   	{
   	printf("Enter the x value for your 3 long ship:\n");
    scanf("%d,\n",&xarray[0]);
    printf("Enter 3 y values for your 3 long ship:\n");
    scanf("%d,\n",&yarray[0]);
	scanf("%d,\n",&yarray[1]);
    scanf("%d,\n",&yarray[2]);	
    
    //checks if given number is greater then the grid(6)
   if (xarray[0] > 6||yarray[0] > 6||yarray[1] > 6||yarray[2] > 6||xarray[0]<=0||yarray[0]<=0||yarray[1]<=0||yarray[2]<=0)
   {
   	printf("You must enter numbers that are in the grid meaning up to 6\n");
   	continue;
   }	
    
	
	//checks if the ship is 3 long
    if (yarray[0] != yarray[1] -1 && yarray[0]!=yarray[1]+1)
	{
	printf("you have entered y values that are not connected\n");
	continue;
	}
	if (yarray[1] != yarray[2] -1 && yarray[1]!=yarray[2]+1)
	{
	printf("you have entered y values that are not connected\n");
	continue;
	}
	//checks if the spot or spots are empty or not
    if (table2[xarray[0]-1][yarray[0]-1]!=0 || table2[xarray[0]-1][yarray[1]-1]!=0||table2[xarray[0]-1][yarray[1]-1]!=0)
	{
   	 printf("there is already a ship there\n");
   	 continue;
    }
    //checks if the spots next to it are empty or not
    if (table2[xarray[0]][yarray[0]]!= 0&&xarray[0]<6&&yarray[0]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[0]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[0]-2]!= 0&&xarray[0]<6&&yarray[0]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table2[xarray[0]-1][yarray[0]]!= 0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table2[xarray[0]-1][yarray[0]-2]!= 0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table2[xarray[0]-2][yarray[0]]!= 0&&xarray[0]-2>=0&&yarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]-2][yarray[0]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table2[xarray[0]-2][yarray[0]-2]!= 0&&xarray[0]-2>=0&&yarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	//next point xarray 0 yarray 1
	if (table2[xarray[0]][yarray[1]]!= 0&&xarray[0]<6&&yarray[1]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[1]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[1]-2]!= 0&&xarray[0]<6&&yarray[1]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table2[xarray[0]-1][yarray[1]]!= 0&&yarray[1]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table2[xarray[0]-1][yarray[1]-2]!= 0&&yarray[1]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table2[xarray[0]-2][yarray[1]]!= 0&&xarray[0]-2>=0&&yarray[1]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]-2][yarray[1]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table2[xarray[0]-2][yarray[1]-2]!= 0&&xarray[0]-2>=0&&yarray[1]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	//next point xarray 0 yarray 2
	if (table2[xarray[0]][yarray[2]]!= 0&&xarray[0]<6&&yarray[2]<6){
    	printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[2]-1]!= 0&&xarray[0]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]][yarray[2]-2]!= 0&&xarray[0]<6&&yarray[2]-2>=0){
		printf("You must not have any ship next to yours");
		continue;
	}
	
	
	if (table2[xarray[0]-1][yarray[2]]!= 0&&yarray[2]<6){
		printf("You must not have any ship next to yours");
		continue;
	}	
	if (table2[xarray[0]-1][yarray[2]-2]!= 0&&yarray[2]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}


	if (table2[xarray[0]-2][yarray[2]]!= 0&&xarray[0]-2>=0&&yarray[2]<6){
		printf("You must not have any ship next to yours");
		continue;
	}
	if (table2[xarray[0]-2][yarray[2]-1]!= 0&&xarray[0]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	if (table2[xarray[0]-2][yarray[2]-2]!= 0&&xarray[0]-2>=0&&yarray[2]-2>=0){
	    printf("You must not have any ship next to yours");
		continue;	
	}
	//puts the ship
    table2[xarray[0]-1][yarray[0]-1] = 3;
	table2[xarray[0]-1][yarray[1]-1] = 3;
	table2[xarray[0]-1][yarray[2]-1] = 3;
	i++;
	
    }
    
    
    
    
    
	}
    

    
    
    
	}	




void startgame()
{
   
   
	
	//sets the players names and passes
  printf("Enter Player 1's name:\n");
  scanf("%s",&p1name);
  printf("Enter Player 1's password:\n");
  scanf("%d",&p1pass);
  system ("CLS");
  printf("Enter Player 2's name:\n");
  scanf("%s",&p2name);
  printf("Enter Player 2's password:\n");
  scanf("%d",&p2pass);
  system ("CLS");
	
	//enters players grids
	printf("%s please enter your grid\n",p1name);
	setplayer1();
	system ("CLS");
	printf("%s please enter your grid\n",p2name);
	setplayer2();
	system ("CLS");
	//inintiates the game
	p1turn();
   
	
	
}


int p1turn()
{
	system ("CLS");
	int x,y,p1sum,wait,token;
	int p1x,p1y;
	printf("%s's turn\n",p1name);
	printf("Write your password if you want to see the grids and continue.\n");
	scanf("%d,\n",&token);
	if(token!=p1pass){
		printf("wrong pass");
		sleep(2);
		p1turn();
	}
	printf("this is your grid\n");
	for(y = 0; y < 6; y++) 
   {
       for(x = 0; x < 6; x++) 
       {
        printf("%d ", table1[x][y]);
       }
       printf("\n");
   } 
   sleep(3);
   system ("CLS");
   //1 time loop for coming back
   for(wait=0;wait<1;){
   	//check if won
   	p1sum = 0;
	 for(y = 0; y < 6; y++) 
{
    for(x = 0; x < 6; x++) 
	{
        p1sum =p1sum + table2[x][y];
        if(p1sum == 90){
        	printf("%s won",p1name);
        	return;
		}
    }
} 
   
   printf("this is the grid that you bombed\n");
   for(y = 0; y < 6; y++) 
   {
       for(x = 0; x < 6; x++) 
       {
        printf("%d ", p1bomb[x][y]);
       }
       printf("\n");
   } 
   printf("\nEnter x and y coordinats to bomb");
   printf("\nx:");
   scanf("%d",&p1x);
   printf("\ny:");
   scanf("%d,\n",&p1y);
   //checks for a 1long hit
   if (table2[p1x-1][p1y-1]== 1)
   {
	printf("Hit and sunk a 1 by 1 and you get another turn\n");
   	table2[p1x-1][p1y-1]=9;
   	p1bomb[p1x-1][p1y-1]=9;
   	continue;
   }
   //checks for 2long hit
   if (table2[p1x-1][p1y-1]== 2)
   {
   	printf("You hit a 2 long ship\n");
	//changes value to a hit 2long
	table2[p1x-1][p1y-1]=4;
	p1bomb[p1x-1][p1y-1]=4;
   	//checks for nearby 4s makes them sunk if they are hit
	   
	   if (table2[p1x][p1y-1]==4&&p1x<6){
	   	printf("You sunk a 2 long ship and you get another turn\n");
	   	table2[p1x-1][p1y-1]=9;
	   	table2[p1x][p1y-1]= 9;
	   	p1bomb[p1x-1][p1y-1]=9;
	   	p1bomb[p1x][p1y-1]= 9;
	   	continue;
	   }
	   
	   if (table2[p1x-1][p1y]==4&&p1y<6){
	   	printf("You sunk a 2 long ship and you get another turn\n");
	   	table2[p1x-1][p1y-1]=9;
	   	table2[p1x-1][p1y]= 9;
	   	p1bomb[p1x-1][p1y-1]=9;
	   	p1bomb[p1x-1][p1y]= 9;
	   	continue;
	   }
	   if (table2[p1x-1][p1y-2]==4&&p1y-2>=0){
	   	printf("You sunk a 2 long ship and you get another turn\n");
	   	table2[p1x-1][p1y-1]=9;
	   	table2[p1x-1][p1y-2]= 9;
	   	p1bomb[p1x-1][p1y-1]=9;
	   	p1bomb[p1x-1][p1y-2]= 9;
	   	continue;
	   }
	   if (table2[p1x-2][p1y-1]==4&&p1x-2>=0){
	   	printf("You sunk a 2 long ship and you get another turn\n");
	   	table2[p1x-1][p1y-1]=9;
	   	table2[p1x-2][p1y-1]= 9;
	   	p1bomb[p1x-1][p1y-1]=9;
	   	p1bomb[p1x-2][p1y-1]= 9;
	   	continue;
	   }
	   printf("You get another turn\n");
	   continue;
}
	   
	   //checks for a 3 long hit
	   if (table2[p1x-1][p1y-1]==3)
	   {
	   	printf("You hit a 3 long ship\n");
	   	table2[p1x-1][p1y-1]= 5;
	   	p1bomb[p1x-1][p1y-1]= 5;
	   	
	   	//checks for an nearby 5s(hit 3 longs)
	   //right
	   if (table2[p1x][p1y-1]==5&&p1x<6)
	   {
	     //right
		 if (table2[p1x+1][p1y-1]==5&&p1x+1<6){
	     printf("You sunk a 3 long ship\n");
	   	 table2[p1x-1][p1y-1]=9;
	   	 table2[p1x][p1y-1]=9;
	   	 table2[p1x+1][p1y-1]=9;
	   	 p1bomb[p1x-1][p1y-1]=9;
	   	 p1bomb[p1x][p1y-1]=9;
	   	 p1bomb[p1x+1][p1y-1]=9;
	   	 printf("You get another turn\n");
	   continue;
	   	 }
	     //up
		 if (table2[p1x][p1y-2]==5&&p1y-2>=0){
	     printf("You sunk a 3 long ship\n");
	   	 table2[p1x-1][p1y-1]=9;
	   	 table2[p1x][p1y-1]=9;
	   	 table2[p1x][p1y-2]=9;
	   	 p1bomb[p1x-1][p1y-1]=9;
	   	 p1bomb[p1x][p1y-1]=9;
	   	 p1bomb[p1x][p1y-2]=9;
	   	 printf("You get another turn\n");
	   continue;
		 }
	     //down
		 if (table2[p1x][p1y]==5&&p1y<6){
	     printf("You sunk a 3 long ship\n");
	     table2[p1x-1][p1y-1]=9;
	   	 table2[p1x][p1y-1]=9;
	   	 table2[p1x][p1y]=9;
	   	 p1bomb[p1x-1][p1y-1]=9;
	   	 p1bomb[p1x][p1y-1]=9;
	   	 p1bomb[p1x][p1y]=9;
	   	 printf("You get another turn\n");
	   continue;
		 }
	    
	    
	   	
	   }
	   //down
	   if (table2[p1x-1][p1y]==5&&p1y<6){
	   	//right
		   if(table2[p1x][p1y]==5&&p1x<6){
		   	printf("You sunk a 3 long ship\n");
	   	 table2[p1x-1][p1y-1]=9;
	   	 table2[p1x-1][p1y]=9;
	   	 table2[p1x][p1y]=9;
	   	 p1bomb[p1x-1][p1y-1]=9;
	   	 p1bomb[p1x-1][p1y]=9;
	   	 p1bomb[p1x][p1y]=9;
	   	 printf("You get another turn\n");
	   continue;
		   }
		//left
		if (table2[p1x-2][p1y]==5&&p1x-2>=0) {
		printf("You sunk a 3 long ship\n");
	   	 table2[p1x-1][p1y-1]=9;
		 table2[p1x-1][p1y]=9;	
		 table2[p1x-2][p1y]=9;
		 p1bomb[p1x-1][p1y-1]=9;
		 p1bomb[p1x-1][p1y]=9;	
		 p1bomb[p1x-2][p1y]=9;	
		 printf("You get another turn\n");
	   continue;
		} 
		//down
		 if (table2[p1x-1][p1y+1]==5&&p1y+1<6){
		 printf("You sunk a 3 long ship\n");
	   	 table2[p1x-1][p1y-1]=9;
	   	 table2[p1x-1][p1y]=9;
	   	 table2[p1x-1][p1y+1]=9;
	   	 p1bomb[p1x-1][p1y-1]=9;
	   	 p1bomb[p1x-1][p1y]=9;
	   	 p1bomb[p1x-1][p1y+1]=9;
	   	 printf("You get another turn\n");
	   continue;
		 }
	   	
	   }
	   //up
	   if (table2[p1x-1][p1y-2]==5&&p1y-2>=0){
	   	   //right
		   if(table2[p1x][p1y-2]==5&&p1x<6){
		   	printf("You sunk a 3 long ship\n");
	   	    table2[p1x-1][p1y-1]=9;
	   	    table2[p1x-1][p1y-2]=9;
	   	    table2[p1x][p1y-2]=9;
	   	    p1bomb[p1x-1][p1y-1]=9;
	   	    p1bomb[p1x-1][p1y-2]=9;
	   	    p1bomb[p1x][p1y-2]=9;
	   	    printf("You get another turn\n");
	   continue;
		   }
		   //up
		   if(table2[p1x-1][p1y-3]==5&&p1y-3>=0){
		   	printf("You sunk a 3 long ship\n");
	   	    table2[p1x-1][p1y-1]=9;
	   	    table2[p1x-1][p1y-2]=9;
	   	    table2[p1x-1][p1y-3]=9;
	   	    p1bomb[p1x-1][p1y-1]=9;
	   	    p1bomb[p1x-1][p1y-2]=9;
	   	    p1bomb[p1x-1][p1y-3]=9;
	   	    printf("You get another turn\n");
	   continue;
		   }
		   //left
		   if(table2[p1x-2][p1y-2]==5&&p1x-2>=0){
		   	printf("You sunk a 3 long ship\n");
	   	    table2[p1x-1][p1y-1]=9;
	   	    table2[p1x-1][p1y-2]=9;
	   	    table2[p1x-2][p1y-2]=9;
	   	    p1bomb[p1x-1][p1y-1]=9;
	   	    p1bomb[p1x-1][p1y-2]=9;
	   	    p1bomb[p1x-2][p1y-2]=9;
	   	    printf("You get another turn\n");
	   continue;
		   }
	   
	   }
	   //left
	   if (table2[p1x-2][p1y-1]==5&&p1x-2>=0){
	   	  //up
	   	  if(table2[p1x-2][p1y-2]==5&&p1y-2>=0){
	   	  	printf("You sunk a 3 long ship\n");
	   	    table2[p1x-1][p1y-1]=9;
	   	    table2[p1x-2][p1y-1]=9;
	   	    table2[p1x-2][p1y-2]=9;
	   	    p1bomb[p1x-1][p1y-1]=9;
	   	    p1bomb[p1x-2][p1y-1]=9;
	   	    p1bomb[p1x-2][p1y-2]=9;
	   	    printf("You get another turn\n");
	   continue;
			 }
		  //left
		  if(table2[p1x-3][p1y-1]==5&&p1x-3>=0){
		  	printf("You sunk a 3 long ship\n");
	   	    table2[p1x-1][p1y-1]=9;
	   	    table2[p1x-2][p1y-1]=9;
	   	    table2[p1x-3][p1y-1]=9;
	   	    p1bomb[p1x-1][p1y-1]=9;
	   	    p1bomb[p1x-2][p1y-1]=9;
	   	    p1bomb[p1x-3][p1y-1]=9;
	   	    printf("You get another turn\n");
	   continue;
		  }	
		  //down
		  if(table2[p1x-2][p1y]==5&&p1y<6) {
		  	printf("You sunk a 3 long ship\n");
	   	    table2[p1x-1][p1y-1]=9;
	   	    table2[p1x-2][p1y-1]=9;
	   	    table2[p1x-2][p1y]=9;
	   	    p1bomb[p1x-1][p1y-1]=9;
	   	    p1bomb[p1x-2][p1y-1]=9;
	   	    p1bomb[p1x-2][p1y]=9;
	   	    printf("You get another turn\n");
	   continue;
		  }
	   	
	   }
	  
	   if (table2[p1x-1][p1y-1]== 9){
	   	printf("You cant bomb where you bombed\n");
	   	continue;
	   }
	   	
	   printf("You get another turn\n");
	   continue;	
	   	//checks 3 long hits end
	   }
	   wait++;
	   //loops end
	 }
	 printf("You missed its other playes turn");
	 sleep(3);
	 p2turn();
//func ends	 
}
   
int p2turn()
{
	system ("CLS");
	int x,y,p1sum,wait,token;
	int p1x,p1y;
	printf("%s's turn\n",p2name);
	printf("Write your pass if you want to see the grids and continue\n");
	scanf("%d,\n",&token);
	if(token!=p2pass){
		printf("wrong pass");
		sleep(2);
		p2turn();
	}
	printf("this is your grid\n");
	for(y = 0; y < 6; y++) 
   {
       for(x = 0; x < 6; x++) 
       {
        printf("%d ", table2[x][y]);
       }
       printf("\n");
   } 
   sleep(3);
   system ("CLS");
   //1 time loop for coming back
   for(wait=0;wait<1;){
   	//check if won
   	p1sum = 0;
	 for(y = 0; y < 6; y++) 
{
    for(x = 0; x < 6; x++) 
	{
        p1sum =p1sum + table1[x][y];
        if(p1sum == 90){
        	printf("%s won",p2name);
        	return;
		}
    }
} 
   
   printf("this is the grid that you bombed\n");
   for(y = 0; y < 6; y++) 
   {
       for(x = 0; x < 6; x++) 
       {
        printf("%d ", p2bomb[x][y]);
       }
       printf("\n");
   } 
   printf("\nEnter x and y coordinats to bomb");
   printf("\nx:");
   scanf("%d",&p1x);
   printf("\ny:");
   scanf("%d,\n",&p1y);
   //checks for a 1long hit
   if (table1[p1x-1][p1y-1]== 1)
   {
	printf("Hit and sunk a 1 by 1 and you get another turn\n");
   	table1[p1x-1][p1y-1]=9;
   	p2bomb[p1x-1][p1y-1]=9;
   	continue;
   }
   //checks for 2long hit
   if (table1[p1x-1][p1y-1]== 2)
   {
   	printf("You hit a 2 long ship\n");
	//changes value to a hit 2long
	table1[p1x-1][p1y-1]=4;
	p2bomb[p1x-1][p1y-1]=4;
   	//checks for nearby 4s makes them sunk if they are hit
	   
	   if (table1[p1x][p1y-1]==4&&p1x<6){
	   	printf("You sunk a 2 long ship and you get another turn\n");
	   	table1[p1x-1][p1y-1]=9;
	   	table1[p1x][p1y-1]= 9;
	   	p2bomb[p1x-1][p1y-1]=9;
	   	p2bomb[p1x][p1y-1]= 9;
	   	continue;
	   }
	   
	   if (table1[p1x-1][p1y]==4&&p1y<6){
	   	printf("You sunk a 2 long ship and you get another turn\n");
	   	table1[p1x-1][p1y-1]=9;
	   	table1[p1x-1][p1y]= 9;
	   	p2bomb[p1x-1][p1y-1]=9;
	   	p2bomb[p1x-1][p1y]= 9;
	   	continue;
	   }
	   if (table1[p1x-1][p1y-2]==4&&p1y-2>=0){
	   	printf("You sunk a 2 long ship and you get another turn\n");
	   	table1[p1x-1][p1y-1]=9;
	   	table1[p1x-1][p1y-2]= 9;
	   	p2bomb[p1x-1][p1y-1]=9;
	   	p2bomb[p1x-1][p1y-2]= 9;
	   	continue;
	   }
	   if (table1[p1x-2][p1y-1]==4&&p1x-2>=0){
	   	printf("You sunk a 2 long ship and you get another turn\n");
	   	table1[p1x-1][p1y-1]=9;
	   	table1[p1x-2][p1y-1]= 9;
	   	p2bomb[p1x-1][p1y-1]=9;
	   	p2bomb[p1x-2][p1y-1]= 9;
	   	continue;
	   }
	   printf("You get another turn\n");
	   continue;
}
	   
	   //checks for a 3 long hit
	   if (table1[p1x-1][p1y-1]==3)
	   {
	   	printf("You hit a 3 long ship\n");
	   	table1[p1x-1][p1y-1]= 5;
	   	p2bomb[p1x-1][p1y-1]= 5;
	   	
	   	//checks for an nearby 5s(hit 3 longs)
	   //right
	   if (table1[p1x][p1y-1]==5&&p1x<6)
	   {
	     //right
		 if (table1[p1x+1][p1y-1]==5&&p1x+1<6){
	     printf("You sunk a 3 long ship\n");
	   	 table1[p1x-1][p1y-1]=9;
	   	 table1[p1x][p1y-1]=9;
	   	 table1[p1x+1][p1y-1]=9;
	   	 p2bomb[p1x-1][p1y-1]=9;
	   	 p2bomb[p1x][p1y-1]=9;
	   	 p2bomb[p1x+1][p1y-1]=9;
	   	 printf("You get another turn\n");
	   continue;
	   	 }
	     //up
		 if (table1[p1x][p1y-2]==5&&p1y-2>=0){
	     printf("You sunk a 3 long ship\n");
	   	 table1[p1x-1][p1y-1]=9;
	   	 table1[p1x][p1y-1]=9;
	   	 table1[p1x][p1y-2]=9;
	   	 p2bomb[p1x-1][p1y-1]=9;
	   	 p2bomb[p1x][p1y-1]=9;
	   	 p2bomb[p1x][p1y-2]=9;
	   	 printf("You get another turn\n");
	   continue;
		 }
	     //down
		 if (table1[p1x][p1y]==5&&p1y<6){
	     printf("You sunk a 3 long ship\n");
	     table1[p1x-1][p1y-1]=9;
	   	 table1[p1x][p1y-1]=9;
	   	 table1[p1x][p1y]=9;
	   	 p2bomb[p1x-1][p1y-1]=9;
	   	 p2bomb[p1x][p1y-1]=9;
	   	 p2bomb[p1x][p1y]=9;
	   	 printf("You get another turn\n");
	   continue;
		 }
	    
	    
	   	
	   }
	   //down
	   if (table1[p1x-1][p1y]==5&&p1y<6){
	   	//right
		   if(table1[p1x][p1y]==5&&p1x<6){
		   	printf("You sunk a 3 long ship\n");
	   	 table1[p1x-1][p1y-1]=9;
	   	 table1[p1x-1][p1y]=9;
	   	 table1[p1x][p1y]=9;
	   	 p2bomb[p1x-1][p1y-1]=9;
	   	 p2bomb[p1x-1][p1y]=9;
	   	 p2bomb[p1x][p1y]=9;
	   	 printf("You get another turn\n");
	   continue;
		   }
		//left
		if (table1[p1x-2][p1y]==5&&p1x-2>=0) {
		printf("You sunk a 3 long ship\n");
	   	 table1[p1x-1][p1y-1]=9;
		 table1[p1x-1][p1y]=9;	
		 table1[p1x-2][p1y]=9;
		 p2bomb[p1x-1][p1y-1]=9;
		 p2bomb[p1x-1][p1y]=9;	
		 p2bomb[p1x-2][p1y]=9;	
		 printf("You get another turn\n");
	   continue;
		} 
		//down
		 if (table1[p1x-1][p1y+1]==5&&p1y+1<6){
		 printf("You sunk a 3 long ship\n");
	   	 table1[p1x-1][p1y-1]=9;
	   	 table1[p1x-1][p1y]=9;
	   	 table1[p1x-1][p1y+1]=9;
	   	 p2bomb[p1x-1][p1y-1]=9;
	   	 p2bomb[p1x-1][p1y]=9;
	   	 p2bomb[p1x-1][p1y+1]=9;
	   	 printf("You get another turn\n");
	   continue;
		 }
	   	
	   }
	   //up
	   if (table1[p1x-1][p1y-2]==5&&p1y-2>=0){
	   	   //right
		   if(table1[p1x][p1y-2]==5&&p1x<6){
		   	printf("You sunk a 3 long ship\n");
	   	    table1[p1x-1][p1y-1]=9;
	   	    table1[p1x-1][p1y-2]=9;
	   	    table1[p1x][p1y-2]=9;
	   	    p2bomb[p1x-1][p1y-1]=9;
	   	    p2bomb[p1x-1][p1y-2]=9;
	   	    p2bomb[p1x][p1y-2]=9;
	   	    printf("You get another turn\n");
	   continue;
		   }
		   //up
		   if(table1[p1x-1][p1y-3]==5&&p1y-3>=0){
		   	printf("You sunk a 3 long ship\n");
	   	    table1[p1x-1][p1y-1]=9;
	   	    table1[p1x-1][p1y-2]=9;
	   	    table1[p1x-1][p1y-3]=9;
	   	    p2bomb[p1x-1][p1y-1]=9;
	   	    p2bomb[p1x-1][p1y-2]=9;
	   	    p2bomb[p1x-1][p1y-3]=9;
	   	    printf("You get another turn\n");
	   continue;
		   }
		   //left
		   if(table1[p1x-2][p1y-2]==5&&p1x-2>=0){
		   	printf("You sunk a 3 long ship\n");
	   	    table1[p1x-1][p1y-1]=9;
	   	    table1[p1x-1][p1y-2]=9;
	   	    table1[p1x-2][p1y-2]=9;
	   	    p2bomb[p1x-1][p1y-1]=9;
	   	    p2bomb[p1x-1][p1y-2]=9;
	   	    p2bomb[p1x-2][p1y-2]=9;
	   	    printf("You get another turn\n");
	   continue;
		   }
	   
	   }
	   //left
	   if (table1[p1x-2][p1y-1]==5&&p1x-2>=0){
	   	  //up
	   	  if(table1[p1x-2][p1y-2]==5&&p1y-2>=0){
	   	  	printf("You sunk a 3 long ship\n");
	   	    table1[p1x-1][p1y-1]=9;
	   	    table1[p1x-2][p1y-1]=9;
	   	    table1[p1x-2][p1y-2]=9;
	   	    p2bomb[p1x-1][p1y-1]=9;
	   	    p2bomb[p1x-2][p1y-1]=9;
	   	    p2bomb[p1x-2][p1y-2]=9;
	   	    printf("You get another turn\n");
	   continue;
			 }
		  //left
		  if(table1[p1x-3][p1y-1]==5&&p1x-3>=0){
		  	printf("You sunk a 3 long ship\n");
	   	    table1[p1x-1][p1y-1]=9;
	   	    table1[p1x-2][p1y-1]=9;
	   	    table1[p1x-3][p1y-1]=9;
	   	    p2bomb[p1x-1][p1y-1]=9;
	   	    p2bomb[p1x-2][p1y-1]=9;
	   	    p2bomb[p1x-3][p1y-1]=9;
	   	    printf("You get another turn\n");
	   continue;
		  }	
		  //down
		  if(table1[p1x-2][p1y]==5&&p1y<6) {
		  	printf("You sunk a 3 long ship\n");
	   	    table1[p1x-1][p1y-1]=9;
	   	    table1[p1x-2][p1y-1]=9;
	   	    table1[p1x-2][p1y]=9;
	   	    p2bomb[p1x-1][p1y-1]=9;
	   	    p2bomb[p1x-2][p1y-1]=9;
	   	    p2bomb[p1x-2][p1y]=9;
	   	    printf("You get another turn\n");
	   continue;
		  }
	   	
	   }
	    
		
		if (table2[p1x-1][p1y-1]== 9){
	   	printf("You cant bomb where you bombed\n");
	   	continue;
	   }
	   
	   	
	   printf("You get another turn\n");
	   continue;	
	   	//checks 3 long hits end
	   }
	   wait++;
	   //loops end
	 }
	 printf("You missed its other playes turn");
	 sleep(3);
	 p1turn();
//func ends	 
}







void main() 
{
//1= 1long ship
//2= 2long ship
//3= 3long ship
//4= hit 2long ship
//5= hit 3long ship
//9= sunk ship






//setplayer1();
//system ("CLS");
//setplayer2();
//system ("CLS");
startgame();




}
