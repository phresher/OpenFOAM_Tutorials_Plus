# OpenFOAM Linux Cheat Sheet #

## File & Diredtory ##

<table>
    <tr>
    <td> <b> mkdir </b> </td>
    <td> [OPTION]... DIRECTORY... </td>
    </tr>
    <tr>
    <td> -p </td>
    <td> make parent directories </td>
    </tr>
</table>

```Bash
mkdir -p $FOAM_RUN
```

<table>
    <tr>
    <td> <b> cp & mv </b> </td>
    <td> [OPTION]... [-T] SOURCE DEST <br>  [OPTION]...SOURCE...DIRECTORY</td>
    </tr>
    <tr>
    <td> -b </td>
    <td> make a backup of each existing destination file </td>
    </tr>
    <tr>
    <td> -n </td>
    <td> do not overwrite an existing file </td>
    </tr>
    <tr>
    <td> -i </td>
    <td> prompt before overwrite </td>
    </tr>
    <tr>
    <td> -r </td>
    <td> copy(move) directories recursively </td>
    </tr>
</table>

```Bash
cp -r $FOAM_TUTORIALS .
```
