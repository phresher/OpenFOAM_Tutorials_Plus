# OpenFOAM Linux Cheat Sheet #

## File & Diredtory ##

#### mkdir ####
```
mkdir	[OPTION]... DIRECTORY...
-p	make parent directories
```
```bash
# 创建 OpenFOAM 运行目录
mkdir -p $FOAM_RUN
```

#### cp & mv ####
```
cp & mv	[OPTION]... [-T] SOURCE DEST 
	[OPTION]...SOURCE...DIRECTORY
-b	make a backup of each existing destination file
-n	do not overwrite an existing file
-i	prompt before overwrite
-r	copy(move) directories recursively
```
```bash
# 将 OpenFOAM Tutorials 复制到当前目录
cp -r $FOAM_TUTORIALS .
```
