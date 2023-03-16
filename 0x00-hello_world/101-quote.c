#include <unistd.h> 
#include <sys/syscall.h>
/**
 * main - A hard program
 * Return: 1
 */
int main(void) 
{ 
    const char msg[] = "Hello, world!\n"; 
    syscall(SYS_write, 1, msg, sizeof(msg)); 
    return 0; 
} 
