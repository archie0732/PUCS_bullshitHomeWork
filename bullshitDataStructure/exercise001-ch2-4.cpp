main()
{
     int Sparse[4][3] = {{5, 0, 0}, {0, 0, -1}, {3, 0, 0}, {0, 9, 10}};
     int Compress[6][3];
     
     //��ӯx�}�ۥ[ 
     printf("===============�{���y�z=======================\n");
     printf("= �{���W�١Gch2-7.4.c                        =\n");
     printf("= �{���ت��G�N�@�}���x�}�ഫ�����Y�����ܪk   =\n"); 
     printf("==============================================\n"); 
     Sparse_print(4,3,Sparse);                      //��J�}���x�}
     Compress_process(4, 3, Sparse, Compress);      //���Y�B�z 
     Compress_print(6, 3, Compress);                //��X���Y���G 
     system("PAUSE");
     return(0);
}
//��X�}���x�}
Sparse_print(int m, int n, int Sparse[m][n])
{
     printf("��J�}���x�}�G");
     printf("\n");                     
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", Sparse[i][j]);
       printf("\n");
     }
}

//���Y�B�z 
Compress_process(int m, int n, int Sparse[m][n], int Compress[m][n])
{
   int i,j,k;
   k = 1;                              // �]�w�ܼƪ��     
   Compress[0][0] = m ;                                  // �}�Csparse��m�C  
   Compress[0][1] = n;                 // �}�Csparse��n�� 
   Compress[0][2] = 5;                // �}�C�ϥ�5�Ӥ���  
   for ( i = 0; i < m; i++ )           // �G���}�C�����X   
      for ( j = 0; j < n; j++ )
         if ( Sparse[i][j] != 0 )      // �P�_�O�_���D0����   
         {
		 	Compress[k][0] = i;         
        	Compress[k][1] = j;
			Compress[k][2] = Sparse[i][j]; 
            k++;                   // �U�@�C           
         }
}

//��X���Y���G
Compress_print(int m, int n, int Compress[m][n])
{
     printf("��X���Y���G�G");
     printf("\n");             
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", Compress[i][j]);
       printf("\n");
     }
}
