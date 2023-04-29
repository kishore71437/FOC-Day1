
# include < stdio.h >
int  main( )
{
int  a[10][10], i, j, r, c ;
printf(" Enter the Numbers of Row : ") ;
scanf("%d ",& r) ;
printf("\n Enter the Number of Coloumn : ") ;
scanf("%d ",& c) ;

printf("\n Enter the Element of Matrix : \n") ;
for (  i = 0 ; i < r ; i++)
{
for (  j = 0 ; j < c ; i++)
{
printf("\n Enter the Element [%d] [%d] : " ,i, j) ;
scanf("%d ",& a[i][j]) ;
}
}

printf("\n\n Element in the Matrix are : \n") ;
for (  i = 0 ; i < r ; i++)
{
for (  j = 0 ; j < c ; i++)
{
printf("\t %d ",  a[i][j]) ;
}
printf(" \n ") ;
}

printf("\n\n Transpose of a Matrix : \n") ;
for (  i = 0 ; i < r ; i++)
{
for (  j = 0 ; j < c ; i++)
{
printf("\t %d ",  a[j][i]) ;
}
printf(" \n ") ;
}
return ( 0 ) ;
}
