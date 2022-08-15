#include<stdio.h>
int whileLoop();
int doLoop();
int forLoop();
int forBreak();
int forContinue();
int whileBreak();
int whileContinue();

int wl=0, dl=0, fl, fb, fc, wb=0, wc=0;

int main()
{
    whileLoop();
    doLoop();
    forLoop();
    forBreak();
    forContinue();
    whileBreak();
    whileContinue();

    return 0;
}

int whileLoop()
{
    
    while (wl<4)
    {
        printf("%d while loop\n", wl);
        wl++;
    }
    return 0;
}
int doLoop()
{
    do
    {
        printf(" %d do loop\n", dl);
        dl++;
    }
    while(dl<4);

    return 0;
}
int forLoop()
{
    for(fl=0; fl<4; fl++)
    {
        printf("  %d for loop\n", fl);
    }
    return 0;
}
int forBreak()
{
    for(fb=0; fb<4; fb++)
    {
        {
            if(fb==2)
            break;
        }
        printf("   %d for break\n", fb);
    }
    return 0;
}
int forContinue()
{
    for(fc=0; fc<4; fc++)
    {
        {
            if(fc==2)
            continue;
        }
        printf("    %d for continue\n", fc);
    }
    return 0;
}
int whileBreak()
{
    while(wb<4)
    {
        if(wb==2)
        {
            break;
        }
        printf("     %d while break\n", wb);
        wb++;
    }
    return 0;
}
int whileContinue()
{
    while(wc<4)
    {
        if(wc==2)
        {
            wc++;
            continue;
        }
        printf("      %d while continue\n", wc);
        wc++;
    }
    return 0;
}

