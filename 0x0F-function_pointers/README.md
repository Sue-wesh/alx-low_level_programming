FUNCTION POINTERS

They point to the address of the first instruction in a function. Remember that a function occupies a block of memory hence the function pointers point to the address of the first instruction.

DECLARATION
void foo()
{
    printf("Hello");
}
int main()
{
    void (*ptr)();
    ptr();
}
