# OpenFOAM Linux Cheat Sheet

## contents
1. File & Directory
2. Text
3. Binary & Package
4. Process & Environment
5. Redirection  

## File & Directory
**mkdir　  　[OPTION]...  DIRECTORY...**
* **-p**　  　make parent directories. 用于创建递归的路径

```bash
$ mkdir -vp test2/{test2.1,test2.2}           # 创建文件夹test2，并在test2中创建test2.1和test2.2.
$ mkdir -p $FOAM_RUN  
# 创建$FOAM_RUN文件夹。如果安装成功openFOAM，$FOAM_RUN代表的是一个让用户跑case的路径。用这个方式来把这个路径真实的创造出来。
```


**cp & mv**　  　**[OPTION]... [-T] SOURCE DEST**
　  　　  　　  **[OPTION]...SOURCE...DIRECTORY**
> forest comment: 在markdown语法中，想要实现两个连着的空格，可以用中文的空格。用两个（or以上）英文空格的效果还是一个空格。

* **-b**　  　make a backup of each existing destination file
* **-n**　  　do not overwrite an existing file 
* **-i**　  　prompt before overwrite  # 实际上是非常重要的. 因为复制会默认覆盖，所以复制重要文件时，注意用-i来提醒自己是否要覆盖当前的文件。
* **-r**　  　copy(move) directories recursively

```bash
$ cp -r $FOAM_TUTORIALS . #注意$FOAM_TUTORIALS也是openFoam指定的路径，这个意思是把tutorial文件下的所有case复制到当前文件下。
```

**rm**　  　[OPTION]... FILE...
* **-f**　  　never prompt
* **-i**　  　prompt before every removal
* **-r**　  　remove directories recursively  

```bash
$ rm -rf fileName
```
>  较为危险的指令，很容易就gg了。可是用起来无比惬意，一次性彻底删除不要的东西。所以建议大家还是经常备份重要数据，一不小心删错了，那就很捉急了。温馨提示，如果误删，请不要再进行任何操作，还是有挽救的办法，请自行google/baidu.


**ln　  　source_file...target_file
* **-s**　  　 create a soft link;

```bash
$ ln -s /opt/openfoam30/doc/Guides-a4/UserGuide.pdf ~/Desktop/UserGuide.pdf 
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



