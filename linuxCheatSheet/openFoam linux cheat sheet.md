# OpenFOAM Linux Cheat Sheet

## contents
1. File & Directory
2. Text
3. Binary & Package
4. Process & Environment
5. Redirection  

## File & Directory
**mkdir　  　[OPTION]...  DIRECTORY...**
* **-p**　  　make parent directories  

```bash
$ mkdir -p $FOAM_RUN
```

**cp & mv**　  　**[OPTION]... [-T] SOURCE DEST**
　  　　  　　  **[OPTION]...SOURCE...DIRECTORY**
> forest comment: It's really a problem to input the continuous space in Markdown file. In previous contents of this file, as shown above, I use 中文的空格 to creat the multi-space effect. While, maybe there should be some extent before the 中文的空格. This should be discussed.

* **-b**　  　make a backup of each existing destination file
* **-n**　  　do not overwrite an existing file 
* **-i**　  　prompt before overwrite
* **-r**　  　copy(move) directories recursively

```bash
$ cp -r $FOAM_TUTORIALS . #注意$FOAM_TUTORIALS有个默认的路径，这个意思是把这个目录复制到当前文件下。
```

**rm**　  　[OPTION]... FILE...
* **-f**　  　never prompt
* **-i**　  　prompt before every removal
* **-r**　  　remove directories recursively  


```bash
$ rm -ri 0\.[^o]*
```

**ln　  　TARGET... DIRECTORY**
* **-s**　  　soft link

```bash
$ ln -s /opt/openfoam30/doc/Guides-a4/UserGuide.pdf ~/Desktop/UserGuide
```

**touch　  　[OPTION]... FILE...**

```bash
$ touch cavity.OpenFOAM # 新建一个算例的数据文件，可以用paraview打开。
```

**chmod　  　[OPTION]...MODE[,MODE]...FILE...
　  　　  　[OPTION]...OCTAL-MODE FILE...**
        
```bash
$ chmod +x Allrun    # 提高Allrun文件的执行权限
```




> forest: be added and revised 
find
[OPTION] [path…] [expression]
$ find tutorials/ -name simpleFoam
locate
[OPTION]... PATTERN...
$ locate interPhaseChangeFoam.C
Text
echo
[SHORT-OPTION]... [STRING]...
 -e
enable interpretation of backslash escapes
$ echo -e '\n'$FOAM_SRC'\n'
less
[FILE]...
$ less $WM_PROJECT_DIR/Allwmake
vi
[FILE]...
$ vi ~/.bashrc
grep
[OPTIONS] PATTERN [FILE...]
 -i
ignore case distinctions in both the  PATTERN and the input files
 -h
Suppress the prefixing of file names on  output.
$ grep -ih build $WM_PROJECT_DIR/Allwmake
Binary & Package
whereis
[-bmsu] filename...
 -b
Search only for binaries
$ whereis -b paraview
whatis
name ...
$ whatis evince
man
[OPTION] page…
$ man chmod
apropos
[OPTION] keyword…
$ apropos plot
apt-get

 update
resynchronize the package index files
 upgrade
install the newest versions of all packages currently installed on the system
 install
install packages
 remove
uninstall packages
$ sudo apt-get install openfoam4
apt-cache

 search
perform a full text search on all available package lists
$ apt-cache search openfoam
Process & Environment
ps
[OPTIONS]
 -e
see every process on the system
$ ps -e
kill
[options] <pid> [...]
 -9
send SIGKILL
 -l
list  signal  names
$ kill -9 12974
env
[OPTION]... [-] [NAME=VALUE]...
$ env | grep ^FOAM_
alias
[-p] [name[=value] ... ]
$ alias mv='mv -i'
source
FILE...
$ source /opt/openfoam30/etc/bashrc
Redirection
command1 > file1
execute command1, placing the output in file1
command1 >> file1
append output to the end of the file
command1 < file1
execute command1, with file1 as the source of input
tr a-z A-Z << END_TEXT
read from a stream literal
command1 | command2
executes command1, using its output as the input for command2
Copyright © 2016 Zhang Qi
