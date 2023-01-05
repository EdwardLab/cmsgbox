# cmsgbox
C++ Library, used to quickly call msgbox of Visual Basic for Applications. Windows only
# What's msgbox?
msgbox is a function of Visual Basic for Applications (VBA), this function can display a window, display content, buttons and icons. msgbox is the same as Windows native window, you can call it in C++ through cmsgbox.
# Build
It's very easy! You just need to download the sources and compile them with g++
# How to use?
We provide two source codes, one is called through "argv" options, and the other is called through functions.
## Version of the options call
The file "msgbox.cpp" in the root directory of this repository. This file is run by calling options. This is easy to understand, see the following example:  
If you want to run a msgbox with the title "Welcome" and the content "Hello", you can display the msgbox through the following command after compilation:  
Open cmd in your working directory, and run:  
```
msgbox.exe "Hello" 0 "Welcome"
```
"0" in this command represents the window style and buttons settings, which corresponds to the same style as msgbox, for example, "64" can be Display Information Message icon with your content text.  
Here are all the buttons settings:  

|Constant|Value|Description|
|:-----|:-----|:-----|
|**vbOKOnly**|0|Display **OK** button only.|
|**vbOKCancel**|1|Display **OK** and **Cancel** buttons.|
|**vbAbortRetryIgnore**|2|Display **Abort**, **Retry**, and **Ignore** buttons.|
|**vbYesNoCancel**|3|Display **Yes**, **No**, and **Cancel** buttons.|
|**vbYesNo**|4|Display **Yes** and **No** buttons.|
|**vbRetryCancel**|5|Display **Retry** and **Cancel** buttons.|
|**vbCritical**|16|Display **Critical Message** icon.|
|**vbQuestion**|32|Display **Warning Query** icon.|
|**vbExclamation**|48|Display **Warning Message** icon.|
|**vbInformation**|64|Display **Information Message** icon.|
|**vbDefaultButton1**|0|First button is default.|
|**vbDefaultButton2**|256|Second button is default.|
|**vbDefaultButton3**|512|Third button is default.|
|**vbDefaultButton4**|768|Fourth button is default.|
|**vbApplicationModal**|0|Application modal; the user must respond to the message box before continuing work in the current application.|
|**vbSystemModal**|4096|System modal; all applications are suspended until the user responds to the message box.|
|**vbMsgBoxHelpButton**|16384|Adds **Help** button to the message box.|
|**vbMsgBoxSetForeground**|65536|Specifies the message box window as the foreground window.|
|**vbMsgBoxRight**|524288|Text is right-aligned.|
|**vbMsgBoxRtlReading**|1048576|Specifies text should appear as right-to-left reading on Hebrew and Arabic systems.|

The first group of values (0-5) describes the number and type of buttons displayed in the dialog box; the second group (16, 32, 48, 64) describes the icon style; the third group (0, 256, 512) determines which button is the default; and the fourth group (0, 4096) determines the modality of the message box. When combining numbers to create a final value for the _buttons_ argument, use only one number from each group.  
The binary version of cmsgbox can be integrated in any program, just call it through the "system" function of any language.  
## Version of the function call
Under the "function" folder of this warehouse, we can find the msgbox.cpp file, but this is called as a library, we can view "demo.cpp", which provides a simple example, and this function is also very simple to use.  
Here is a Hello World:
```
#include<iostream>
#include "msgbox.cpp"
using namespace std;
int main()
{
  msgbox("Hello World", 0, "cmsgbox Title");
}
```
