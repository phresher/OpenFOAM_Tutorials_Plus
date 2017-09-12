# OpenFOAM Linux Cheat Sheet #

## File & Diredtory ##

#### mkdir ####
```
mkdir	[OPTION]... DIRECTORY...
-p	make parent directories
```
```bash
$ mkdir -p $FOAM_RUN
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
$ cp -r $FOAM_TUTORIALS .
```
