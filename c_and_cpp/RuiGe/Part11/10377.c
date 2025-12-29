#include <stdio.h>

void print(int counter,char nums[])
{
    int result = 0;
    for (int i = 0;i < counter;i++){
        result = result * 10 + (nums[i] - '0');
    }
    if (counter > 0){
        printf("%7d",result);
    }
}

int main()
{
    int is_num = 0;
    int whether_output_info = 1;
    char temp[128];
    printf("输入表达式(以#结束)：");
    int i = 0;
    char input;
    while (i < 128){
        input = getchar();
        if (input == '#'){
            print(i,temp);
            break;
        }
        else if (input >= '0' && input <= '9'){
            temp[i] = input;
            is_num = 1;
            i++;
        }
        else{
            if (whether_output_info){
                printf("提取的整数为：");
                whether_output_info = 0;
            }
            if (is_num){
                print(i,temp);
                i = 0;
                is_num = 0;
            }
        }
    }
    return 0;
}