#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>

//TODO 扫描当前目录文件  读取txt 并每行依次写入到 csv文件

//写入文件内容至csv文件
int write_to_csv()
{
    FILE *f = fopen("Mydata.csv", "w");
    if (f == NULL) return -1;

    fclose(f);
    return 0;
}

//扫码当前目录文件
char * scanDirFile()
{
    char buf[80];
    getcwd(buf,sizeof(buf));

    DIR * dir;
    struct dirent * ptr;
    int i;
    dir = opendir(buf);
    while((ptr = readdir(dir)) != NULL)
    {
        if(strstr(ptr->d_name, '.c') != NULL)
        {
            printf("d_name : %s\n", ptr->d_name);
        }

    }
    return
}

//读取目录文件内容
int readFromTxt()
{

}

int main()
{
    scanDirFile();
    return 0;
}
