#include <stdio.h>
 
int main() {
    if (remove("pathu.txt") == 0) {
        printf("The file is deleted successfully.");
    } else {
        printf("The file is not deleted.");
    }
    return 0;
}
