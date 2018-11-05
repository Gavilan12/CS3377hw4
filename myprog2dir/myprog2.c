#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

#define RWX (S_IRUSR|S_IWUSR|S_IXUSR )
#define RW (S_IRUSR|S_IWUSR )

int main()
{
mkdir("dir1", RWX);
creat("dirl/file10",RW);

mkdir("dir2", RWX);
creat("dir2/file20", RW);

creat("file1", RW );
symlink("dir2/file20", "link1"); 

return 0;
}