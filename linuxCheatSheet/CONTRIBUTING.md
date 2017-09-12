# Contributing to OpenFOAM Linux Cheat Sheet #

先看下我创建的两个文件 [linuxCheatSheet.md](https://github.com/phresher/OpenFOAM_Tutorials_Plus/blob/md-preview/linuxCheatSheet/linuxCheatSheet.md) 和 [linuxCheatSheet2.md](https://github.com/phresher/OpenFOAM_Tutorials_Plus/blob/md-preview/linuxCheatSheet/linuxCheatSheet2.md)

linuxCheatSheet.md 在 markdown 文件内使用了 HTML 语言，效果差强人意。在 markdown 内使用 HTML 语言可以解决表格内换行、合并单元格等简单操作，GitHub markdown 不支持某些复杂的 HTML 样式。

这种做法太过繁琐，背离了 markdown 语言设计的初衷，也不便于公共编辑。

一个使用 markdown 正面的例子是[the-art-of-command-line](https://github.com/jlevy/the-art-of-command-line)，这是一个以 Linux 命令为主的命令行使用建议，在热心网友的完善下，有多种语言的译本。这个项目展示了 markdown 的优点，也展现了 GitHub 工作流程的优越性。

借鉴这个项目的做法，我们要考虑的问题是如何用 markdown 已有的特性完成文章的各个组成部分。

在 Word 和 HTML 中，常用表格来实现“对齐”功能。这种操作在 markdown 中无法实现，markdown 中表格的样式无法修改，不能取消框线。

所以我们不用表格，换用代码框来实现简单的行间对齐功能。这里需要特别注意的是，在 markdown 本身的语法中 tab 键等效于两个空格，因而在一些 markdown 编辑器中按下 tab 键会自动变成两个空格，这时需要修改编辑器设置。

linuxCheatSheet2.md 便采用这种做法，保留了原生的 markdown 风格。希望你喜欢~
