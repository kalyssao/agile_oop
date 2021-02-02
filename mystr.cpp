#include <iostream>
#include <cstring>
#include "mystr.h"
namespace my {
    int strcmp(const char *l, const char *r){
        while (*l){
            if (*l != *r)
                break;
            l++;
            r++;
            
        }
        return *(const unsigned char *)l - *(const unsigned char *)r;
    }

    int strlen(const char *s){
        int count = 0;
        while (*s++ != '\0') {
            ++count;
        }
        return count;
    }
    
    // Concatenates (appends) r on to the end of l, and returns l
    // else try copying into whole new array size of the two
    char *strcat(char *l, const char *r){
        char *start = l;
        while (*l != '\0'){
            l++;
        }

        while (*r != '\0') {
            *l++ = *r++;
        }
        *l = '\0';
        return start;

    }
    
    
    // Copies the contents of r over the contents of l, and returns l 
    char *strcpy(char *l, const char *r){
        char *start = l;

        // only copy limit
        int limit = my::strlen(r);
        int count = 0;

        while (count != limit){
            *l++ = *r++;
            count++;
        }
        *l = '\0';
        if ( strlen(l) > limit ) {
            for (int i; i < (limit - strlen(l)); i++){
                l[i] = '\0';
            }
        }
        return start;

    }
    
    // Converts the characters in s to uppercase, and returns s
    //char *toupper(char *s) {
        // while *s++ != '\0' {

        // }
        // int ascii = int (s)
        // if ( ascii >= 97 ) {
        //     char upper = ascii - 32;
        //     char *s = &upper;
        //     return *s;
        // }
    //}
    

}

int main () {
    char str1[] = "abc";
    char str2[] = "hab";

    char* cp1 = str1;
    char const * cp2 = str2;

    int length = my::strlen(cp1);
    //char *cat = my::strcat(cp1, cp2);
    char *copy = my::strcpy(cp1, cp2);
    //std::cout << "appended is " << cat << std::endl;
    std::cout << "copied is " << copy << std::endl;
}
