# cmsgbox
C++ Library, used to quickly call msgbox of Visual Basic for Applications. Windows only
# What's msgbox?
msgbox is a function of Visual Basic for Applications (VBA), this function can display a window, display content, buttons and icons. msgbox is the same as Windows native window, you can call it in C++ through cmsgbox.
#Build
It's very easy! You just need to download the sources and compile them with g++
# How to use?
We provide two source codes, one is called through "argv" options, and the other is called through functions.
## Version of the options call
The file "msgbox.cpp" in the root directory of this repository. This file is run by calling options. This is easy to understand, see the following example:
If you want to run a msgbox with the title "Welcome" and the content "Hello", you can display the msgbox through the following code after compilation:
Open cmd in your working directory, and run:
```
msgbox.exe "Hello" 0 "Welcome"
```
