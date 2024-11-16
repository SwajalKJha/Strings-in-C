#include <stdio.h>
#include <stdlib.h>

unsigned int ipToUInt(const char *ip);

int main() 
{
    char ip[16];

    printf("Enter an IP address (a.b.c.d format): ");
    fgets(ip, sizeof(ip), stdin);
    ip[strcspn(ip, "\n")] = '\0'; 

    unsigned int packedIP = ipToUInt(ip);

    printf("The packed IP address as a 32-bit unsigned integer: %u\n", packedIP);

    return 0;
}
unsigned int ipToUInt(const char *ip) 
{
    unsigned int result = 0;
    unsigned char byte;
    
    const char *ptr = ip;
    for (int i = 0; i < 4; i++) 
    {
        byte = 0;
        while (*ptr != '.' && *ptr != '\0') 
        {
            byte = byte * 10 + (*ptr - '0'); 
            ptr++;
        }
        result = (result << 8) | byte; 
        if (*ptr == '.') ptr++; 
    }

    return result;
}
