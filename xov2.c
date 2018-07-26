#include <stdio.h>
int main(){
        char xo[3][3],pos[9],win;
        int i,j,moves;
        for(i=0;i<9;i++)
        pos[i]=0;
        for(i=0;i<3;i++){
                for(j=0;j<3;j++)
                xo[i][j]=' ';
        }
        for(moves=0;moves<9;moves++){
                printf("enter position to put x or o(row,Columns):\n" );
                scanf("%d,%d",&i,&j );
                if(pos[i*3+j]!=0 || i>2 || j>2){
                        printf("Invalid Input");
                        moves--;
                        continue;
                }
                pos[i*3+j]=1;

                if(moves%2==0)
                        xo[i][j]='x';

                else xo[i][j]='o';
                for(i=0;i<3;i++){
                        if(xo[i][0]=='x' && xo[i][1]=='x' && xo[i][2]=='x'){
                                win='x';
                //                goto winner;
                                break;
                        }
                        if(xo[i][0]=='o' && xo[i][1]=='o' && xo[i][2]=='o'){
                                win='o';
                //                goto winner;
                                break;
                        }
                        if(xo[0][i]=='x' && xo[0][i]=='x' && xo[0][i]=='x'){
                                win='x';
                //                goto winner;
                                break;
                        }
                        if(xo[0][i]=='o' && xo[0][i]=='o' && xo[0][i]=='o'){
                                win='o';
                //                goto winner;
                                break;
                        }


                }
/*                if(win=='x' || win=='o')
                break;
*/

                if(xo[0][0]=='x' && xo[1][1]=='x' && xo[2][2]=='x'){
                        win='x';
                        break;
                }
                if(xo[0][0]=='o' && xo[1][1]=='o' && xo[2][2]=='o'){
                        win='o';
                        break;
                }
                if(xo[0][2]=='x' && xo[1][1]=='x' && xo[2][0]=='x'){
                        win='x';
                        break;
                }
                if(xo[0][2]=='o' && xo[1][1]=='o' && xo[2][0]=='o'){
                        win='o';
                        break;
                }
                for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                                //if(xo[i][j]!='y')
                                printf("%c ",xo[i][j] );
                                }
                                printf("\n" );
                        }
                }if(win!='t')
                /*winner:*/printf("%c wins\n",win );


}
