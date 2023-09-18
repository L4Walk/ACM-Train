 #include <stdio.h>
 #include <math.h>
 #include <stdlib.h>
 #define M 3  //方阵的行数 列数
 #define ε0  0.00000001//ε0为要求的精度
 #define N  100000//最大迭代次数

 //函数预声明
 void printMatrix(double a[][3], int m, int n);//矩阵的打印
 void printVector(double a[], int m);//向量的打印
 double dotVector(double a[], double b[], int m);//两个一维向量之积,结果为一个数
 void dotMatrVect(double a[][3], double yk0[], double uk1[], int m);//矩阵和向量点积u=a.*y，yk0对应于书上y（k-1）
 void unitVector(double a[], double η, int m);//向量的单位化
 double relaError(double lamada1, double lamada2);//计算相对误差

 //主函数
 int main(void)
 {
     double a[M][M] = { { 6, -12, 6 }, { -21, -3, 24 }, { -12, -12, 51 } };//待求特征值和特征向量的矩阵
     double uk0[M] = { 2.0, 1.0, 6.0 };//迭代向量
     double uk1[M] = { 0.0, 0.0, 0.0 };//迭代向量
     double β0 = 0.0;//β（k-1）
     double β1 = 0.0;//βk
     double η0 = 0.0;//向量u（k-1）的二范数
     double ε = 0.0;//计算的精度
     printf("待求特征值和特征向量的矩阵A:\n");
     printMatrix(a, M, M);
     printf("\n");
     printf("初始向量u0：\n");
     printVector(uk0, M);
     printf("\n");
     printf("第几次计算\t\t uk\t\t\t\t yk\t\t βk\n");
     for (int i = 0; i < N; i++)
     {
         printf("%d\t", i);//***打印计算次数i
         printVector(uk0, M);//***打印uk
         printf("|");//***打印分隔
         η0 = sqrt(dotVector(uk0, uk0, M));//初始向量u0的2范数
         unitVector(uk0, η0, M);//将初始向量u0单位化作为y（k-1）也就是yk0
         printVector(uk0, M); //***打印单位化后的uk0，也就是y（k-1）
         dotMatrVect(a, uk0, uk1, M);//uk1 = A.*yk0;
         printf("|");//***打印分隔
         β1 = dotVector(uk0, uk1, M);//β1=y（k-1）.*uk1
         if (i > 0)
         {
             printf("%lf ", β1);//***打印βk
         }
         printf("\n");
         ε = relaError(β0, β1);
         //判断是否收敛
         if (ε < ε0) //若收敛
         {
             printf("收敛\n");
             break;
         }
         else //若不收敛,则变量交换 uk0=uk1;
         {
             //double tem = 0.0;
             for (int q = 0; q < M; q++)
             {
                 //uk0[q] = uk1[q];
                 //tem = uk0[q];
                 uk0[q] = uk1[q];
                 uk1[q] = 0.0;//在第二次使用前一定把uk1[i]的所有元素归零！！！！！！
             }
             β0 = β1;
         }
     }

     system("pause");
 }

 //函数具体执行

 //矩阵的打印
 void printMatrix(double a[][M], int m, int n)
 {
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             printf("%lf  ", a[i][j]);
         }
         printf("\n");
     }
 }
 //向量的打印
 void printVector(double a[], int m)
 {
     for (int i = 0; i < m; i++)
     {
         printf("%lf  ", a[i]);
     }
 }
 //两个一维向量之积
 double dotVector(double a[], double b[], int m)
 {
     double dotsum = 0.0;
     for (int i = 0; i < m; i++)
     {
         dotsum = dotsum + a[i] * b[i];
     }
     return(dotsum);
 }
 //矩阵和向量点积u=a.*y，yk0对应于书上y（k-1）
 void dotMatrVect(double a[][M], double yk0[], double uk1[], int m)
 {
     double a1, b, c;
     for (int i = 0; i < m; i++)
     {
         uk1[i] = 0;//在第二次使用前一定把uk1[i]的所有元素归零！！！！！！
         for (int j = 0; j < m; j++)
         {
             uk1[i] = uk1[i] + a[i][j] * yk0[j];//在第二次使用前一定把uk1[i]的所有元素归零！！！！！！！！！
             a1 = a[i][j];
             b = yk0[j];
             c = uk1[i];
             //printf("a[%d][%d]=%lf\n",i,j,a[i][j]);
         }

     }
     //printVector(uk1, 3);
 }
 //向量的单位化
 void unitVector(double a[], double η, int m)
 {
     for (int i = 0; i < m; i++)
     {
         a[i] = a[i] / η;
     }
 }
 //计算误差
 double relaError(double β1, double β2)
 {
     double ε;
     ε = fabs(β2 - β1) / fabs(β2);
     return ε;
 }