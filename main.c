
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char board[8][8] = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {'_', '_', '_', '_', '_', '_', '_', '_'},
    {'_', '_', '_', '_', '_', '_', '_', '_'},
    {'_', '_', '_', '_', '_', '_', '_', '_'},
    {'_', '_', '_', '_', '_', '_', '_', '_'},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};

int hcheck(int p){
    if(p==1){
        int i = 0,a,b;
        while(i<8){
            int j =0;
            while(j<8){
                if(board[i][j]=='K'){
                    a = i;
                    b = j;
                    break;
                }
                j++;
            }
            i++;
        }
        if(a-2>=0){
            if(b-1>=0){
                if(board[a-2][b-1]=='n'){
                    return 1;
                }
            }
            if(b+1<8){
                if(board[a-2][b+1]=='n'){
                    return 1;
                }
            }
        }
        if(a+2<8){
            if(b-1>=0){
                if(board[a+2][b-1]=='n'){
                    return 1;
                }
            }
            if(b+1<8){
                if(board[a+2][b+1]=='n'){
                    return 1;
                }
            }
        }
        if(b-2>=0){
            if(a-1>=0){
                if(board[a-1][b-2]=='n'){
                    return 1;
                }
            }
            if(a+1<8){
                if(board[a+1][b-2]=='n'){
                    return 1;
                }
            }
        }
        if(b+2<8){
            if(a-1>=0){
                if(board[a-1][b+2]=='n'){
                    return 1;
                }
            }
            if(a+1<8){
                if(board[a+1][b+2]=='n'){
                    return 1;
                }
            }
        }
    }
    else{
        int i = 0,a,b;
        while(i<8){
            int j =0;
            while(j<8){
                if(board[i][j]=='k'){
                    a = i;
                    b = j;
                    break;
                }
                j++;
            }
            i++;
        }
        if(a-2>=0){
            if(b-1>=0){
                if(board[a-2][b-1]=='N'){
                    return 1;
                }
            }
            if(b+1<8){
                if(board[a-2][b+1]=='N'){
                    return 1;
                }
            }
        }
        if(a+2<8){
            if(b-1>=0){
                if(board[a+2][b-1]=='N'){
                    return 1;
                }
            }
            if(b+1<8){
                if(board[a+2][b+1]=='N'){
                    return 1;
                }
            }
        }
        if(b-2>=0){
            if(a-1>=0){
                if(board[a-1][b-2]=='N'){
                    return 1;
                }
            }
            if(a+1<8){
                if(board[a+1][b-2]=='N'){
                    return 1;
                }
            }
        }
        if(b+2<8){
            if(a-1>=0){
                if(board[a-1][b+2]=='N'){
                    return 1;
                }
            }
            if(a+1<8){
                if(board[a+1][b+2]=='N'){
                    return 1;
                }
            }
        }
    }
    return 0;
}

int check(int p){
    if(hcheck(p)){
        return 1;
    }
    if(p==1){
        int i = 0,a,b;
        while(i<8){
            int j =0;
            while(j<8){
                if(board[i][j]=='K'){
                    a = i;
                    b = j;
                    break;
                }
                j++;
            }
            i++;
        }
        int i1 = a+1;
        while(i1<8){
            char c = board[i1][b];
            if(c!='_'){
                if(c=='q'||c=='r'){
                    return 1;
                }
                break;
            }
            i1++;
        }
        int i2 = a-1;
        while(i2>=0){
            char c = board[i2][b];
            if(c!='_'){
                if(c=='q'||c=='r'){
                    return 1;
                }
                break;
            }
            i2--;
        }
        int i3 = b+1;
        while(i3<8){
            char c = board[a][i3];
            if(c!='_'){
                if(c=='q'||c=='r'){
                    return 1;
                }
                break;
            }
            i3++;
        }
        int i4 = b-1;
        while(i4>=0){
            char c = board[a][i4];
            if(c!='_'){
                if(c=='q'||c=='r'){
                    return 1;
                }
                break;
            }
            i4--;
        }
        int i5 = -1,co1 = 0;
        while(a+i5>=0 && b+i5>=0){
            char c = board[a+i5][b+i5];
            if(c!='_'){
                if(c=='q'||c=='b'){
                    return 1;
                }
                else if(c=='p' && co1==1){
                    return 1;
                }
                break;
            }
            co1++;
        }
        int i6 = 1;
        co1 = 0;
        while(a+i6<8 && b+i6<8){
            char c = board[a+i6][b+i6];
            if(c!='_'){
                if(c=='q'||c=='b'){
                    return 1;
                }
                else if(c=='p' && co1==1){
                    return 1;
                }
                break;
            }
            co1++;
        }
        int i7 = 1,i8 = -1;
        co1 = 0;
        while(a+i7<8 && b+i8>=0){
            char c = board[a+i7][b+i8];
            if(c!='_'){
                if(c=='q'||c=='b'){
                    return 1;
                }
                else if(c=='p' && co1==1){
                    return 1;
                }
                break;
            }
            co1++;
        }
        int i9 = -1,i10 = 1;
        co1 = 0;
        while(a+i9>=0 && b+i10<8){
            char c = board[a+i9][b+i10];
            if(c!='_'){
                if(c=='q'||c=='b'){
                    return 1;
                }
                else if(c=='p' && co1==1){
                    return 1;
                }
                break;
            }
            co1++;
        }
    }
    else{
        int i = 0,a,b;
        while(i<8){
            int j =0;
            while(j<8){
                if(board[i][j]=='k'){
                    a = i;
                    b = j;
                    break;
                }
                j++;
            }
            i++;
        }
        int i1 = a+1;
        while(i1<8){
            char c = board[i1][b];
            if(c!='_'){
                if(c=='Q'||c=='R'){
                    return 1;
                }
                break;
            }
            i1++;
        }
        int i2 = a-1;
        while(i2>=0){
            char c = board[i2][b];
            if(c!='_'){
                if(c=='Q'||c=='R'){
                    return 1;
                }
                break;
            }
            i2--;
        }
        int i3 = b+1;
        while(i3<8){
            char c = board[a][i3];
            if(c!='_'){
                if(c=='Q'||c=='R'){
                    return 1;
                }
                break;
            }
            i3++;
        }
        int i4 = b-1;
        while(i4>=0){
            char c = board[a][i4];
            if(c!='_'){
                if(c=='Q'||c=='R'){
                    return 1;
                }
                break;
            }
            i4--;
        }
        int i5 = -1,co1 = 0;
        while(a+i5>=0 && b+i5>=0){
            char c = board[a+i5][b+i5];
            if(c!='_'){
                if(c=='Q'||c=='B'){
                    return 1;
                }
                else if(c=='P' && co1==1){
                    return 1;
                }
                break;
            }
            co1++;
        }
        int i6 = 1;
        co1 = 0;
        while(a+i6<8 && b+i6<8){
            char c = board[a+i6][b+i6];
            if(c!='_'){
                if(c=='Q'||c=='B'){
                    return 1;
                }
                else if(c=='P' && co1==1){
                    return 1;
                }
                break;
            }
            co1++;
        }
        int i7 = 1,i8 = -1;
        co1 = 0;
        while(a+i7<8 && b+i8>=0){
            char c = board[a+i7][b+i8];
            if(c!='_'){
                if(c=='Q'||c=='B'){
                    return 1;
                }
                else if(c=='P' && co1==1){
                    return 1;
                }
                break;
            }
            co1++;
        }
        int i9 = -1,i10 = 1;
        co1 = 0;
        while(a+i9>=0 && b+i10<8){
            char c = board[a+i9][b+i10];
            if(c!='_'){
                if(c=='Q'||c=='B'){
                    return 1;
                }
                else if(c=='P' && co1==1){
                    return 1;
                }
                break;
            }
            co1++;
        }
    }
    return 0;
}

void print() {
    printf("    ");
    int i = 0;
    while(i<8){
      printf("%d ",i);
      i++;
    }
    printf("\n");
    for (int row = 0; row < 8; row++) {
        printf("%d | ",row);
        for (int col = 0; col < 8; col++) {
            printf("%c ", board[row][col]);
        }
        printf("| %d",row);
        printf("\n");
    }
    printf("    ");
    i = 0;
    while(i<8){
      printf("%d ",i);
      i++;
    }
    printf("\n");
}

int Valid(int a, int b, int n, int m, char p, int pn) {
    if(a<0 || a>7 || b<0 || b>7 || n<0 || n>7 || m<0 ||m>7){
        return 0;
    }
    if((pn==1 && islower(board[n][m]))||(pn==2 && isupper(board[n][m]))){
        return 0;
    }
    int dx = m-b;
    int dy = n-a;
    switch (tolower(p)) {
        case 'r':
            if(dx!=0 && dy!=0){
                return 0;
            }
            if(dx!=0){
                int i;
                if(dx>0){
                    i = 1;
                }
                else{
                    i = -1;
                }
                for(int col = b+i; col!=m; col+=i){
                    if(board[a][col]!='_'){
                        return 0;
                    }
                }
            } 
            else if(dy!=0){
                int i;
                if(dy>0){
                    i = 1;
                }
                else{
                    i = -1;
                }
                for(int row = a+i; row!=n; row+=i){
                    if(board[row][b]!='_'){
                        return 0;
                    }
                }
            }
            break;
        case 'n':
            if((abs(dx)!=1||abs(dy)!=2)&&(abs(dx)!=2||abs(dy)!=1)){
                return 0;
            }
            break;
        case 'b':
            if(abs(dx)!=abs(dy)){
                return 0;
            }
            int i;
            if(dx>0){
                i = 1;
            }
            else{
                i = -1;
            }
            int j;
            if(dy>0){
                j = 1;
            }
            else{
                j = -1;
            }
            for(int ii = 1;ii<abs(dx);ii++){
                if(board[a + ii*j][b + i*ii]!='_'){
                    return 0;
                }
            }
            break;
        case 'q':
            if(dx!=0 && dy!=0 && abs(dx)!=abs(dy)){
                return 0;
            }
            if(dx!=0 && dy==0) {
                int i;
                if(dx>0){
                    i = 1;
                }
                else{
                    i = -1;
                }
                for(int col = b+i;col!=m;col+=i){
                    if(board[a][col]!='_'){
                        return 0;
                    }
                }
            } 
            else if(dx==0 && dy!=0){
                int i;
                if(dy>0){
                    i = 1;
                }
                else{
                    i = -1;
                }
                for(int row = a+i; row!=n; row+=i) {
                    if(board[row][b]!='_'){
                        return 0;
                    }
                }
            } 
            else if(abs(dx)==abs(dy)){
                int i;
                if(dx>0){
                    i = 1;
                }
                else{
                    i = -1;
                }
                int j;
                if(dy>0){
                    j = 1;
                }
                else{
                    j = -1;
                }
                for(int ii = 1; ii<abs(dx); i++){
                    if(board[a + ii*j][b + ii*i]!='_'){
                        return 0;
                    }
                }
            }
            break;
        case 'k':
            if(abs(dx)>1 || abs(dy)>1){
                return 0;
            }
            break;
        case 'p':
            if(dx!=0 && abs(dx)!=1){
                return 0;
            }
            if(pn==1 && dx!=0 && dy==0){
                return 0;
            }
            if(pn==2 && dx!=0 && dy==0){
                return 0;
            }
            if(pn==1 && dy!=1 && dy!=2){
                return 0;
            }
            if(pn==2 && dy!=-1 &&dy!=-2){
                return 0;
            }
            break;
        default:
            return 0;
    }
    
    return 1;
}

int Win() {
    int K = 1;
    int k = 1;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] == 'K') {
                K = 0;
            } else if (board[i][j] == 'k') {
                k = 0;
            }
        }
    }
    if(K){
        printf("Player 2 (Black) wins! White King captured.\n");
        return 1;
    } 
    if(k){
        printf("Player 1 (White) wins! Black King captured.\n");
        return 1;
    }
    return 0;
}

int main() {
    int a,b,n,m;
    int cp = 1;
    print();
    while(1){
        printf("Player %d's turn\n", cp);
        printf("Enter the starting position (row col): ");
        scanf("%d %d", &a, &b);
        printf("Enter the ending position (row col): ");
        scanf("%d %d", &n, &m);
        char p = board[a][b];
        if(Valid(a,b,n,m,p,cp)){
            board[n][m] = p;
            board[a][b] = '_';
            print();
            if(Win()){
                break;
            }
            if(check(cp)){
                printf("Check\n");
            }
            if(cp==1){
                cp = 2;
            }
            else{
                cp = 1;
            }
        } 
        else{
            printf("Invalid move!\n");
        }
    }
    return 0;
}
