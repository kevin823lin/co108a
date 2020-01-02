#include <stdio.h>

int main()
{
    int r0, r1, r2;
    while(1)
    {
        scanf("%d %d", &r0, &r1);
        r2 = 0; // @0 D=A @2 M=D

        Loop: // (LOOP)
        if(r0 <= 0) goto END; // @0 D=M @LOOP D;JLE
            r2 = r2 + r1; // @1 D=M @2 R=R+D
            r0 = r0 - 1; // @0 R=R-1
            goto Loop; // @END 0;JMP
        END: // (END)

        // while(r0--)
        // {
        //     r2+=r1;
        // }

        printf("R2=%d\n", r2);
    }
}