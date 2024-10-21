main()
{
     printf("===============�{���y�z=======================\n");
     printf("= �{���W�١Gch2-7.3.c                        =\n");
     printf("= �{���ت��G2�ӯx�}�ۭ�                      =\n"); 
     printf("==============================================\n"); 
     int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
     int B[3][3] = {{1, 0, 1}, {1, 1, 0}, {0, 1, 1}};
     int C[2][3];
     //��ӯx�}�ۭ� 
     printf("==================��J========================\n"); 
     matrix_Aprint(2,3,A);         //��XA�x�}
     matrix_Bprint(3,3,B);         //��XB�x�}  
     matrix_Mul(2, 3, 3, A, B, C);   //C=A*B
     printf("==================��X========================\n"); 
     matrix_Cprint(2, 3, C);      //��Xc�x�} 
     system("PAUSE");
     return(0);
}

//��XA�x�}
matrix_Aprint(int m, int n, int A[m][n])
{
     printf("��XA�x�}�G");
     printf("\n");                     
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", A[i][j]);
       printf("\n");
     }  
       printf("\n");
}

//��XB�x�}
matrix_Bprint(int m, int n, int B[m][n])
{
     printf("��XB�x�}�G");
     printf("\n");                     
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", B[i][j]);
       printf("\n");
     }
       printf("\n");     
}

/*���]A,B,C����mxn�}�C�A�o�Ө�ƭn�D�XC=A*B*/
matrix_Mul(int m, int n,int p, int A[m][n],int B[n][p],int C[m][p])
{
  int i,j,k;
  for(i=0;i<m;i++)
    for(j=0;j<p;j++)
      {
        C[i][j]=0;
        for(k = 0;k < n;k++)
          C[i][j] = C[i][j] + A[i][k] * B[k][j]; 
      }
}

//��X�ۭ����G
matrix_Cprint(int m, int n, int C[m][n])
{
     printf("��XA*B=C�����G�G");
     printf("\n");             
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", C[i][j]);
       printf("\n");
     }
}
